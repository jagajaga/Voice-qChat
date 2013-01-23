/********************************************************************************
** Form generated from reading UI file 'nickDialog.ui'
**
** Created: Wed Jan 23 23:38:53 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NICKDIALOG_H
#define UI_NICKDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_nickDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *set;
    QPushButton *cancel;

    void setupUi(QDialog *nickDialog)
    {
        if (nickDialog->objectName().isEmpty())
            nickDialog->setObjectName(QString::fromUtf8("nickDialog"));
        nickDialog->resize(268, 64);
        verticalLayout_2 = new QVBoxLayout(nickDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(nickDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        set = new QPushButton(nickDialog);
        set->setObjectName(QString::fromUtf8("set"));

        horizontalLayout->addWidget(set);

        cancel = new QPushButton(nickDialog);
        cancel->setObjectName(QString::fromUtf8("cancel"));

        horizontalLayout->addWidget(cancel);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(nickDialog);

        QMetaObject::connectSlotsByName(nickDialog);
    } // setupUi

    void retranslateUi(QDialog *nickDialog)
    {
        nickDialog->setWindowTitle(QApplication::translate("nickDialog", "nickDialog", 0, QApplication::UnicodeUTF8));
        set->setText(QApplication::translate("nickDialog", "Set", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("nickDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class nickDialog: public Ui_nickDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NICKDIALOG_H
