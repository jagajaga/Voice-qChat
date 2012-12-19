#include "CommandBroadcaster.hpp"
#include <QNetworkInterface>

CommandBroadcaster::CommandBroadcaster() {
    connect(&my_udp_socket, SIGNAL(readyRead()), this, SLOT(process_pending_datagrams()));
    open_port();
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
}

void CommandBroadcaster::close_port() {
    my_udp_socket.close();
}

void CommandBroadcaster::send_hello() {
    open_port();
    my_udp_socket.writeDatagram(hello.data(), hello.size(), QHostAddress::Broadcast, port);
}

void CommandBroadcaster::send_ping() {
    my_udp_socket.writeDatagram(ping.data(), ping.size(), QHostAddress::Broadcast, port);
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

void CommandBroadcaster::set_nick(QString nick){
    nick = nick;
    send_nick();
}

QHostAddress CommandBroadcaster::local_ip() {
    QList <QHostAddress> adder = QNetworkInterface::allAddresses();
    return adder.at(2);
}

void CommandBroadcaster::process_pending_datagrams() {
    while (my_udp_socket.hasPendingDatagrams()) {
        QByteArray datagram;
        datagram.resize(my_udp_socket.pendingDatagramSize());
        QHostAddress sender;
        my_udp_socket.readDatagram(datagram.data(), datagram.size(), &sender);
        if (sender == my_ip) {
            break;
        }
        if (datagram == hello) {
            send_ping(sender);
            emit newUser(sender.toString());
        } else if (datagram == ping) {
            emit newUser(sender.toString());
        } else {
            QByteArray temp_nick;
            for (int i = 0; i < 4; i++)
                temp_nick.push_back(datagram[i]);
            if (temp_nick == "NICK") {
                emit deleteUser(sender.toString());
                temp_nick.clear();
                for (int i = 5; i < datagram.size(); i++) {
                    temp_nick.push_back(datagram[i]);
                }
                emit newUser(nick);
            }
        }
    }
    //close_port();
}