#include "QtCore/QStandardPaths"
#include "QtCore/QProcess"
#include "ui_grafice.h"
#include "grafice.h"
#include "windows.h"
#include "string.h"
#include "cstring"
#include "string"

using namespace std;

Grafice::Grafice(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Grafice)
{
    ui->setupUi(this);

    this->setWindowTitle("Grafice");
    this->resize(1280,720);

    wdg = new QWidget(this);

    button1 = new QPushButton(wdg);
    button2 = new QPushButton(wdg);
    button3 = new QPushButton(wdg);
    button4 = new QPushButton(wdg);
    button5 = new QPushButton(wdg);
    button6 = new QPushButton(wdg);
    button7 = new QPushButton(wdg);
    button8 = new QPushButton(wdg);
    button9 = new QPushButton(wdg);
    button10 = new QPushButton(wdg);
    button11 = new QPushButton(wdg);
    button12 = new QPushButton(wdg);
    button13 = new QPushButton(wdg);
    button14 = new QPushButton(wdg);

    button1->setText(tr("Grafic1"));
    button2->setText(tr("Grafic2"));
    button3->setText(tr("Grafic3"));
    button4->setText(tr("Grafic4"));
    button5->setText(tr("Grafic5"));
    button6->setText(tr("Grafic6"));
    button7->setText(tr("Grafic7"));
    button8->setText(tr("Grafic8"));
    button9->setText(tr("Grafic9"));
    button10->setText(tr("Grafic10"));
    button11->setText(tr("Grafic11"));
    button12->setText(tr("Grafic12"));
    button13->setText(tr("Intoarcere"));
    button14->setText(tr("Iesire"));

    setCentralWidget(wdg);

    connect ( button1, SIGNAL( clicked() ), this, SLOT( on_pushButton_clicked() ) );
    connect ( button2, SIGNAL( clicked() ), this, SLOT( on_pushButton_2_clicked() ) );
    connect ( button3, SIGNAL( clicked() ), this, SLOT( on_pushButton_3_clicked() ) );
    connect ( button4, SIGNAL( clicked() ), this, SLOT( on_pushButton_4_clicked() ) );
    connect ( button5, SIGNAL( clicked() ), this, SLOT( on_pushButton_5_clicked() ) );
    connect ( button6, SIGNAL( clicked() ), this, SLOT( on_pushButton_6_clicked() ) );
    connect ( button7, SIGNAL( clicked() ), this, SLOT( on_pushButton_7_clicked() ) );
    connect ( button8, SIGNAL( clicked() ), this, SLOT( on_pushButton_8_clicked() ) );
    connect ( button9, SIGNAL( clicked() ), this, SLOT( on_pushButton_9_clicked() ) );
    connect ( button10, SIGNAL( clicked() ), this, SLOT( on_pushButton_10_clicked() ) );
    connect ( button11, SIGNAL( clicked() ), this, SLOT( on_pushButton_11_clicked() ) );
    connect ( button12, SIGNAL( clicked() ), this, SLOT( on_pushButton_12_clicked() ) );
    connect ( button13, SIGNAL( clicked() ), this, SLOT( on_pushButton_13_clicked() ) );
    connect ( button14, SIGNAL( clicked() ), this, SLOT( on_pushButton_14_clicked() ) );

    QString videoLocation = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    videoLocation += "/Proiect-6-echipa-2-grupa-322AC/Data/graph/2D/Graficul Mediilor.png";
    char* charVLocation;
    string fname = videoLocation.toStdString();
    charVLocation = new char [fname.size()+1];
    strcpy( charVLocation, fname.c_str() );

    movie = new QMovie(charVLocation);
    processLabel = new QLabel(this);
    processLabel->setScaledContents(true);
    processLabel->setMovie(movie);
    movie->start();
    processLabel->show();
}

