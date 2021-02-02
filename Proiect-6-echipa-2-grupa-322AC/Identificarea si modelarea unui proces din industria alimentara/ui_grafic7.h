/********************************************************************************
** Form generated from reading UI file 'grafic7.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFIC7_H
#define UI_GRAFIC7_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Grafic7
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Grafic7)
    {
        if (Grafic7->objectName().isEmpty())
            Grafic7->setObjectName(QString::fromUtf8("Grafic7"));
        Grafic7->resize(800, 600);
        menubar = new QMenuBar(Grafic7);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Grafic7->setMenuBar(menubar);
        centralwidget = new QWidget(Grafic7);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Grafic7->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Grafic7);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Grafic7->setStatusBar(statusbar);

        retranslateUi(Grafic7);

        QMetaObject::connectSlotsByName(Grafic7);
    } // setupUi

    void retranslateUi(QMainWindow *Grafic7)
    {
        Grafic7->setWindowTitle(QCoreApplication::translate("Grafic7", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Grafic7: public Ui_Grafic7 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFIC7_H
