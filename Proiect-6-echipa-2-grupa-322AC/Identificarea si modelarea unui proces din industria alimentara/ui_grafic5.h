/********************************************************************************
** Form generated from reading UI file 'grafic5.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFIC5_H
#define UI_GRAFIC5_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Grafic5
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Grafic5)
    {
        if (Grafic5->objectName().isEmpty())
            Grafic5->setObjectName(QString::fromUtf8("Grafic5"));
        Grafic5->resize(800, 600);
        menubar = new QMenuBar(Grafic5);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Grafic5->setMenuBar(menubar);
        centralwidget = new QWidget(Grafic5);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Grafic5->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Grafic5);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Grafic5->setStatusBar(statusbar);

        retranslateUi(Grafic5);

        QMetaObject::connectSlotsByName(Grafic5);
    } // setupUi

    void retranslateUi(QMainWindow *Grafic5)
    {
        Grafic5->setWindowTitle(QCoreApplication::translate("Grafic5", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Grafic5: public Ui_Grafic5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFIC5_H
