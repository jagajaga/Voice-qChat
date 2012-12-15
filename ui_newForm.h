/********************************************************************************
** Form generated from reading UI file 'newForm.ui'
**
** Created: Sat Dec 15 20:42:30 2012
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFORM_H
#define UI_NEWFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_newForm
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *mute;
    QPushButton *stop;
    QPushButton *quit;
    QListWidget *listWidget;

    void setupUi(QDialog *newForm)
    {
        if (newForm->objectName().isEmpty())
            newForm->setObjectName(QString::fromUtf8("newForm"));
        newForm->resize(375, 202);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(newForm->sizePolicy().hasHeightForWidth());
        newForm->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(newForm);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mute = new QPushButton(newForm);
        mute->setObjectName(QString::fromUtf8("mute"));

        verticalLayout->addWidget(mute);

        stop = new QPushButton(newForm);
        stop->setObjectName(QString::fromUtf8("stop"));

        verticalLayout->addWidget(stop);

        quit = new QPushButton(newForm);
        quit->setObjectName(QString::fromUtf8("quit"));

        verticalLayout->addWidget(quit);


        horizontalLayout->addLayout(verticalLayout);

        listWidget = new QListWidget(newForm);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout->addWidget(listWidget);


        retranslateUi(newForm);

        QMetaObject::connectSlotsByName(newForm);
    } // setupUi

    void retranslateUi(QDialog *newForm)
    {
        newForm->setWindowTitle(QApplication::translate("newForm", "newForm", 0, QApplication::UnicodeUTF8));
        mute->setText(QApplication::translate("newForm", "Mute Mic", 0, QApplication::UnicodeUTF8));
        stop->setText(QApplication::translate("newForm", "Stop", 0, QApplication::UnicodeUTF8));
        quit->setText(QApplication::translate("newForm", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class newForm: public Ui_newForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFORM_H
