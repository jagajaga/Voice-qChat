#############################################################################
# Makefile for building: dist/Debug/GNU-Linux-x86/Voice_qChat
# Generated by qmake (2.01a) (Qt 4.8.4) on: Sat Jan 26 23:27:52 2013
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

SOURCES       = soundlib/alsa_format_conversion.cpp \
		voice.cpp \
		main.cpp \
		nick_dialog.cpp \
		soundlib/input_device.cpp \
		command_broadcaster.cpp \
		soundlib/speex_decoder.cpp \
		soundlib/asoundpp.cpp \
		soundlib/output_device.cpp \
		soundlib/speex_encoder.cpp \
		soundlib/format.cpp \
		main_form.cpp moc_command_broadcaster.cpp \
		moc_main_form.cpp \
		moc_voice.cpp \
		moc_nick_dialog.cpp
OBJECTS       = build/Debug/GNU-Linux-x86/alsa_format_conversion.o \
		build/Debug/GNU-Linux-x86/voice.o \
		build/Debug/GNU-Linux-x86/main.o \
		build/Debug/GNU-Linux-x86/nick_dialog.o \
		build/Debug/GNU-Linux-x86/input_device.o \
		build/Debug/GNU-Linux-x86/command_broadcaster.o \
		build/Debug/GNU-Linux-x86/speex_decoder.o \
		build/Debug/GNU-Linux-x86/asoundpp.o \
		build/Debug/GNU-Linux-x86/output_device.o \
		build/Debug/GNU-Linux-x86/speex_encoder.o \
		build/Debug/GNU-Linux-x86/format.o \
		build/Debug/GNU-Linux-x86/main_form.o \
		build/Debug/GNU-Linux-x86/moc_command_broadcaster.o \
		build/Debug/GNU-Linux-x86/moc_main_form.o \
		build/Debug/GNU-Linux-x86/moc_voice.o \
		build/Debug/GNU-Linux-x86/moc_nick_dialog.o
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

$(TARGET): ui_nick_dialog.h ui_new_form.h $(OBJECTS)  
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
	$(COPY_FILE) --parents $(SOURCES) $(DIST) build/Debug/GNU-Linux-x86/Voice_qChat1.0.0/ && $(COPY_FILE) --parents command_broadcaster.hpp soundlib/speex_decoder.hpp soundlib/output_device.hpp main_form.h voice.hpp soundlib/alsa_format_conversion.hpp soundlib/speex_profile.hpp soundlib/format.hpp soundlib/speex_encoder.hpp soundlib/input_device.hpp nick_dialog.hpp soundlib/asoundpp.hpp build/Debug/GNU-Linux-x86/Voice_qChat1.0.0/ && $(COPY_FILE) --parents soundlib/alsa_format_conversion.cpp voice.cpp main.cpp nick_dialog.cpp soundlib/input_device.cpp command_broadcaster.cpp soundlib/speex_decoder.cpp soundlib/asoundpp.cpp soundlib/output_device.cpp soundlib/speex_encoder.cpp soundlib/format.cpp main_form.cpp build/Debug/GNU-Linux-x86/Voice_qChat1.0.0/ && $(COPY_FILE) --parents nick_dialog.ui new_form.ui build/Debug/GNU-Linux-x86/Voice_qChat1.0.0/ && (cd `dirname build/Debug/GNU-Linux-x86/Voice_qChat1.0.0` && $(TAR) Voice_qChat1.0.0.tar Voice_qChat1.0.0 && $(COMPRESS) Voice_qChat1.0.0.tar) && $(MOVE) `dirname build/Debug/GNU-Linux-x86/Voice_qChat1.0.0`/Voice_qChat1.0.0.tar.gz . && $(DEL_FILE) -r build/Debug/GNU-Linux-x86/Voice_qChat1.0.0


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

compiler_moc_header_make_all: moc_command_broadcaster.cpp moc_main_form.cpp moc_voice.cpp moc_nick_dialog.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_command_broadcaster.cpp moc_main_form.cpp moc_voice.cpp moc_nick_dialog.cpp
moc_command_broadcaster.cpp: soundlib/speex_encoder.hpp \
		soundlib/speex_profile.hpp \
		soundlib/speex_decoder.hpp \
		command_broadcaster.hpp
	/usr/bin/moc $(DEFINES) $(INCPATH) command_broadcaster.hpp -o moc_command_broadcaster.cpp

moc_main_form.cpp: ui_newForm.h \
		nick_dialog.hpp \
		ui_nickDialog.h \
		command_broadcaster.hpp \
		soundlib/speex_encoder.hpp \
		soundlib/speex_profile.hpp \
		soundlib/speex_decoder.hpp \
		voice.hpp \
		soundlib/asoundpp.hpp \
		soundlib/input_device.hpp \
		soundlib/format.hpp \
		soundlib/output_device.hpp \
		main_form.h
	/usr/bin/moc $(DEFINES) $(INCPATH) main_form.h -o moc_main_form.cpp

moc_voice.cpp: soundlib/asoundpp.hpp \
		soundlib/input_device.hpp \
		soundlib/format.hpp \
		soundlib/speex_encoder.hpp \
		soundlib/speex_profile.hpp \
		soundlib/output_device.hpp \
		soundlib/speex_decoder.hpp \
		command_broadcaster.hpp \
		voice.hpp
	/usr/bin/moc $(DEFINES) $(INCPATH) voice.hpp -o moc_voice.cpp

