/* 
 * File:   Command_broadcaster.hpp
 * Author: jaga
 *
 * Created on December 15, 2012, 11:14 PM
 */

#ifndef COMMAND_BROADCASTER_HPP
#define	COMMAND_BROADCASTER_HPP

#include <QUdpSocket>

#include "soundlib/speex_encoder.hpp"
#include "soundlib/speex_decoder.hpp"

class command_broadcaster : public QObject {
    Q_OBJECT
private:
    command_broadcaster();
    ~command_broadcaster();
    command_broadcaster(const command_broadcaster&);
    command_broadcaster& operator =(const command_broadcaster&);

    QUdpSocket my_udp_socket;
    QHostAddress my_ip;
    QByteArray nick = "HELLO ";
    QByteArray hello = "HELLO\0", ping = "PING\0", quit = "QUIT\0", audio = "AUDIO ";
    short const port = 4815;
    QHostAddress local_ip();
    bool connected();
public:

    static command_broadcaster* Instance() {
        static command_broadcaster * singleton = new command_broadcaster();
        return singleton;
    }
    void open_port();
    void close_port();
    bool re_port();
    void send_ping();
    void send_ping(QHostAddress);
    void send_nick();
    void send_nick(QHostAddress);
    void send_quit();
    void set_nick(QString);

    bool open = false;
public slots:
    void send_encoded(QByteArray const &);
private slots:
    void process_pending_datagrams();
signals:
    void write_audio(QByteArray const &, QString);
    void deleteUser(QString);
    void newUser(QString, QString);
    void drop_table();
};

#endif	/* COMMAND_BROADCASTER_HPP */