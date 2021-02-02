/********************************************************************************
** Form generated from reading UI file 'grafic9.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFIC9_H
#define UI_GRAFIC9_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Grafic9
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Grafic9)
    {
        if (Grafic9->objectName().isEmpty())
            Grafic9->setObjectName(QString::fromUtf8("Grafic9"));
        Grafic9->resize(800, 600);
        menubar = new QMenuBar(Grafic9);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Grafic9->setMenuBar(menubar);
        centralwidget = new QWidget(Grafic9);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Grafic9->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Grafic9);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Grafic9->setStatusBar(statusbar);

        retranslateUi(Grafic9);

        QMetaObject::connectSlotsByName(Grafic9);
    } // setupUi

    void retranslateUi(QMainWindow *Grafic9)
    {
        Grafic9->setWindowTitle(QCoreApplication::translate("Grafic9", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Grafic9: public Ui_Grafic9 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFIC9_H
