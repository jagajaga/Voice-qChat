/* 
 * File:   nickDialog.hpp
 * Author: jaga
 *
 * Created on December 19, 2012, 12:21 AM
 */

#ifndef _NICK_DIALOG_HPP
#define	_NICK_DIALOG_HPP

#include "ui_nickDialog.h"
#include "command_broadcaster.hpp"

class nick_dialog : public QDialog {
    Q_OBJECT
    command_broadcaster * my_command_broadcaster;
public:
    nick_dialog();
    nick_dialog(command_broadcaster * &);
    virtual ~nick_dialog();
private:
    Ui::nickDialog widget;
private slots:
    void quit();
    void set_nick();
signals:
    void nick_changed(QString);
};

#endif	/* _NICK_DIALOG_HPP */
