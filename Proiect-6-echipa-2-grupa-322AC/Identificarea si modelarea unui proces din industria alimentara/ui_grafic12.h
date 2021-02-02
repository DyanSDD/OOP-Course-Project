/********************************************************************************
** Form generated from reading UI file 'grafic12.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFIC12_H
#define UI_GRAFIC12_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Grafic12
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Grafic12)
    {
        if (Grafic12->objectName().isEmpty())
            Grafic12->setObjectName(QString::fromUtf8("Grafic12"));
        Grafic12->resize(800, 600);
        menubar = new QMenuBar(Grafic12);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Grafic12->setMenuBar(menubar);
        centralwidget = new QWidget(Grafic12);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Grafic12->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Grafic12);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Grafic12->setStatusBar(statusbar);

        retranslateUi(Grafic12);

        QMetaObject::connectSlotsByName(Grafic12);
    } // setupUi

    void retranslateUi(QMainWindow *Grafic12)
    {
        Grafic12->setWindowTitle(QCoreApplication::translate("Grafic12", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Grafic12: public Ui_Grafic12 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFIC12_H
