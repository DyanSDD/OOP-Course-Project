#ifndef DATEINTRARE_H
#define DATEINTRARE_H


#include "QtWidgets/QPushButton"
#include "QtWidgets/QLabel"
#include <QMainWindow>

namespace Ui {
class DateIntrare;
}

class DateIntrare : public QMainWindow
{
    Q_OBJECT
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
    void on_pushButton_15_clicked();
    void on_pushButton_16_clicked();

public:
    explicit DateIntrare(QWidget *parent = nullptr);
    void resizeEvent(QResizeEvent *evt);
    ~DateIntrare();

private:
    QPushButton *button11, *button12, *button13, *button14, *button15, *button16;
    QPushButton *button6, *button7, *button8, *button9, *button10;
    QPushButton *button1, *button2, *button3, *button4, *button5;
    QLabel *processLabel;
    Ui::DateIntrare *ui;
    QMovie *movie;
    QWidget * wdg;
};

#endif // DATEINTRARE_H
