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
#include <QMap>

#include "VoiceThread.hpp"

class newForm : public QDialog {
    Q_OBJECT
    CommandBroadcaster * my_command_broadcaster;
    VoiceThread vt;
    nickDialog * mynd;
    QMap<QString, QString> my_map;
   
public:
    newForm();
    virtual ~newForm();
private:
    Ui::newForm widget;
    void update_listwidget();
private slots:
    void drop_map();
    void f_connect();
    void disconnect();
    void connect_disconnect();
    void set_nick();
    void newUser(QString, QString);
    void deleteUser(QString);
    void nick_changed(QString);

};

#endif	/* _NEWFORM_H */
