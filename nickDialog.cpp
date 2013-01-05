/*
 * File:   nickDialog.cpp
 * Author: jaga
 *
 * Created on December 19, 2012, 12:21 AM
 */

#include <QtCore/qobject.h>

#include "nickDialog.hpp"
#include "mainDialog.h"

nickDialog::nickDialog() {

}

nickDialog::nickDialog(CommandBroadcaster * & cb) {
    widget.setupUi(this);
    connect(widget.cancel, SIGNAL(clicked()), this, SLOT(quit()));
    connect(widget.set, SIGNAL(clicked()), this, SLOT(set_nick()));
    my_command_broadcaster = cb;

}

void nickDialog::quit() {
    this->close();
}

void nickDialog::set_nick() {
    if (widget.lineEdit->displayText() != "" && widget.lineEdit->displayText() != "Please set nick") {
        my_command_broadcaster->open_port();
        my_command_broadcaster->set_nick(widget.lineEdit->displayText());
        my_command_broadcaster->send_nick();
        my_command_broadcaster->send_ping();
        emit nick_changed(widget.lineEdit->displayText());
        quit();
    } else {
        widget.lineEdit->setText("Please set nick"); //TODO make "toast"
    }
}

nickDialog::~nickDialog() {
}
