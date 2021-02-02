#ifndef MENU_H
#define MENU_H

#include "QtWidgets/QPushButton"
#include "graficegeneral.h"
#include "dateintrare.h"
#include <QMainWindow>
#include "grafice.h"

namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    void resizeEvent(QResizeEvent *evt);
    ~Menu();

public Q_SLOTS:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();

private:
    QPushButton *button1, *button2, *button3, *button4, *button5;
    GraficeGeneral *graficGeneral;
    DateIntrare *inputData;
    Grafice *grafic;
    QWidget * wdg;
    Ui::Menu *ui;
};

#endif // MENU_H
