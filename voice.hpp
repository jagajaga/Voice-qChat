/* 
 * File:   voice.hpp
 * Author: jaga
 *
 * Created on January 6, 2013, 3:23 PM
 */

#ifndef VOICE_HPP
#define	VOICE_HPP

#include <QObject>
#include <QMap>

#include "soundlib/asoundpp.hpp"
#include "soundlib/input_device.hpp"
#include "soundlib/speex_encoder.hpp"

#include "soundlib/output_device.hpp"
#include "soundlib/speex_decoder.hpp"
#include "command_broadcaster.hpp"

#include <speex/speex.h>

class voice : public QObject {
    Q_OBJECT
private:
    command_broadcaster * my_command_broadcaster;
    frame_format const fmt = frame_format(44100, 1, SOUNDIO_SAMPLE_FORMAT_S16);

    input_device * in;
    QMap <QString, output_device *> out;


    speex_encoder encoder;
    speex_decoder decoder;

    int const voice_const = 44100;

public:
    voice();
    ~voice();
    bool mute = false;

public slots:
    void read();
    void write(QByteArray const &, QString);
    void add_output_device(QString, QString);

signals:
    void send_encoded(QByteArray &);


};

#endif	/* VOICE_HPP */

