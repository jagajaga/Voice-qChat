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
SOURCES += soundlib/alsa_format_conversion.cpp main.cpp soundlib/input_device.cpp mainDialog.cpp soundlib/speex_decoder.cpp soundlib/asoundpp.cpp soundlib/output_device.cpp soundlib/speex_encoder.cpp soundlib/format.cpp nickDialog.cpp CommandBroadcaster.cpp VoiceThread.cpp
HEADERS += soundlib/speex_decoder.hpp soundlib/output_device.hpp nickDialog.hpp CommandBroadcaster.hpp soundlib/alsa_format_conversion.hpp VoiceThread.hpp soundlib/speex_profile.hpp soundlib/format.hpp soundlib/speex_encoder.hpp soundlib/input_device.hpp mainDialog.h soundlib/asoundpp.hpp
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
