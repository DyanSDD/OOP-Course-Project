/********************************************************************************
** Form generated from reading UI file 'grafic10.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFIC10_H
#define UI_GRAFIC10_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Grafic10
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Grafic10)
    {
        if (Grafic10->objectName().isEmpty())
            Grafic10->setObjectName(QString::fromUtf8("Grafic10"));
        Grafic10->resize(800, 600);
        menubar = new QMenuBar(Grafic10);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Grafic10->setMenuBar(menubar);
        centralwidget = new QWidget(Grafic10);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Grafic10->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Grafic10);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Grafic10->setStatusBar(statusbar);

        retranslateUi(Grafic10);

        QMetaObject::connectSlotsByName(Grafic10);
    } // setupUi

    void retranslateUi(QMainWindow *Grafic10)
    {
        Grafic10->setWindowTitle(QCoreApplication::translate("Grafic10", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Grafic10: public Ui_Grafic10 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFIC10_H
