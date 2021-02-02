/********************************************************************************
** Form generated from reading UI file 'grafic8.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFIC8_H
#define UI_GRAFIC8_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Grafic8
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Grafic8)
    {
        if (Grafic8->objectName().isEmpty())
            Grafic8->setObjectName(QString::fromUtf8("Grafic8"));
        Grafic8->resize(800, 600);
        menubar = new QMenuBar(Grafic8);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Grafic8->setMenuBar(menubar);
        centralwidget = new QWidget(Grafic8);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Grafic8->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Grafic8);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Grafic8->setStatusBar(statusbar);

        retranslateUi(Grafic8);

        QMetaObject::connectSlotsByName(Grafic8);
    } // setupUi

    void retranslateUi(QMainWindow *Grafic8)
    {
        Grafic8->setWindowTitle(QCoreApplication::translate("Grafic8", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Grafic8: public Ui_Grafic8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFIC8_H
