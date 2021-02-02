#ifndef GRAFIC2_H
#define GRAFIC2_H

#include "QtWidgets/QPushButton"
#include "QtWidgets/QLabel"
#include "QtGui/QMovie"
#include <QMainWindow>

namespace Ui {
class Grafic2;
}

class Grafic2 : public QMainWindow
{
    Q_OBJECT
public Q_SLOTS:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

public:
    explicit Grafic2(QWidget *parent = nullptr);
    void resizeEvent(QResizeEvent *evt);
    ~Grafic2();

private:
    QPushButton *button1, *button2, *button3, *button4;
    QLabel *processLabel, *processLabel2;
    QMovie *movie, *movie2;
    Ui::Grafic2 *ui;
    QWidget * wdg;
};

#endif // GRAFIC2_H
