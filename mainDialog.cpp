/*
 * File:   newForm.cpp
 * Author: jaga
 *
 * Created on December 15, 2012, 2:49 PM
 */

#include "mainDialog.h"
#include <QListWidget>
#include <QListWidgetItem>
#include "soundlib/speex_encoder.hpp"

#include <iostream>

newForm::newForm() {
    my_command_broadcaster = new CommandBroadcaster();
    std::cerr << "connect\n";
    vt(my_command_broadcaster);
    vt.start();
   // connect(&vt, SIGNAL(send_encoded(speex_encoder *)), my_command_broadcaster, SLOT (send_encoded (speex_encoder *)), Qt::QueuedConnection);
    mynd = new nickDialog(my_command_broadcaster);


    widget.setupUi(this);

    connect(my_command_broadcaster, SIGNAL(newUser(QString, QString)), this, SLOT(newUser(QString, QString)));
    connect(my_command_broadcaster, SIGNAL(drop_table()), this, SLOT(drop_map()));
    connect(my_command_broadcaster, SIGNAL(deleteUser(QString)), this, SLOT(deleteUser(QString)));
    connect(mynd, SIGNAL(nick_changed(QString)), this, SLOT(nick_changed(QString)));
    connect(widget.nick, SIGNAL(clicked()), this, SLOT(set_nick()));
    connect(widget.stop, SIGNAL(clicked()), this, SLOT(connect_disconnect()));
    connect(widget.quit, SIGNAL(clicked()), this, SLOT(disconnect()));
    connect(widget.quit, SIGNAL(clicked()), qApp, SLOT(quit()));

    widget.stop->hide();
    widget.mute->hide();
    widget.listWidget->sortItems(Qt::AscendingOrder);
    mynd->show();


}

void newForm::newUser(QString sender, QString nick) {
    if (my_map[sender].count() == 0 || my_map[sender] != nick) {

        my_map[sender] = nick;
        update_listwidget();
    }
}

void newForm::update_listwidget() {
    widget.listWidget->clear();
    if (!my_map.size()) return;
    for (QMap<QString, QString>::Iterator i = my_map.begin(); i != my_map.end(); i++) {
        widget.listWidget->addItem(new QListWidgetItem((*i)));
    }
}

void newForm::deleteUser(QString sender) {
    my_map.erase(my_map.find(sender));
    update_listwidget();
}

void newForm::set_nick() {
    mynd->show();
}

void newForm::drop_map() {
    my_map.clear();
}

void newForm::nick_changed(QString nick) {
    this->show();
    widget.nick->setText(nick);
    widget.stop->show();
    widget.mute->show();
    widget.stop->setText("Disconnect");

}

void newForm::connect_disconnect() {
    if (!my_command_broadcaster->re_port()) {
        widget.stop->setText("Connect");
        disconnect();
    } else {
        widget.stop->setText("Disconnect");
        f_connect();
    }
}

void newForm::f_connect() {
    my_command_broadcaster->send_nick();
    my_command_broadcaster->send_ping();
}

void newForm::disconnect() {
    my_command_broadcaster->send_quit();
    widget.listWidget->clear();

}

newForm::~newForm() {

}
