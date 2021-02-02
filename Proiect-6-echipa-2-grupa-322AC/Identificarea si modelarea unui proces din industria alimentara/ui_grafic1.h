/********************************************************************************
** Form generated from reading UI file 'grafic1.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFIC1_H
#define UI_GRAFIC1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Grafic1
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Grafic1)
    {
        if (Grafic1->objectName().isEmpty())
            Grafic1->setObjectName(QString::fromUtf8("Grafic1"));
        Grafic1->resize(800, 600);
        menubar = new QMenuBar(Grafic1);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Grafic1->setMenuBar(menubar);
        centralwidget = new QWidget(Grafic1);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Grafic1->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Grafic1);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Grafic1->setStatusBar(statusbar);

        retranslateUi(Grafic1);

        QMetaObject::connectSlotsByName(Grafic1);
    } // setupUi

    void retranslateUi(QMainWindow *Grafic1)
    {
        Grafic1->setWindowTitle(QCoreApplication::translate("Grafic1", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Grafic1: public Ui_Grafic1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFIC1_H
