#ifndef GRAFIC7_H
#define GRAFIC7_H

#include "QtWidgets/QPushButton"
#include "QtWidgets/QLabel"
#include "QtGui/QMovie"
#include <QMainWindow>

namespace Ui {
class Grafic7;
}

class Grafic7 : public QMainWindow
{
    Q_OBJECT
public Q_SLOTS:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

public:
    explicit Grafic7(QWidget *parent = nullptr);
    void resizeEvent(QResizeEvent *evt);
    ~Grafic7();

private:
    QPushButton *button1, *button2, *button3, *button4;
    QLabel *processLabel, *processLabel2;
    QMovie *movie, *movie2;
    Ui::Grafic7 *ui;
    QWidget * wdg;
};

#endif // GRAFIC7_H
