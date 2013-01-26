/*
 * File:   newForm.cpp
 * Author: jaga
 *
 * Created on December 15, 2012, 2:49 PM
 */

#include "main_form.h"
#include <QListWidget>
#include <QListWidgetItem>
#include "soundlib/speex_encoder.hpp"

#include <iostream>

main_form::main_form() : my_command_broadcaster(command_broadcaster::Instance()), mynd(new nick_dialog()), vt(new voice()) {
    widget.setupUi(this);

    connect(my_command_broadcaster, SIGNAL(newUser(QString, QString)), this, SLOT(newUser(QString, QString)));
    connect(my_command_broadcaster, SIGNAL(write_audio(QByteArray const &, QString)), vt, SLOT(write(QByteArray const &, QString)));
    connect(my_command_broadcaster, SIGNAL(newUser(QString, QString)), vt, SLOT(add_output_device(QString, QString)));
    connect(my_command_broadcaster, SIGNAL(drop_table()), this, SLOT(drop_map()));
    connect(my_command_broadcaster, SIGNAL(deleteUser(QString)), this, SLOT(deleteUser(QString)));
    connect(mynd, SIGNAL(nick_changed(QString)), this, SLOT(nick_changed(QString)));
    connect(widget.nick, SIGNAL(clicked()), this, SLOT(set_nick()));
    connect(widget.stop, SIGNAL(clicked()), this, SLOT(connect_disconnect()));
    connect(widget.mute, SIGNAL(clicked()), this, SLOT(mute()));
    connect(widget.quit, SIGNAL(clicked()), this, SLOT(disconnect()));
    connect(widget.quit, SIGNAL(clicked()), qApp, SLOT(quit()));

    widget.stop->hide();
    widget.mute->hide();


    mynd->show();
    this->setWindowTitle("Voice qChat");

    timer = new QTimer;
    connect(timer, SIGNAL(timeout()), vt, SLOT(read()));
    timer->start(100);
}

void main_form::mute() {
    if (!vt->mute) {
        widget.mute->setText("Unmute mic");
    } else {
        widget.mute->setText("Mute mic");
    }
    vt->mute = !vt->mute;
}

void main_form::newUser(QString sender, QString nick) {
    if (my_map[sender].count() == 0 || my_map[sender] != nick) {
        my_map[sender] = nick;
        update_listwidget();
    }
}

void main_form::update_listwidget() {
    widget.listWidget->clear();
    if (!my_map.size()) return;
    for (QMap<QString, QString>::Iterator i = my_map.begin(); i != my_map.end(); i++) {
        widget.listWidget->addItem(new QListWidgetItem((*i)));
        widget.listWidget->sortItems(Qt::AscendingOrder);
    }
}

void main_form::deleteUser(QString sender) {
    my_map.erase(my_map.find(sender));
    update_listwidget();
}

void main_form::set_nick() {
    mynd->show();
}

void main_form::drop_map() {
    my_map.clear();
}

void main_form::nick_changed(QString nick) {
    this->show();
    widget.nick->setText(nick);
    widget.stop->show();
    widget.mute->show();
    widget.stop->setText("Disconnect");

}

void main_form::connect_disconnect() {
    if (my_command_broadcaster->open) {
        widget.stop->setText("Connect");
        disconnect();
        my_command_broadcaster->re_port();
    } else {
        my_command_broadcaster->re_port();
        widget.stop->setText("Disconnect");
        f_connect();
    }
}

void main_form::f_connect() {
    my_command_broadcaster->send_nick();
    my_command_broadcaster->send_ping();
}

void main_form::disconnect() {
    my_command_broadcaster->send_quit();
    widget.listWidget->clear();
}

main_form::~main_form() {

}
