/*
 * File:   main.cpp
 * Author: jaga
 *
 * Created on December 15, 2012, 2:23 PM
 */

#include <QtGui/QApplication>
#include <QtGui/qwidget.h>



#include "mainDialog.h"
#include "VoiceThread.hpp"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);
    newForm * nf = new newForm();

    
    
    return app.exec();


}
