/*
 * File:   newForm.cpp
 * Author: jaga
 *
 * Created on December 15, 2012, 2:49 PM
 */

#include "mainDialog.h"
#include <QListWidget>
#include <QListWidgetItem>

newForm::newForm ()
{
  widget.setupUi (this);
  widget.listWidget->setSortingEnabled (true);
  for (int i = 0; i < 50; i++)
    {
      widget.listWidget->addItem (new QListWidgetItem ("Oak"));
      widget.listWidget->addItem (new QListWidgetItem ("Banana"));
      widget.listWidget->addItem (new QListWidgetItem ("Apple"));
      widget.listWidget->addItem (new QListWidgetItem ("Orange"));
      widget.listWidget->addItem (new QListWidgetItem ("Grapes"));
      widget.listWidget->addItem (new QListWidgetItem ("Jayesh"));
      widget.listWidget->addItem (new QListWidgetItem ("Pineapple"));
      widget.listWidget->addItem (new QListWidgetItem ("GROUNDNUT"));
      widget.listWidget->addItem (new QListWidgetItem ("Sugarcane"));
      widget.listWidget->addItem (new QListWidgetItem ("Coconut"));
      widget.listWidget->addItem (new QListWidgetItem ("Remote"));
      widget.listWidget->addItem (new QListWidgetItem ("Mango"));
    }
}

newForm::~newForm () { }
