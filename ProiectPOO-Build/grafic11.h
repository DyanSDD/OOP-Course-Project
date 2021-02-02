#ifndef GRAFIC11_H
#define GRAFIC11_H

#include "QtWidgets/QPushButton"
#include "QtWidgets/QLabel"
#include "QtGui/QMovie"
#include <QMainWindow>

namespace Ui {
class Grafic11;
}

class Grafic11 : public QMainWindow
{
    Q_OBJECT
public Q_SLOTS:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

public:
    explicit Grafic11(QWidget *parent = nullptr);
    void resizeEvent(QResizeEvent *evt);
    ~Grafic11();

private:
    QPushButton *button1, *button2, *button3, *button4;
    QLabel *processLabel, *processLabel2;
    QMovie *movie, *movie2;
    Ui::Grafic11 *ui;
    QWidget * wdg;
};

#endif // GRAFIC11_H
