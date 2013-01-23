#############################################################################
# Makefile for building: dist/Debug/GNU-Linux-x86/Voice_qChat
# Generated by qmake (2.01a) (Qt 4.8.4) on: Wed Jan 23 21:04:02 2013
# Project:  nbproject/qt-Debug.pro
# Template: app
# Command: /usr/bin/qmake VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt/mkspecs/linux-g++-64 -Inbproject -I/usr/include/QtCore -I/usr/include/QtNetwork -I/usr/include/QtGui -I/usr/include -I. -I. -Inbproject -I.
LINK          = g++
LFLAGS        = -m64 -Wl,-O1,--sort-common,--as-needed,-z,relro
LIBS          = $(SUBLIBS)  -L/usr/lib -lspeex -lasound -lQtGui -lQtNetwork -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = build/Debug/GNU-Linux-x86/

####### Files

SOURCES       = ../../C++/Sorokin/asoundpp/lib/soundio/asoundpp.cpp \
		../../C++/Sorokin/asoundpp/lib/soundio/speex_encoder.cpp \
		../../C++/Sorokin/asoundpp/lib/soundio/input_device.cpp \
		../../C++/Sorokin/asoundpp/lib/soundio/format.cpp \
		main.cpp \
		../../C++/Sorokin/asoundpp/lib/soundio/speex_decoder.cpp \
		mainDialog.cpp \
		nickDialog.cpp \
		../../C++/Sorokin/asoundpp/lib/soundio/output_device.cpp \
		../../C++/Sorokin/asoundpp/lib/soundio/alsa_format_conversion.cpp \
		CommandBroadcaster.cpp \
		VoiceThread.cpp moc_nickDialog.cpp \
		moc_CommandBroadcaster.cpp \
		moc_VoiceThread.cpp \
		moc_mainDialog.cpp
OBJECTS       = build/Debug/GNU-Linux-x86/asoundpp.o \
		build/Debug/GNU-Linux-x86/speex_encoder.o \
		build/Debug/GNU-Linux-x86/input_device.o \
		build/Debug/GNU-Linux-x86/format.o \
		build/Debug/GNU-Linux-x86/main.o \
		build/Debug/GNU-Linux-x86/speex_decoder.o \
		build/Debug/GNU-Linux-x86/mainDialog.o \
		build/Debug/GNU-Linux-x86/nickDialog.o \
		build/Debug/GNU-Linux-x86/output_device.o \
		build/Debug/GNU-Linux-x86/alsa_format_conversion.o \
		build/Debug/GNU-Linux-x86/CommandBroadcaster.o \
		build/Debug/GNU-Linux-x86/VoiceThread.o \
		build/Debug/GNU-Linux-x86/moc_nickDialog.o \
		build/Debug/GNU-Linux-x86/moc_CommandBroadcaster.o \
		build/Debug/GNU-Linux-x86/moc_VoiceThread.o \
		build/Debug/GNU-Linux-x86/moc_mainDialog.o
DIST          = /usr/share/qt/mkspecs/common/unix.conf \
		/usr/share/qt/mkspecs/common/linux.conf \
		/usr/share/qt/mkspecs/common/gcc-base.conf \
		/usr/share/qt/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt/mkspecs/common/g++-base.conf \
		/usr/share/qt/mkspecs/common/g++-unix.conf \
		/usr/share/qt/mkspecs/qconfig.pri \
		/usr/share/qt/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt/mkspecs/features/qt_functions.prf \
		/usr/share/qt/mkspecs/features/qt_config.prf \
		/usr/share/qt/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt/mkspecs/features/default_pre.prf \
		/usr/share/qt/mkspecs/features/debug.prf \
		/usr/share/qt/mkspecs/features/default_post.prf \
		/usr/share/qt/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt/mkspecs/features/warn_on.prf \
		/usr/share/qt/mkspecs/features/qt.prf \
		/usr/share/qt/mkspecs/features/unix/thread.prf \
		/usr/share/qt/mkspecs/features/moc.prf \
		/usr/share/qt/mkspecs/features/resources.prf \
		/usr/share/qt/mkspecs/features/uic.prf \
		/usr/share/qt/mkspecs/features/yacc.prf \
		/usr/share/qt/mkspecs/features/lex.prf \
		/usr/share/qt/mkspecs/features/include_source_dir.prf \
		nbproject/qt-Debug.pro
