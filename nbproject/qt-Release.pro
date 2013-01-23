# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-Linux-x86
TARGET = Voice_qChat
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui network
SOURCES += ../../C++/Sorokin/asoundpp/lib/soundio/asoundpp.cpp ../../C++/Sorokin/asoundpp/lib/soundio/speex_encoder.cpp ../../C++/Sorokin/asoundpp/lib/soundio/input_device.cpp ../../C++/Sorokin/asoundpp/lib/soundio/format.cpp main.cpp ../../C++/Sorokin/asoundpp/lib/soundio/speex_decoder.cpp mainDialog.cpp nickDialog.cpp ../../C++/Sorokin/asoundpp/lib/soundio/output_device.cpp ../../C++/Sorokin/asoundpp/lib/soundio/alsa_format_conversion.cpp CommandBroadcaster.cpp VoiceThread.cpp
HEADERS += ../../C++/Sorokin/asoundpp/lib/soundio/input_device.hpp ../../C++/Sorokin/asoundpp/lib/soundio/alsa_format_conversion.hpp nickDialog.hpp CommandBroadcaster.hpp ../../C++/Sorokin/asoundpp/lib/soundio/format.hpp ../../C++/Sorokin/asoundpp/lib/soundio/output_device.hpp VoiceThread.hpp ../../C++/Sorokin/asoundpp/lib/soundio/speex_decoder.hpp ../../C++/Sorokin/asoundpp/lib/soundio/speex_profile.hpp ../../C++/Sorokin/asoundpp/lib/soundio/speex_encoder.hpp ../../C++/Sorokin/asoundpp/lib/soundio/asoundpp.hpp mainDialog.h
FORMS += newForm.ui nickDialog.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Release/GNU-Linux-x86
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += -lspeex -lasound  
