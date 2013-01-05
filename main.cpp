/*
 * File:   main.cpp
 * Author: jaga
 *
 * Created on December 15, 2012, 2:23 PM
 */

#include <QtGui/QApplication>
#include <QtGui/qwidget.h>

#include "soundlib/speex_encoder.hpp"


#include <speex/speex.h>

#include "mainDialog.h"

//#include "asoundpp.hpp"
//#include "input_device.hpp"
//#include "output_device.hpp"
//#include "speex_encoder.hpp"
//#include "speex_decoder.hpp"


int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    newForm * nf = new newForm();
    //nf->show ();
    // create and show your widgets here

    speex_encoder enc;
    
    
    return app.exec();
}