QMAKE_TARGET  = Voice_qChat
DESTDIR       = dist/Debug/GNU-Linux-x86/
TARGET        = dist/Debug/GNU-Linux-x86/Voice_qChat

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: qttmp-Debug.mk $(TARGET)

$(TARGET): ui_newForm.h ui_nickDialog.h $(OBJECTS)  
	@$(CHK_DIR_EXISTS) dist/Debug/GNU-Linux-x86/ || $(MKDIR) dist/Debug/GNU-Linux-x86/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9]\+\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

qttmp-Debug.mk: nbproject/qt-Debug.pro  /usr/share/qt/mkspecs/linux-g++-64/qmake.conf /usr/share/qt/mkspecs/common/unix.conf \
		/usr/share/qt/mkspecs/common/linux.conf \
		/usr/share/qt/mkspecs/common/gcc-base.conf \
		/usr/share/qt/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt/mkspecs/common/g++-base.conf \
		/usr/share/qt/mkspecs/common/g++-unix.conf \
		/usr/share/qt/mkspecs/qconfig.pri \
		/usr/share/qt/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt/mkspecs/features/qt_functions.prf \
		/usr/share/qt/mkspecs/features/qt_config.prf \
		/usr/share/qt/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt/mkspecs/features/default_pre.prf \
		/usr/share/qt/mkspecs/features/debug.prf \
		/usr/share/qt/mkspecs/features/default_post.prf \
		/usr/share/qt/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt/mkspecs/features/warn_on.prf \
		/usr/share/qt/mkspecs/features/qt.prf \
		/usr/share/qt/mkspecs/features/unix/thread.prf \
		/usr/share/qt/mkspecs/features/moc.prf \
		/usr/share/qt/mkspecs/features/resources.prf \
		/usr/share/qt/mkspecs/features/uic.prf \
		/usr/share/qt/mkspecs/features/yacc.prf \
		/usr/share/qt/mkspecs/features/lex.prf \
		/usr/share/qt/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtNetwork.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
/usr/share/qt/mkspecs/common/unix.conf:
/usr/share/qt/mkspecs/common/linux.conf:
/usr/share/qt/mkspecs/common/gcc-base.conf:
/usr/share/qt/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt/mkspecs/common/g++-base.conf:
/usr/share/qt/mkspecs/common/g++-unix.conf:
/usr/share/qt/mkspecs/qconfig.pri:
/usr/share/qt/mkspecs/modules/qt_phonon.pri:
/usr/share/qt/mkspecs/features/qt_functions.prf:
/usr/share/qt/mkspecs/features/qt_config.prf:
/usr/share/qt/mkspecs/features/exclusive_builds.prf:
/usr/share/qt/mkspecs/features/default_pre.prf:
/usr/share/qt/mkspecs/features/debug.prf:
/usr/share/qt/mkspecs/features/default_post.prf:
/usr/share/qt/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt/mkspecs/features/warn_on.prf:
/usr/share/qt/mkspecs/features/qt.prf:
/usr/share/qt/mkspecs/features/unix/thread.prf:
/usr/share/qt/mkspecs/features/moc.prf:
/usr/share/qt/mkspecs/features/resources.prf:
/usr/share/qt/mkspecs/features/uic.prf:
/usr/share/qt/mkspecs/features/yacc.prf:
/usr/share/qt/mkspecs/features/lex.prf:
/usr/share/qt/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtGui.prl:
/usr/lib/libQtNetwork.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro

