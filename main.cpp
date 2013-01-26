/*
 * File:   main.cpp
 * Author: jaga
 *
 * Created on December 15, 2012, 2:23 PM
 */

#include <QtGui/QApplication>
#include <QtGui/qwidget.h>



#include "main_form.h"
#include "voice.hpp"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    main_form * nf = new main_form();
    return app.exec();
}
