#include "CommandBroadcaster.hpp"

CommandBroadcaster::CommandBroadcaster() {
    connect(&my_udp_socket, SIGNAL(readyRead()), this, SLOT(process_pending_datagrams()));
    if (my_udp_socket.state() == QUdpSocket::UnconnectedState) {
        my_udp_socket.bind(port);
    }
}

CommandBroadcaster::~CommandBroadcaster() {
    my_udp_socket.close();
}

void CommandBroadcaster::send_hello() {
    my_udp_socket.writeDatagram(hello.data(), hello.size(), QHostAddress::Broadcast, port); 
}

void CommandBroadcaster::send_ping() {

}

void CommandBroadcaster::send_quit() {

}

void CommandBroadcaster::process_pending_datagrams() {
    while (my_udp_socket.hasPendingDatagrams()) {
        //TODO a lot of things to do :(
    }
}