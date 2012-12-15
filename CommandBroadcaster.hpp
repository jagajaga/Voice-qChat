/* 
 * File:   Command_broadcaster.hpp
 * Author: jaga
 *
 * Created on December 15, 2012, 11:14 PM
 */

#ifndef COMMANDBROADCASTER_HPP
#define	COMMANDBROADCASTER_HPP

#include <QUdpSocket>

class CommandBroadcaster : public QObject {
    Q_OBJECT
private:
    QUdpSocket my_udp_socket;
    QByteArray hello = "HELLO\0", ping = "PING\0", quit = "QUIT\0", audio = "AUDIO";
    short port = 4815;
public:
    CommandBroadcaster();
    ~CommandBroadcaster();
    void send_hello();
    void send_ping();
    void send_quit();
private slots:
    void process_pending_datagrams();
signals:

}

#endif	/* COMMANDBROADCASTER_HPP */

