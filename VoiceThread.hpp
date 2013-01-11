/* 
 * File:   VoiceThread.hpp
 * Author: jaga
 *
 * Created on January 6, 2013, 3:23 PM
 */

#ifndef VOICETHREAD_HPP
#define	VOICETHREAD_HPP

#include <QThread>
#include <QObject>
#include <vector>

#include "soundlib/asoundpp.hpp"
#include "soundlib/input_device.hpp"
#include "soundlib/speex_encoder.hpp"

#include "soundlib/output_device.hpp"
#include "soundlib/speex_decoder.hpp"
#include "CommandBroadcaster.hpp"

#include <speex/speex.h>

class VoiceThread : public QThread {
    Q_OBJECT
private:
    CommandBroadcaster * my_command_broadcaster;
    asound::global_config_cleanup cleanup;
    frame_format fmt = frame_format(44100, 1, SOUNDIO_SAMPLE_FORMAT_S16);

    speex_encoder encoder;
    speex_decoder decoder;


    std::vector<char> voice = std::vector<char>(encoder.block_size() * fmt.frame_size());

    void run();

    class Sleeper : public QThread {
    public:

        static void usleep(unsigned long usecs) {
            QThread::usleep(usecs);
        }

        static void msleep(unsigned long msecs) {
            QThread::msleep(msecs);
        }

        static void sleep(unsigned long secs) {
            QThread::sleep(secs);
        }
    };
signals:
    void send_encoded(speex_encoder *);
public:
    VoiceThread();
    VoiceThread(CommandBroadcaster * &);
    ~VoiceThread();


};

#endif	/* VOICETHREAD_HPP */

