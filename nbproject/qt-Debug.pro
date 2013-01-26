# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux-x86
TARGET = Voice_qChat
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui network
SOURCES += soundlib/alsa_format_conversion.cpp voice.cpp main.cpp nick_dialog.cpp soundlib/input_device.cpp command_broadcaster.cpp soundlib/speex_decoder.cpp soundlib/asoundpp.cpp soundlib/output_device.cpp soundlib/speex_encoder.cpp soundlib/format.cpp main_form.cpp
HEADERS += command_broadcaster.hpp soundlib/speex_decoder.hpp soundlib/output_device.hpp main_form.h voice.hpp soundlib/alsa_format_conversion.hpp soundlib/speex_profile.hpp soundlib/format.hpp soundlib/speex_encoder.hpp soundlib/input_device.hpp nick_dialog.hpp soundlib/asoundpp.hpp
FORMS += nick_dialog.ui new_form.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux-x86
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += -lspeex -lasound  
