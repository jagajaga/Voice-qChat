#include "VoiceThread.hpp"


#include <iostream>

void VoiceThread::run() {
    input_device in(fmt);
    output_device out(fmt);
    std::vector<char> outv = std::vector<char>(decoder.block_size() * fmt.frame_size());
    std::cerr << "run in voice\n";


    for (;;) {
        in.read(&voice[0], encoder.block_size());

        encoder.encode(&voice[0]);
        //emit send_encoded(&encoder);
        my_command_broadcaster->send_encoded(&encoder);
        Sleeper::sleep(5);
        //        decoder.decode(encoder.get_encoded_data(), encoder.get_encoded_size(), &outv[0]);
        //        out.write(&outv[0], decoder.block_size());

    }

}

VoiceThread::VoiceThread(CommandBroadcaster * & cb) {
    my_command_broadcaster = cb;
};