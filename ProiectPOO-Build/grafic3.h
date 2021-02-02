#ifndef GRAFIC3_H
#define GRAFIC3_H

#include "QtWidgets/QPushButton"
#include "QtWidgets/QLabel"
#include "QtGui/QMovie"
#include <QMainWindow>

namespace Ui {
class Grafic3;
}

class Grafic3 : public QMainWindow
{
    Q_OBJECT
public Q_SLOTS:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

public:
    explicit Grafic3(QWidget *parent = nullptr);
    void resizeEvent(QResizeEvent *evt);
    ~Grafic3();

private:
    QPushButton *button1, *button2, *button3, *button4;
    QLabel *processLabel, *processLabel2;
    QMovie *movie, *movie2;
    Ui::Grafic3 *ui;
    QWidget * wdg;
};

#endif // GRAFIC3_H
