/********************************************************************************
** Form generated from reading UI file 'graficegeneral.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFICEGENERAL_H
#define UI_GRAFICEGENERAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraficeGeneral
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GraficeGeneral)
    {
        if (GraficeGeneral->objectName().isEmpty())
            GraficeGeneral->setObjectName(QString::fromUtf8("GraficeGeneral"));
        GraficeGeneral->resize(800, 600);
        menubar = new QMenuBar(GraficeGeneral);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        GraficeGeneral->setMenuBar(menubar);
        centralwidget = new QWidget(GraficeGeneral);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        GraficeGeneral->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(GraficeGeneral);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GraficeGeneral->setStatusBar(statusbar);

        retranslateUi(GraficeGeneral);

        QMetaObject::connectSlotsByName(GraficeGeneral);
    } // setupUi

    void retranslateUi(QMainWindow *GraficeGeneral)
    {
        GraficeGeneral->setWindowTitle(QCoreApplication::translate("GraficeGeneral", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraficeGeneral: public Ui_GraficeGeneral {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFICEGENERAL_H