dist: 
	@$(CHK_DIR_EXISTS) build/Debug/GNU-Linux-x86/Voice_qChat1.0.0 || $(MKDIR) build/Debug/GNU-Linux-x86/Voice_qChat1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) build/Debug/GNU-Linux-x86/Voice_qChat1.0.0/ && $(COPY_FILE) --parents ../../C++/Sorokin/asoundpp/lib/soundio/input_device.hpp ../../C++/Sorokin/asoundpp/lib/soundio/alsa_format_conversion.hpp nickDialog.hpp CommandBroadcaster.hpp ../../C++/Sorokin/asoundpp/lib/soundio/format.hpp ../../C++/Sorokin/asoundpp/lib/soundio/output_device.hpp VoiceThread.hpp ../../C++/Sorokin/asoundpp/lib/soundio/speex_decoder.hpp ../../C++/Sorokin/asoundpp/lib/soundio/speex_profile.hpp ../../C++/Sorokin/asoundpp/lib/soundio/speex_encoder.hpp ../../C++/Sorokin/asoundpp/lib/soundio/asoundpp.hpp mainDialog.h build/Debug/GNU-Linux-x86/Voice_qChat1.0.0/ && $(COPY_FILE) --parents ../../C++/Sorokin/asoundpp/lib/soundio/asoundpp.cpp ../../C++/Sorokin/asoundpp/lib/soundio/speex_encoder.cpp ../../C++/Sorokin/asoundpp/lib/soundio/input_device.cpp ../../C++/Sorokin/asoundpp/lib/soundio/format.cpp main.cpp ../../C++/Sorokin/asoundpp/lib/soundio/speex_decoder.cpp mainDialog.cpp nickDialog.cpp ../../C++/Sorokin/asoundpp/lib/soundio/output_device.cpp ../../C++/Sorokin/asoundpp/lib/soundio/alsa_format_conversion.cpp CommandBroadcaster.cpp VoiceThread.cpp build/Debug/GNU-Linux-x86/Voice_qChat1.0.0/ && $(COPY_FILE) --parents newForm.ui nickDialog.ui build/Debug/GNU-Linux-x86/Voice_qChat1.0.0/ && (cd `dirname build/Debug/GNU-Linux-x86/Voice_qChat1.0.0` && $(TAR) Voice_qChat1.0.0.tar Voice_qChat1.0.0 && $(COMPRESS) Voice_qChat1.0.0.tar) && $(MOVE) `dirname build/Debug/GNU-Linux-x86/Voice_qChat1.0.0`/Voice_qChat1.0.0.tar.gz . && $(DEL_FILE) -r build/Debug/GNU-Linux-x86/Voice_qChat1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) qttmp-Debug.mk


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_nickDialog.cpp moc_CommandBroadcaster.cpp moc_VoiceThread.cpp moc_mainDialog.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_nickDialog.cpp moc_CommandBroadcaster.cpp moc_VoiceThread.cpp moc_mainDialog.cpp
moc_nickDialog.cpp: ui_nickDialog.h \
		CommandBroadcaster.hpp \
		soundlib/speex_encoder.hpp \
		soundlib/speex_profile.hpp \
		soundlib/speex_decoder.hpp \
		nickDialog.hpp
	/usr/bin/moc $(DEFINES) $(INCPATH) nickDialog.hpp -o moc_nickDialog.cpp

moc_CommandBroadcaster.cpp: soundlib/speex_encoder.hpp \
		soundlib/speex_profile.hpp \
		soundlib/speex_decoder.hpp \
		CommandBroadcaster.hpp
	/usr/bin/moc $(DEFINES) $(INCPATH) CommandBroadcaster.hpp -o moc_CommandBroadcaster.cpp

