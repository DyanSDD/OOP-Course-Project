/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Info
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Info)
    {
        if (Info->objectName().isEmpty())
            Info->setObjectName(QString::fromUtf8("Info"));
        Info->resize(800, 600);
        menubar = new QMenuBar(Info);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Info->setMenuBar(menubar);
        centralwidget = new QWidget(Info);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Info->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Info);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Info->setStatusBar(statusbar);

        retranslateUi(Info);

        QMetaObject::connectSlotsByName(Info);
    } // setupUi

    void retranslateUi(QMainWindow *Info)
    {
        Info->setWindowTitle(QCoreApplication::translate("Info", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Info: public Ui_Info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
