#include "QtCore/QStandardPaths"
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "string.h"
#include "cstring"
#include "string"
#include "QStyle"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Identificarea si modelarea unui proces din industria alimentara");
    this->resize(1280,720);

    QString videoLocation = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    videoLocation += "/Proiect-6-echipa-2-grupa-322AC/Data/photo/MainWindowVideo.gif";
    char* charVLocation;
    string fname = videoLocation.toStdString();
    charVLocation = new char [fname.size()+1];
    strcpy( charVLocation, fname.c_str() );


    movie = new QMovie(charVLocation);
    processLabel = new QLabel(this);
    processLabel->setGeometry(
            Qt::LeftToRight+100,
            Qt::AlignCenter,
            this->width()/2,
            this->height()/2
    );
    processLabel->setScaledContents(true);
    processLabel->setMovie(movie);
    movie->start();
    processLabel->show();
//    proxy = scene->addWidget(processLabel);

    wdg = new QWidget(this);
    button1 = new QPushButton(wdg);
    button2 = new QPushButton(wdg);
    button3 = new QPushButton(wdg);

    button1->setText(tr("Meniu"));
    button2->setText(tr("Info")); 
    button3->setText(tr("Iesire"));

    setCentralWidget(wdg);

    connect ( button1, SIGNAL( clicked() ), this, SLOT( on_pushButton_clicked() ) );
    connect ( button2, SIGNAL( clicked() ), this, SLOT( on_pushButton_2_clicked() ) );
    connect ( button3, SIGNAL( clicked() ), this, SLOT( on_pushButton_3_clicked() ) );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *evt)
{
    QString backgroundLocation = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    backgroundLocation += "/Proiect-6-echipa-2-grupa-322AC/Data/photo/MainWindowBackground.jpg";
    QPixmap background(backgroundLocation);
    background = background.scaled(size(), Qt::IgnoreAspectRatio);
    QPalette p = palette();
    p.setBrush(QPalette::Background, background);
    setPalette(p);

    processLabel->setGeometry(this->width()/11, this->height()/8.5, this->width()/2, this->height()/2);
    processLabel->setStyleSheet("border: 3px solid black;border-radius: 5px;");

    button1->setGeometry(QRect(this->width()/1.35, this->height()/1.815, this->width()/6, this->height()/11.5));
    button2->setGeometry(QRect(this->width()/1.35, this->height()/1.55, this->width()/6, this->height()/11.5));
    button3->setGeometry(QRect(this->width()/1.35, this->height()/1.35, this->width()/6, this->height()/11.5));

    button1->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button2->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button3->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");

    QMainWindow::resizeEvent(evt); //call base implementation
}

void MainWindow::on_pushButton_clicked()
{
    hide();
    meniu = new Menu(this);
    meniu->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    hide();
    informatii = new Info(this);
    informatii->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    this->~MainWindow();
}
