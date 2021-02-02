/********************************************************************************
** Form generated from reading UI file 'grafic6.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFIC6_H
#define UI_GRAFIC6_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Grafic6
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Grafic6)
    {
        if (Grafic6->objectName().isEmpty())
            Grafic6->setObjectName(QString::fromUtf8("Grafic6"));
        Grafic6->resize(800, 600);
        menubar = new QMenuBar(Grafic6);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Grafic6->setMenuBar(menubar);
        centralwidget = new QWidget(Grafic6);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Grafic6->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Grafic6);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Grafic6->setStatusBar(statusbar);

        retranslateUi(Grafic6);

        QMetaObject::connectSlotsByName(Grafic6);
    } // setupUi

    void retranslateUi(QMainWindow *Grafic6)
    {
        Grafic6->setWindowTitle(QCoreApplication::translate("Grafic6", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Grafic6: public Ui_Grafic6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFIC6_H
