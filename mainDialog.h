/* 
 * File:   newForm.h
 * Author: jaga
 *
 * Created on December 15, 2012, 2:49 PM
 */

#ifndef _NEWFORM_H
#define	_NEWFORM_H

#include "ui_newForm.h"

class newForm : public QDialog {
    Q_OBJECT
public:
    newForm();
    virtual ~newForm();
private:
    Ui::newForm widget;
};

#endif	/* _NEWFORM_H */
