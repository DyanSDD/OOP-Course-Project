/********************************************************************************
** Form generated from reading UI file 'grafic4.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFIC4_H
#define UI_GRAFIC4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Grafic4
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Grafic4)
    {
        if (Grafic4->objectName().isEmpty())
            Grafic4->setObjectName(QString::fromUtf8("Grafic4"));
        Grafic4->resize(800, 600);
        menubar = new QMenuBar(Grafic4);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Grafic4->setMenuBar(menubar);
        centralwidget = new QWidget(Grafic4);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Grafic4->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Grafic4);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Grafic4->setStatusBar(statusbar);

        retranslateUi(Grafic4);

        QMetaObject::connectSlotsByName(Grafic4);
    } // setupUi

    void retranslateUi(QMainWindow *Grafic4)
    {
        Grafic4->setWindowTitle(QCoreApplication::translate("Grafic4", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Grafic4: public Ui_Grafic4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFIC4_H
