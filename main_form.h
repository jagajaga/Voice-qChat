/* 
 * File:   newForm.h
 * Author: jaga
 *
 * Created on December 15, 2012, 2:49 PM
 */

#ifndef _MAIN_FORM_H
#define	_MAIN_FORM_H

#include "ui_new_form.h"
#include "nick_dialog.hpp"
#include "command_broadcaster.hpp"
#include <QMap>
#include <QTimer>

#include "voice.hpp"

class main_form : public QDialog {
    Q_OBJECT
    command_broadcaster * my_command_broadcaster;
    voice * vt;
    nick_dialog * mynd;
    QMap<QString, QString> my_map;
   
    QTimer * timer;
    
public:
    main_form();
    virtual ~main_form();
private:
    Ui::newForm widget;
    void update_listwidget();
private slots:
    void mute();
    void drop_map();
    void f_connect();
    void disconnect();
    void connect_disconnect();
    void set_nick();
    void newUser(QString, QString);
    void deleteUser(QString);
    void nick_changed(QString);

};

#endif	/* _MAIN_FORM_H */
