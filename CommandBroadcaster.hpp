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
    QHostAddress my_ip;
    QByteArray nick = "NICK ";
    QByteArray hello = "HELLO\0", ping = "PING\0", quit = "QUIT\0", audio = "AUDIO";
    short port = 4815;
    void open_port();
    void close_port();
    QHostAddress local_ip();
public:
    CommandBroadcaster();
    CommandBroadcaster(QString);
    ~CommandBroadcaster();
    void send_hello();
    void send_ping();
    void send_ping(QHostAddress);
    void send_nick();
    void send_nick(QHostAddress);
    void send_quit();
    
    void set_nick(QString);
private slots:
    void process_pending_datagrams();
signals:
    void deleteUser(QString);
    void newUser(QString);

};

#endif	/* COMMANDBROADCASTER_HPP */

