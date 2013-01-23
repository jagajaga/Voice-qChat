/* 
 * File:   VoiceThread.hpp
 * Author: jaga
 *
 * Created on January 6, 2013, 3:23 PM
 */

#ifndef VOICETHREAD_HPP
#define	VOICETHREAD_HPP

#include <QObject>
#include <vector>
#include <QMap>

#include "soundlib/asoundpp.hpp"
#include "soundlib/input_device.hpp"
#include "soundlib/speex_encoder.hpp"

#include "soundlib/output_device.hpp"
#include "soundlib/speex_decoder.hpp"
#include "CommandBroadcaster.hpp"

#include <speex/speex.h>

class VoiceThread : public QObject {
    Q_OBJECT
private:
    CommandBroadcaster * my_command_broadcaster;
    asound::global_config_cleanup cleanup;
    frame_format const fmt = frame_format(44100, 1, SOUNDIO_SAMPLE_FORMAT_S16);

    input_device * in;
    QMap <QString, output_device *> out;
    
    
    speex_encoder encoder;
    speex_decoder decoder;

    int const voice_const = 44100;

    std::vector<char> voice = std::vector<char>(encoder.block_size() * fmt.frame_size());
    std::vector<char> v;
    std::vector<char> outv = std::vector<char>(decoder.block_size() * fmt.frame_size());
public slots:
    void read();
    void write(QByteArray const &, QString);
    void add_output_device(QString, QString);
signals:
    void send_encoded(QByteArray &);
public:
    VoiceThread();
    ~VoiceThread();
    bool mute = false;

};

#endif	/* VOICETHREAD_HPP */

