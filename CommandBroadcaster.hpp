/* 
 * File:   Command_broadcaster.hpp
 * Author: jaga
 *
 * Created on December 15, 2012, 11:14 PM
 */

#ifndef COMMANDBROADCASTER_HPP
#define	COMMANDBROADCASTER_HPP

#include <QUdpSocket>

#include "soundlib/speex_encoder.hpp"

class CommandBroadcaster : public QObject {
    Q_OBJECT
private:
    QUdpSocket my_udp_socket;
    QHostAddress my_ip;
    QByteArray nick = "HELLO ";
    QByteArray hello = "HELLO\0", ping = "PING\0", quit = "QUIT\0", audio = "AUDIO";
    short port = 4815;
    bool open;
    QHostAddress local_ip();
public:
    CommandBroadcaster();
    CommandBroadcaster(QString);
    ~CommandBroadcaster();
    void open_port();
    void close_port();
    bool re_port();
    void send_ping();
    void send_ping(QHostAddress);
    void send_nick();
    void send_nick(QHostAddress);
    void send_quit();

    void set_nick(QString);
public slots:
    void send_encoded(speex_encoder *);
private slots:
    void process_pending_datagrams();
signals:
    void deleteUser(QString);
    void newUser(QString, QString);
    void drop_table();

};

#endif	/* COMMANDBROADCASTER_HPP */

