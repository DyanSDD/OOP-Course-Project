/********************************************************************************
** Form generated from reading UI file 'grafic11.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFIC11_H
#define UI_GRAFIC11_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Grafic11
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Grafic11)
    {
        if (Grafic11->objectName().isEmpty())
            Grafic11->setObjectName(QString::fromUtf8("Grafic11"));
        Grafic11->resize(800, 600);
        menubar = new QMenuBar(Grafic11);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Grafic11->setMenuBar(menubar);
        centralwidget = new QWidget(Grafic11);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Grafic11->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Grafic11);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Grafic11->setStatusBar(statusbar);

        retranslateUi(Grafic11);

        QMetaObject::connectSlotsByName(Grafic11);
    } // setupUi

    void retranslateUi(QMainWindow *Grafic11)
    {
        Grafic11->setWindowTitle(QCoreApplication::translate("Grafic11", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Grafic11: public Ui_Grafic11 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFIC11_H
