/********************************************************************************
** Form generated from reading UI file 'grafic2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFIC2_H
#define UI_GRAFIC2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Grafic2
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Grafic2)
    {
        if (Grafic2->objectName().isEmpty())
            Grafic2->setObjectName(QString::fromUtf8("Grafic2"));
        Grafic2->resize(800, 600);
        menubar = new QMenuBar(Grafic2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Grafic2->setMenuBar(menubar);
        centralwidget = new QWidget(Grafic2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Grafic2->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Grafic2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Grafic2->setStatusBar(statusbar);

        retranslateUi(Grafic2);

        QMetaObject::connectSlotsByName(Grafic2);
    } // setupUi

    void retranslateUi(QMainWindow *Grafic2)
    {
        Grafic2->setWindowTitle(QCoreApplication::translate("Grafic2", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Grafic2: public Ui_Grafic2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFIC2_H
