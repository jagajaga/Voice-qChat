/*
 * File:   main.cpp
 * Author: jaga
 *
 * Created on December 15, 2012, 2:23 PM
 */

#include <QtGui/QApplication>
#include <QtGui/qwidget.h>

#include "mainDialog.h"

int
main (int argc, char *argv[])
{
  // initialize resources, if needed
  // Q_INIT_RESOURCE(resfile);

  QApplication app (argc, argv);
  newForm * nf = new newForm();
  nf->show ();
  // create and show your widgets here

  return app.exec ();
}
