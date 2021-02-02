/********************************************************************************
** Form generated from reading UI file 'grafic3.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFIC3_H
#define UI_GRAFIC3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Grafic3
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Grafic3)
    {
        if (Grafic3->objectName().isEmpty())
            Grafic3->setObjectName(QString::fromUtf8("Grafic3"));
        Grafic3->resize(800, 600);
        menubar = new QMenuBar(Grafic3);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Grafic3->setMenuBar(menubar);
        centralwidget = new QWidget(Grafic3);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Grafic3->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Grafic3);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Grafic3->setStatusBar(statusbar);

        retranslateUi(Grafic3);

        QMetaObject::connectSlotsByName(Grafic3);
    } // setupUi

    void retranslateUi(QMainWindow *Grafic3)
    {
        Grafic3->setWindowTitle(QCoreApplication::translate("Grafic3", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Grafic3: public Ui_Grafic3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFIC3_H
