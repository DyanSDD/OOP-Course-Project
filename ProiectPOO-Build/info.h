#ifndef INFO_H
#define INFO_H

#include "QtWidgets/QPushButton"
#include <QMainWindow>

namespace Ui {
class Info;
}

class Info : public QMainWindow
{
    Q_OBJECT
public Q_SLOTS:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

public:
    explicit Info(QWidget *parent = nullptr);
    void resizeEvent(QResizeEvent *evt);
    ~Info();

private:
    QPushButton *button1, *button2;
    QWidget * wdg;
    Ui::Info *ui;
};

#endif // INFO_H
