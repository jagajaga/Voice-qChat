/* 
 * File:   nickDialog.hpp
 * Author: jaga
 *
 * Created on December 19, 2012, 12:21 AM
 */

#ifndef _NICKDIALOG_HPP
#define	_NICKDIALOG_HPP

#include "ui_nickDialog.h"
#include "CommandBroadcaster.hpp"

class nickDialog : public QDialog {
    Q_OBJECT
    CommandBroadcaster * my_command_broadcaster;
public:
    nickDialog();
    nickDialog(CommandBroadcaster * &);
    virtual ~nickDialog();
private:
    Ui::nickDialog widget;
private slots:
    void quit();
    void set_nick();
signals:
    void nick_changed(QString);
};

#endif	/* _NICKDIALOG_HPP */
