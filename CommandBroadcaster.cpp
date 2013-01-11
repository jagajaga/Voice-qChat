#include "CommandBroadcaster.hpp"
#include <QNetworkInterface>

#include <iostream>

CommandBroadcaster::CommandBroadcaster() {
    connect(&my_udp_socket, SIGNAL(readyRead()), this, SLOT(process_pending_datagrams()));
    //open_port();
    my_ip = local_ip();
}

CommandBroadcaster::CommandBroadcaster(QString nick) {
    CommandBroadcaster();
    nick = nick + "\0";
}

CommandBroadcaster::~CommandBroadcaster() {
    my_udp_socket.close();
}

void CommandBroadcaster::open_port() {
    if (my_udp_socket.state() == QUdpSocket::UnconnectedState) {
        my_udp_socket.bind(port);
    }
    open = 1;
}

bool CommandBroadcaster::re_port() {
    if (!open) {
        open_port();
        return 1;
    } else {
        close_port();
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

//Смотри, зашёл в сеть, кинул всем хелло, все узнали, какой у тебя ник. Потом кидаешь всем пинг, узнаешь, какие ники у всех
//они в ответ на пинг кидают тебе хелло

void CommandBroadcaster::process_pending_datagrams() {
    while (my_udp_socket.hasPendingDatagrams()) {
        QByteArray datagram;
        datagram.resize(my_udp_socket.pendingDatagramSize());
        QHostAddress sender;
        my_udp_socket.readDatagram(datagram.data(), datagram.size(), &sender);
        
        std::cerr << "IM HERE\n";
        if (sender == my_ip) {
            continue; //TODO may be it's unnessesary
        }
        std::cerr << datagram.data() << " data\n";
        QByteArray temp_nick;
        for (int i = 0; i < 5; i++)
            temp_nick.push_back(datagram[i]);
        if (temp_nick == "HELLO") {
            temp_nick.clear();
            for (int i = 6; i < datagram.size(); i++) {
                temp_nick.push_back(datagram[i]);
            }
            emit newUser(sender.toString(), QString(temp_nick).toUtf8());
            continue;
            
        }
        if (datagram == ping.data()) {
            send_nick(sender);
        }
        if (datagram == quit.data()) {
            emit deleteUser(sender.toString());
            continue;
        }
        temp_nick.clear();
        for (int i = 0; i < 5; i++)
            temp_nick.push_back(datagram[i]);
        if (temp_nick == "AUDIO") {
            temp_nick.clear();
            std::cerr << audio.data();
        }
    }
}

void CommandBroadcaster::send_encoded(speex_encoder * encoder) {
    
    std::cerr << audio.data();
   // audio = audio + ' ' + encoder->get_encoded_size() + encoder->get_encoded_data();
    my_udp_socket.writeDatagram(audio.data(), audio.size(), QHostAddress::Broadcast, port);
}