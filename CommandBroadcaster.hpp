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
#include "soundlib/speex_decoder.hpp"
//#include "VoiceThread.hpp"

//class CommandBroadcaster {
//};

class CommandBroadcaster : public QObject {

    Q_OBJECT
public:
    static CommandBroadcaster* Instance() {
        static CommandBroadcaster * singleton = new CommandBroadcaster();
        return singleton;
    }

    //    CommandBroadcaster();
    //    CommandBroadcaster(QString);
    //    ~CommandBroadcaster();
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

    // Other non-static member functions
private:

    CommandBroadcaster();
    ~CommandBroadcaster();
    CommandBroadcaster(const CommandBroadcaster&); // Prevent copy-construction
    CommandBroadcaster& operator=(const CommandBroadcaster&); // Prevent assignment

    QUdpSocket my_udp_socket;
    QHostAddress my_ip;
    QByteArray nick = "HELLO ";
    QByteArray hello = "HELLO\0", ping = "PING\0", quit = "QUIT\0", audio = "AUDIO ";
    short const port = 4815;
    QHostAddress local_ip();

    //VoiceThread * vt;

};

#endif	/* COMMANDBROADCASTER_HPP */