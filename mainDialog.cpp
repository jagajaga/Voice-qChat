/*
 * File:   newForm.cpp
 * Author: jaga
 *
 * Created on December 15, 2012, 2:49 PM
 */

#include "mainDialog.h"
#include <QListWidget>
#include <QListWidgetItem>

newForm::newForm() {
    my_command_broadcaster = new CommandBroadcaster();
    mynd = new nickDialog(my_command_broadcaster);
    widget.setupUi(this);
    connect(widget.quit, SIGNAL(clicked()), qApp, SLOT(quit()));
    widget.stop->setText("Send hello");
    connect(widget.stop, SIGNAL(clicked()), this, SLOT(send_hello()));
    connect(my_command_broadcaster, SIGNAL(newUser(QString)), this, SLOT(newUser(QString)));
    connect(my_command_broadcaster, SIGNAL(deleteUser(QString)), this, SLOT(deleteUser(QString)));
    connect(mynd, SIGNAL(nick_changed(QString)), this, SLOT(nick_changed(QString)));
    connect(widget.nick, SIGNAL(clicked()), this, SLOT(set_nick()));
}

void newForm::newUser(QString user) {
    widget.listWidget->addItem(new QListWidgetItem(user));
}

void newForm::deleteUser(QString user) {
    widget.listWidget->removeItemWidget(new QListWidgetItem(user));
}

void newForm::send_hello() {
    my_command_broadcaster->send_hello();
}

void newForm::set_nick() {
    mynd->show();   
}

void newForm::nick_changed(QString nick) {
    widget.nick->setText(nick);
}

newForm::~newForm() {
}
