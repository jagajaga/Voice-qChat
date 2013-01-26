/*
 * File:   nickDialog.cpp
 * Author: jaga
 *
 * Created on December 19, 2012, 12:21 AM
 */

#include <QtCore/qobject.h>

#include "nick_dialog.hpp"
#include "main_form.h"

nick_dialog::nick_dialog() {
    widget.setupUi(this);
    connect(widget.cancel, SIGNAL(clicked()), this, SLOT(quit()));
    connect(widget.set, SIGNAL(clicked()), this, SLOT(set_nick()));
    my_command_broadcaster = command_broadcaster::Instance();
    this->setWindowTitle("Set nick");
    widget.lineEdit->setFocus();
}

nick_dialog::nick_dialog(command_broadcaster * & cb) {
}

void nick_dialog::quit() {
    this->close();
}

void nick_dialog::set_nick() {
    if (widget.lineEdit->displayText() != "" && widget.lineEdit->displayText() != "Please set nick") {
        my_command_broadcaster->open_port();
        my_command_broadcaster->set_nick(widget.lineEdit->displayText());
        my_command_broadcaster->send_nick();
        my_command_broadcaster->send_ping();
        emit nick_changed(widget.lineEdit->displayText());
        quit();
    } else {
        widget.lineEdit->setText("Please set nick"); //TODO make "toast"
        widget.lineEdit->setFocus();
        widget.lineEdit->selectAll();
    }
}

nick_dialog::~nick_dialog() {
}
