#include "CommandBroadcaster.hpp"
#include "VoiceThread.hpp"
#include <QNetworkInterface>

#include <iostream>

CommandBroadcaster::CommandBroadcaster() {
    connect(&my_udp_socket, SIGNAL(readyRead()), this, SLOT(process_pending_datagrams()));
    my_ip = local_ip();
}

CommandBroadcaster::~CommandBroadcaster() {
    my_udp_socket.close();
}

void CommandBroadcaster::open_port() {
    open = 1;
    if (my_udp_socket.state() == QUdpSocket::UnconnectedState) {
        my_udp_socket.bind(port);
    }
}

bool CommandBroadcaster::re_port() {
    if (!open) {
        open_port();
        open = true;
        return 1;
    } else {
        close_port();
        open = false;
        return 0;
    }
}

void CommandBroadcaster::close_port() {
    my_udp_socket.close();
    open = 0;
}

void CommandBroadcaster::send_ping() {
    my_udp_socket.writeDatagram(ping.data(), ping.size(), QHostAddress::Broadcast, port);
    emit drop_table();
}

void CommandBroadcaster::send_ping(QHostAddress qha) {
    my_udp_socket.writeDatagram(ping.data(), ping.size(), qha, port);
}

void CommandBroadcaster::send_nick() {
    my_udp_socket.writeDatagram(nick.data(), nick.size(), QHostAddress::Broadcast, port);
}

void CommandBroadcaster::send_nick(QHostAddress qha) {
    my_udp_socket.writeDatagram(nick.data(), nick.size(), qha, port);
}

void CommandBroadcaster::send_quit() {
    my_udp_socket.writeDatagram(quit.data(), quit.size(), QHostAddress::Broadcast, port);
}

void CommandBroadcaster::set_nick(QString new_nick) {
    new_nick = "HELLO " + new_nick + "\0";
    nick = new_nick.toUtf8();
}

QHostAddress CommandBroadcaster::local_ip() {
    QList <QHostAddress> adder = QNetworkInterface::allAddresses();
    return adder.at(2);
}

void CommandBroadcaster::send_encoded(QByteArray const & encoded) {
    QByteArray tmp;
    tmp = audio;
    tmp.append(encoded);
    my_udp_socket.writeDatagram(tmp.data(), tmp.size(), QHostAddress::Broadcast, port);
}

void CommandBroadcaster::process_pending_datagrams() {
    while (my_udp_socket.hasPendingDatagrams()) {
        QByteArray datagram;
        datagram.resize(my_udp_socket.pendingDatagramSize());
        QHostAddress sender;
        my_udp_socket.readDatagram(datagram.data(), datagram.size(), &sender);
        if (sender == my_ip) {
            continue;
        }

        if (datagram.contains(ping.data())) {
            send_nick(sender);
            continue;
        }
        if (datagram.contains(quit.data())) {
            emit deleteUser(sender.toString());
            continue;
        }
        QByteArray temp;
        if (datagram.contains("HELLO")) {
            temp.clear();
            for (int i = 6; i < datagram.size(); i++) {
                temp.push_back(datagram[i]);
            }
            emit newUser(sender.toString(), QString(temp).toUtf8());
            continue;
        }
        if (datagram.contains("AUDIO")) {
            temp.clear();
            for (int i = 6; i < datagram.size(); i++) {
                temp.push_back(datagram[i]);
            }
            emit write_audio(temp, sender.toString());
        }
    }
}