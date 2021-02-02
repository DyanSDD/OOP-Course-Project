#ifndef GRAFICE_H
#define GRAFICE_H

#include "QtWidgets/QPushButton"
#include <QMainWindow>
#include "grafic1.h"
#include "grafic2.h"
#include "grafic3.h"
#include "grafic4.h"
#include "grafic5.h"
#include "grafic6.h"
#include "grafic7.h"
#include "grafic8.h"
#include "grafic9.h"
#include "grafic10.h"
#include "grafic11.h"
#include "grafic12.h"

namespace Ui {
class Grafice;
}

class Grafice : public QMainWindow
{
    Q_OBJECT

public:
    explicit Grafice(QWidget *parent = nullptr);
    void resizeEvent(QResizeEvent *evt);
    ~Grafice();

public Q_SLOTS:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_14_clicked();

private:
    QPushButton *button6, *button7, *button8, *button9, *button10;
    QPushButton *button1, *button2, *button3, *button4, *button5;
    QPushButton *button11, *button12, *button13, *button14;
    QLabel *processLabel;
    Ui::Grafice *ui;
    QMovie *movie;
    QWidget * wdg;
    Grafic10 *g10;
    Grafic11 *g11;
    Grafic12 *g12;
    Grafic1 *g1;
    Grafic2 *g2;
    Grafic3 *g3;
    Grafic4 *g4;
    Grafic5 *g5;
    Grafic6 *g6;
    Grafic7 *g7;
    Grafic8 *g8;
    Grafic9 *g9;
};

#endif // GRAFICE_H