void Grafice::resizeEvent(QResizeEvent *evt)
{
    QString backgroundLocation = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    backgroundLocation += "/Proiect-6-echipa-2-grupa-322AC/Data/photo/MainWindowBackground.jpg";
    QPixmap background(backgroundLocation);
    background = background.scaled(size(), Qt::IgnoreAspectRatio);
    QPalette p = palette();
    p.setBrush(QPalette::Background, background);
    setPalette(p);

    processLabel->setGeometry(this->width()/2, this->height()/11.5, this->width()/2.35, this->height()/2);
    processLabel->setStyleSheet("border: 3px solid black;border-radius: 5px;");

    QMainWindow::resizeEvent(evt); //call base implementation

    button1->setGeometry(QRect(this->width()/10, this->height()/10, this->width()/8, this->height()/15));
    button2->setGeometry(QRect(this->width()/10, this->height()/5.5, this->width()/8, this->height()/15));
    button3->setGeometry(QRect(this->width()/10, this->height()/3.785, this->width()/8, this->height()/15));
    button4->setGeometry(QRect(this->width()/10, this->height()/2.875, this->width()/8, this->height()/15));
    button5->setGeometry(QRect(this->width()/10, this->height()/2.325, this->width()/8, this->height()/15));
    button6->setGeometry(QRect(this->width()/10, this->height()/1.95, this->width()/8, this->height()/15));
    button7->setGeometry(QRect(this->width()/4, this->height()/10, this->width()/8, this->height()/15));
    button8->setGeometry(QRect(this->width()/4, this->height()/5.5, this->width()/8, this->height()/15));
    button9->setGeometry(QRect(this->width()/4, this->height()/3.785, this->width()/8, this->height()/15));
    button10->setGeometry(QRect(this->width()/4, this->height()/2.875, this->width()/8, this->height()/15));
    button11->setGeometry(QRect(this->width()/4, this->height()/2.325, this->width()/8, this->height()/15));
    button12->setGeometry(QRect(this->width()/4, this->height()/1.95, this->width()/8, this->height()/15));

    button13->setGeometry(QRect(this->width()/1.45, this->height()/1.15, this->width()/8, this->height()/15));
    button14->setGeometry(QRect(this->width()/1.20, this->height()/1.15, this->width()/8, this->height()/15));

    button1->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button2->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button3->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button4->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button5->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button6->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button7->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button8->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button9->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button10->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button11->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button12->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");

    button13->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button14->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");

}

Grafice::~Grafice()
{
    delete ui;
}

void Grafice::on_pushButton_clicked()
{
    hide();
    g1 = new Grafic1(this);
    g1 -> show();
}

void Grafice::on_pushButton_2_clicked()
{
    hide();
    g2 = new Grafic2(this);
    g2 -> show();
}

void Grafice::on_pushButton_3_clicked()
{
    hide();
    g3 = new Grafic3(this);
    g3 -> show();
}

void Grafice::on_pushButton_4_clicked()
{
    hide();
    g4 = new Grafic4(this);
    g4 -> show();
}

void Grafice::on_pushButton_5_clicked()
{
    hide();
    g5 = new Grafic5(this);
    g5 -> show();
}

void Grafice::on_pushButton_6_clicked()
{
    hide();
    g6 = new Grafic6(this);
    g6 -> show();
}

void Grafice::on_pushButton_7_clicked()
{
    hide();
    g7 = new Grafic7(this);
    g7 -> show();
}

void Grafice::on_pushButton_8_clicked()
{
    hide();
    g8 = new Grafic8(this);
    g8 -> show();
}

void Grafice::on_pushButton_9_clicked()
{
    hide();
    g9 = new Grafic9(this);
    g9 -> show();
}

void Grafice::on_pushButton_10_clicked()
{
    hide();
    g10 = new Grafic10(this);
    g10 -> show();
}

void Grafice::on_pushButton_11_clicked()
{
    hide();
    g11 = new Grafic11(this);
    g11 -> show();
}

void Grafice::on_pushButton_12_clicked()
{
    hide();
    g12 = new Grafic12(this);
    g12 -> show();
}

void Grafice::on_pushButton_13_clicked()
{
    hide();
    parentWidget()->show();
}

void Grafice::on_pushButton_14_clicked()
{
    parentWidget()->~QWidget();
}
