#ifndef GRAFIC4_H
#define GRAFIC4_H

#include "QtWidgets/QPushButton"
#include "QtWidgets/QLabel"
#include "QtGui/QMovie"
#include <QMainWindow>

namespace Ui {
class Grafic4;
}

class Grafic4 : public QMainWindow
{
    Q_OBJECT
public Q_SLOTS:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

public:
    explicit Grafic4(QWidget *parent = nullptr);
    void resizeEvent(QResizeEvent *evt);
    ~Grafic4();

private:
    QPushButton *button1, *button2, *button3, *button4;
    QLabel *processLabel, *processLabel2;
    QMovie *movie, *movie2;
    Ui::Grafic4 *ui;
    QWidget * wdg;
};

#endif // GRAFIC4_H
