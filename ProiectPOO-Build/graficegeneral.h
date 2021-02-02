#ifndef GRAFICEGENERAL_H
#define GRAFICEGENERAL_H

#include "QtWidgets/QPushButton"
#include "QtWidgets/QLabel"
#include "QtGui/QMovie"
#include <QMainWindow>

namespace Ui {
class GraficeGeneral;
}

class GraficeGeneral : public QMainWindow
{
    Q_OBJECT
public Q_SLOTS:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

public:
    explicit GraficeGeneral(QWidget *parent = nullptr);
    void resizeEvent(QResizeEvent *evt);
    ~GraficeGeneral();

private:
    Ui::GraficeGeneral *ui;
    QPushButton *button1, *button2, *button3, *button4;
    QLabel *processLabel, *processLabel2;
    QMovie *movie, *movie2;
    QWidget * wdg;
};

#endif // GRAFICEGENERAL_H