moc_nick_dialog.cpp: ui_nickDialog.h \
		command_broadcaster.hpp \
		soundlib/speex_encoder.hpp \
		soundlib/speex_profile.hpp \
		soundlib/speex_decoder.hpp \
		nick_dialog.hpp
	/usr/bin/moc $(DEFINES) $(INCPATH) nick_dialog.hpp -o moc_nick_dialog.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_nick_dialog.h ui_new_form.h
compiler_uic_clean:
	-$(DEL_FILE) ui_nick_dialog.h ui_new_form.h
ui_nick_dialog.h: nick_dialog.ui
	/usr/bin/uic nick_dialog.ui -o ui_nick_dialog.h

ui_new_form.h: new_form.ui
	/usr/bin/uic new_form.ui -o ui_new_form.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

build/Debug/GNU-Linux-x86/alsa_format_conversion.o: soundlib/alsa_format_conversion.cpp soundlib/alsa_format_conversion.hpp \
		soundlib/format.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/alsa_format_conversion.o soundlib/alsa_format_conversion.cpp

build/Debug/GNU-Linux-x86/voice.o: voice.cpp voice.hpp \
		soundlib/asoundpp.hpp \
		soundlib/input_device.hpp \
		soundlib/format.hpp \
		soundlib/speex_encoder.hpp \
		soundlib/speex_profile.hpp \
		soundlib/output_device.hpp \
		soundlib/speex_decoder.hpp \
		command_broadcaster.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/voice.o voice.cpp

build/Debug/GNU-Linux-x86/main.o: main.cpp main_form.h \
		ui_newForm.h \
		nick_dialog.hpp \
		ui_nickDialog.h \
		command_broadcaster.hpp \
		soundlib/speex_encoder.hpp \
		soundlib/speex_profile.hpp \
		soundlib/speex_decoder.hpp \
		voice.hpp \
		soundlib/asoundpp.hpp \
		soundlib/input_device.hpp \
		soundlib/format.hpp \
		soundlib/output_device.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/main.o main.cpp

build/Debug/GNU-Linux-x86/nick_dialog.o: nick_dialog.cpp nick_dialog.hpp \
		ui_nickDialog.h \
		command_broadcaster.hpp \
		soundlib/speex_encoder.hpp \
		soundlib/speex_profile.hpp \
		soundlib/speex_decoder.hpp \
		main_form.h \
		ui_newForm.h \
		voice.hpp \
		soundlib/asoundpp.hpp \
		soundlib/input_device.hpp \
		soundlib/format.hpp \
		soundlib/output_device.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/nick_dialog.o nick_dialog.cpp

build/Debug/GNU-Linux-x86/input_device.o: soundlib/input_device.cpp soundlib/input_device.hpp \
		soundlib/asoundpp.hpp \
		soundlib/format.hpp \
		soundlib/alsa_format_conversion.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/input_device.o soundlib/input_device.cpp

build/Debug/GNU-Linux-x86/command_broadcaster.o: command_broadcaster.cpp command_broadcaster.hpp \
		soundlib/speex_encoder.hpp \
		soundlib/speex_profile.hpp \
		soundlib/speex_decoder.hpp \
		voice.hpp \
		soundlib/asoundpp.hpp \
		soundlib/input_device.hpp \
		soundlib/format.hpp \
		soundlib/output_device.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/command_broadcaster.o command_broadcaster.cpp

build/Debug/GNU-Linux-x86/speex_decoder.o: soundlib/speex_decoder.cpp soundlib/speex_decoder.hpp \
		soundlib/speex_profile.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/speex_decoder.o soundlib/speex_decoder.cpp

build/Debug/GNU-Linux-x86/asoundpp.o: soundlib/asoundpp.cpp soundlib/asoundpp.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/asoundpp.o soundlib/asoundpp.cpp

build/Debug/GNU-Linux-x86/output_device.o: soundlib/output_device.cpp soundlib/output_device.hpp \
		soundlib/format.hpp \
		soundlib/asoundpp.hpp \
		soundlib/alsa_format_conversion.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/output_device.o soundlib/output_device.cpp

build/Debug/GNU-Linux-x86/speex_encoder.o: soundlib/speex_encoder.cpp soundlib/speex_encoder.hpp \
		soundlib/speex_profile.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/speex_encoder.o soundlib/speex_encoder.cpp

build/Debug/GNU-Linux-x86/format.o: soundlib/format.cpp soundlib/format.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/format.o soundlib/format.cpp

build/Debug/GNU-Linux-x86/main_form.o: main_form.cpp main_form.h \
		ui_newForm.h \
		nick_dialog.hpp \
		ui_nickDialog.h \
		command_broadcaster.hpp \
		soundlib/speex_encoder.hpp \
		soundlib/speex_profile.hpp \
		soundlib/speex_decoder.hpp \
		voice.hpp \
		soundlib/asoundpp.hpp \
		soundlib/input_device.hpp \
		soundlib/format.hpp \
		soundlib/output_device.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/main_form.o main_form.cpp

build/Debug/GNU-Linux-x86/moc_command_broadcaster.o: moc_command_broadcaster.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_command_broadcaster.o moc_command_broadcaster.cpp

build/Debug/GNU-Linux-x86/moc_main_form.o: moc_main_form.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_main_form.o moc_main_form.cpp

build/Debug/GNU-Linux-x86/moc_voice.o: moc_voice.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_voice.o moc_voice.cpp

build/Debug/GNU-Linux-x86/moc_nick_dialog.o: moc_nick_dialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_nick_dialog.o moc_nick_dialog.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