moc_VoiceThread.cpp: soundlib/asoundpp.hpp \
		soundlib/input_device.hpp \
		soundlib/format.hpp \
		soundlib/speex_encoder.hpp \
		soundlib/speex_profile.hpp \
		soundlib/output_device.hpp \
		soundlib/speex_decoder.hpp \
		CommandBroadcaster.hpp \
		VoiceThread.hpp
	/usr/bin/moc $(DEFINES) $(INCPATH) VoiceThread.hpp -o moc_VoiceThread.cpp

moc_mainDialog.cpp: ui_newForm.h \
		nickDialog.hpp \
		ui_nickDialog.h \
		CommandBroadcaster.hpp \
		soundlib/speex_encoder.hpp \
		soundlib/speex_profile.hpp \
		soundlib/speex_decoder.hpp \
		VoiceThread.hpp \
		soundlib/asoundpp.hpp \
		soundlib/input_device.hpp \
		soundlib/format.hpp \
		soundlib/output_device.hpp \
		mainDialog.h
	/usr/bin/moc $(DEFINES) $(INCPATH) mainDialog.h -o moc_mainDialog.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_newForm.h ui_nickDialog.h
compiler_uic_clean:
	-$(DEL_FILE) ui_newForm.h ui_nickDialog.h
ui_newForm.h: newForm.ui
	/usr/bin/uic newForm.ui -o ui_newForm.h

ui_nickDialog.h: nickDialog.ui
	/usr/bin/uic nickDialog.ui -o ui_nickDialog.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

build/Debug/GNU-Linux-x86/asoundpp.o: ../../C++/Sorokin/asoundpp/lib/soundio/asoundpp.cpp ../../C++/Sorokin/asoundpp/lib/soundio/asoundpp.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/asoundpp.o ../../C++/Sorokin/asoundpp/lib/soundio/asoundpp.cpp

build/Debug/GNU-Linux-x86/speex_encoder.o: ../../C++/Sorokin/asoundpp/lib/soundio/speex_encoder.cpp ../../C++/Sorokin/asoundpp/lib/soundio/speex_encoder.hpp \
		../../C++/Sorokin/asoundpp/lib/soundio/speex_profile.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/speex_encoder.o ../../C++/Sorokin/asoundpp/lib/soundio/speex_encoder.cpp

build/Debug/GNU-Linux-x86/input_device.o: ../../C++/Sorokin/asoundpp/lib/soundio/input_device.cpp ../../C++/Sorokin/asoundpp/lib/soundio/input_device.hpp \
		../../C++/Sorokin/asoundpp/lib/soundio/asoundpp.hpp \
		../../C++/Sorokin/asoundpp/lib/soundio/format.hpp \
		../../C++/Sorokin/asoundpp/lib/soundio/alsa_format_conversion.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/input_device.o ../../C++/Sorokin/asoundpp/lib/soundio/input_device.cpp

build/Debug/GNU-Linux-x86/format.o: ../../C++/Sorokin/asoundpp/lib/soundio/format.cpp ../../C++/Sorokin/asoundpp/lib/soundio/format.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/format.o ../../C++/Sorokin/asoundpp/lib/soundio/format.cpp

build/Debug/GNU-Linux-x86/main.o: main.cpp mainDialog.h \
		ui_newForm.h \
		nickDialog.hpp \
		ui_nickDialog.h \
		CommandBroadcaster.hpp \
		soundlib/speex_encoder.hpp \
		soundlib/speex_profile.hpp \
		soundlib/speex_decoder.hpp \
		VoiceThread.hpp \
		soundlib/asoundpp.hpp \
		soundlib/input_device.hpp \
		soundlib/format.hpp \
		soundlib/output_device.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/main.o main.cpp

build/Debug/GNU-Linux-x86/speex_decoder.o: ../../C++/Sorokin/asoundpp/lib/soundio/speex_decoder.cpp ../../C++/Sorokin/asoundpp/lib/soundio/speex_decoder.hpp \
		soundlib/speex_profile.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/speex_decoder.o ../../C++/Sorokin/asoundpp/lib/soundio/speex_decoder.cpp

