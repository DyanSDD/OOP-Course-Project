#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "QtMultimediaWidgets/QVideoWidget"
#include "QtMultimedia/QMediaPlaylist"
#include "QtMultimedia/QMediaPlayer"
#include "QtWidgets/QGraphicsScene"
#include "QtWidgets/QDesktopWidget"
#include "QtGui/QGuiApplication"
#include "QtWidgets/QPushButton"
#include "QtWidgets/QLabel"
#include "QtGui/QMovie"
#include <QMainWindow>
#include "menu.h"
#include "info.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void resizeEvent(QResizeEvent *evt);
    ~MainWindow();

public Q_SLOTS:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:
    QPushButton *button1, *button2, *button3;
    QGraphicsProxyWidget *proxy;
    QVideoWidget *videoWidget;
    QMediaPlaylist *playlist;
    QGraphicsScene *scene;
    QLabel *processLabel;
    QMediaPlayer *player;
    Ui::MainWindow *ui;
    Info *informatii;
    QSize *gifResize;
    QMovie *movie;
    QWidget * wdg;
    Menu *meniu;
};
#endif // MAINWINDOW_H
