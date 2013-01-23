#include "VoiceThread.hpp"


#include <iostream>

VoiceThread::VoiceThread() : in(new input_device(fmt)), v(std::vector<char>(voice_const * in->get_format().frame_size())), my_command_broadcaster(CommandBroadcaster::Instance()) {
    asound::global_config_cleanup cleanup;
}

VoiceThread::~VoiceThread() {
}

void VoiceThread::add_output_device(QString ip, QString nick) {
    out[ip] = new output_device(fmt);
}

void VoiceThread::read() {
    size_t nn = in->get_available();
    QByteArray source(nn * fmt.frame_size(), 0);
    if (nn == 0)
        nn = 1;
    else if (nn > voice_const)
        nn = voice_const;
    in->read(source.begin(), nn);

    if (my_command_broadcaster->open) {
        QByteArray res;
        for (size_t i = 0; source.size() - i >= encoder.block_size() * fmt.frame_size();
                i += encoder.block_size() * fmt.frame_size()) {
            encoder.encode(source.begin() + i);
            size_t size = encoder.get_encoded_size();
            res.append(size);
            res.append(QByteArray((const char*) encoder.get_encoded_data(), size));

        }
        if (!mute) {
            my_command_broadcaster->send_encoded(res);
        }
    }

}

void VoiceThread::write(QByteArray const & source, QString ip) {
    if (my_command_broadcaster->open) {
        QByteArray res;
        std::vector<char> buf(decoder.block_size() * fmt.frame_size());
        for (int i = 0; i < source.size();) {
            int enc_size = source.at(i);
            if (enc_size < 0) {
                break;
            }
            ++i;
            decoder.decode(source.begin() + i, enc_size, &buf[0]);
            res.append(&buf[0], decoder.block_size() * fmt.frame_size());
            i += enc_size;
        }
        if (out.count(ip)) {
            out[ip]->write(res, res.size() / fmt.frame_size());
        }
    }
}