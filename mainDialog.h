/* 
 * File:   newForm.h
 * Author: jaga
 *
 * Created on December 15, 2012, 2:49 PM
 */

#ifndef _NEWFORM_H
#define	_NEWFORM_H

#include "ui_newForm.h"
#include "nickDialog.hpp"
#include "CommandBroadcaster.hpp"

class newForm : public QDialog {
    Q_OBJECT
    CommandBroadcaster * my_command_broadcaster;
    nickDialog * mynd;
public:
    newForm();
    virtual ~newForm();
private:
    Ui::newForm widget;
private slots:
    void send_hello();
    void set_nick();
    void newUser(QString);
    void deleteUser(QString);
    void nick_changed(QString);

};

#endif	/* _NEWFORM_H */
