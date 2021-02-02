/********************************************************************************
** Form generated from reading UI file 'grafice.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFICE_H
#define UI_GRAFICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Grafice
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Grafice)
    {
        if (Grafice->objectName().isEmpty())
            Grafice->setObjectName(QString::fromUtf8("Grafice"));
        Grafice->resize(800, 600);
        menubar = new QMenuBar(Grafice);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Grafice->setMenuBar(menubar);
        centralwidget = new QWidget(Grafice);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Grafice->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Grafice);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Grafice->setStatusBar(statusbar);

        retranslateUi(Grafice);

        QMetaObject::connectSlotsByName(Grafice);
    } // setupUi

    void retranslateUi(QMainWindow *Grafice)
    {
        Grafice->setWindowTitle(QCoreApplication::translate("Grafice", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Grafice: public Ui_Grafice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFICE_H
