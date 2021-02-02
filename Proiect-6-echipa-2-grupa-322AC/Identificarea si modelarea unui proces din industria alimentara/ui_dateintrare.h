/********************************************************************************
** Form generated from reading UI file 'dateintrare.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATEINTRARE_H
#define UI_DATEINTRARE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DateIntrare
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DateIntrare)
    {
        if (DateIntrare->objectName().isEmpty())
            DateIntrare->setObjectName(QString::fromUtf8("DateIntrare"));
        DateIntrare->resize(800, 600);
        menubar = new QMenuBar(DateIntrare);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        DateIntrare->setMenuBar(menubar);
        centralwidget = new QWidget(DateIntrare);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        DateIntrare->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(DateIntrare);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DateIntrare->setStatusBar(statusbar);

        retranslateUi(DateIntrare);

        QMetaObject::connectSlotsByName(DateIntrare);
    } // setupUi

    void retranslateUi(QMainWindow *DateIntrare)
    {
        DateIntrare->setWindowTitle(QCoreApplication::translate("DateIntrare", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DateIntrare: public Ui_DateIntrare {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATEINTRARE_H