build/Debug/GNU-Linux-x86/mainDialog.o: mainDialog.cpp mainDialog.h \
		ui_newForm.h \
		nickDialog.hpp \
		ui_nickDialog.h \
		CommandBroadcaster.hpp \
		soundlib/speex_encoder.hpp \
		soundlib/speex_profile.hpp \
		soundlib/speex_decoder.hpp \
		VoiceThread.hpp \
		soundlib/asoundpp.hpp \
		soundlib/input_device.hpp \
		soundlib/format.hpp \
		soundlib/output_device.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/mainDialog.o mainDialog.cpp

build/Debug/GNU-Linux-x86/nickDialog.o: nickDialog.cpp nickDialog.hpp \
		ui_nickDialog.h \
		CommandBroadcaster.hpp \
		soundlib/speex_encoder.hpp \
		soundlib/speex_profile.hpp \
		soundlib/speex_decoder.hpp \
		mainDialog.h \
		ui_newForm.h \
		VoiceThread.hpp \
		soundlib/asoundpp.hpp \
		soundlib/input_device.hpp \
		soundlib/format.hpp \
		soundlib/output_device.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/nickDialog.o nickDialog.cpp

build/Debug/GNU-Linux-x86/output_device.o: ../../C++/Sorokin/asoundpp/lib/soundio/output_device.cpp ../../C++/Sorokin/asoundpp/lib/soundio/output_device.hpp \
		soundlib/format.hpp \
		../../C++/Sorokin/asoundpp/lib/soundio/asoundpp.hpp \
		../../C++/Sorokin/asoundpp/lib/soundio/alsa_format_conversion.hpp \
		../../C++/Sorokin/asoundpp/lib/soundio/format.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/output_device.o ../../C++/Sorokin/asoundpp/lib/soundio/output_device.cpp

build/Debug/GNU-Linux-x86/alsa_format_conversion.o: ../../C++/Sorokin/asoundpp/lib/soundio/alsa_format_conversion.cpp ../../C++/Sorokin/asoundpp/lib/soundio/alsa_format_conversion.hpp \
		../../C++/Sorokin/asoundpp/lib/soundio/format.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/alsa_format_conversion.o ../../C++/Sorokin/asoundpp/lib/soundio/alsa_format_conversion.cpp

build/Debug/GNU-Linux-x86/CommandBroadcaster.o: CommandBroadcaster.cpp CommandBroadcaster.hpp \
		soundlib/speex_encoder.hpp \
		soundlib/speex_profile.hpp \
		soundlib/speex_decoder.hpp \
		VoiceThread.hpp \
		soundlib/asoundpp.hpp \
		soundlib/input_device.hpp \
		soundlib/format.hpp \
		soundlib/output_device.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/CommandBroadcaster.o CommandBroadcaster.cpp

build/Debug/GNU-Linux-x86/VoiceThread.o: VoiceThread.cpp VoiceThread.hpp \
		soundlib/asoundpp.hpp \
		soundlib/input_device.hpp \
		soundlib/format.hpp \
		soundlib/speex_encoder.hpp \
		soundlib/speex_profile.hpp \
		soundlib/output_device.hpp \
		soundlib/speex_decoder.hpp \
		CommandBroadcaster.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/VoiceThread.o VoiceThread.cpp

build/Debug/GNU-Linux-x86/moc_nickDialog.o: moc_nickDialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_nickDialog.o moc_nickDialog.cpp

build/Debug/GNU-Linux-x86/moc_CommandBroadcaster.o: moc_CommandBroadcaster.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_CommandBroadcaster.o moc_CommandBroadcaster.cpp

build/Debug/GNU-Linux-x86/moc_VoiceThread.o: moc_VoiceThread.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_VoiceThread.o moc_VoiceThread.cpp

build/Debug/GNU-Linux-x86/moc_mainDialog.o: moc_mainDialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_mainDialog.o moc_mainDialog.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

