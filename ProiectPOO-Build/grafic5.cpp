#include "QtCore/QStandardPaths"
#include "QtCore/QProcess"
#include "ui_grafic5.h"
#include "windows.h"
#include "grafic5.h"
#include "string.h"
#include "cstring"
#include "string"

using namespace std;

Grafic5::Grafic5(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Grafic5)
{
    ui->setupUi(this);

    this->setWindowTitle("Modelarea 5");
    this->resize(1280,720);

    wdg = new QWidget(this);

    button1 = new QPushButton(wdg);
    button2 = new QPushButton(wdg);
    button3 = new QPushButton(wdg);
    button4 = new QPushButton(wdg);

    button1->setText(tr("Intoarcere"));
    button2->setText(tr("Iesire"));
    button3->setText(tr("Randare 3D"));
    button4->setText(tr("Rezultate Modelare"));

    setCentralWidget(wdg);

    connect ( button1, SIGNAL( clicked() ), this, SLOT( on_pushButton_clicked() ) );
    connect ( button2, SIGNAL( clicked() ), this, SLOT( on_pushButton_2_clicked() ) );
    connect ( button3, SIGNAL( clicked() ), this, SLOT( on_pushButton_3_clicked() ) );
    connect ( button4, SIGNAL( clicked() ), this, SLOT( on_pushButton_4_clicked() ) );

    QString videoLocation = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    QString videoLocation2 = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    videoLocation += "/Proiect-6-echipa-2-grupa-322AC/Data/graph/2D/Grafic 5-2D.png";
    videoLocation2 += "/Proiect-6-echipa-2-grupa-322AC/Data/graph/text/5.png";
    char* charVLocation;
    char* charVLocation2;
    string fname = videoLocation.toStdString();
    string fname2 = videoLocation2.toStdString();
    charVLocation = new char [fname.size()+1];
    charVLocation2 = new char [fname2.size()+1];
    strcpy( charVLocation, fname.c_str() );
    strcpy( charVLocation2, fname2.c_str() );

    movie = new QMovie(charVLocation);
    movie2 = new QMovie(charVLocation2);
    processLabel = new QLabel(this);
    processLabel2 = new QLabel(this);
    processLabel->setScaledContents(true);
    processLabel2->setScaledContents(true);
    processLabel->setMovie(movie);
    processLabel2->setMovie(movie2);
    movie->start();
    movie2->start();
    processLabel->show();
    processLabel2->show();
}

void Grafic5::resizeEvent(QResizeEvent *evt)
{
    QString backgroundLocation = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    backgroundLocation += "/Proiect-6-echipa-2-grupa-322AC/Data/photo/MainWindowBackground.jpg";
    QPixmap background(backgroundLocation);
    background = background.scaled(size(), Qt::IgnoreAspectRatio);
    QPalette p = palette();
    p.setBrush(QPalette::Background, background);
    setPalette(p);

    processLabel->setGeometry(this->width()/30, this->height()/5.35, this->width()/2.35, this->height()/2);
    processLabel2->setGeometry(this->width()/2, this->height()/5.35, this->width()/2.35, this->height()/2);
    processLabel->setStyleSheet("border: 3px solid black;border-radius: 5px;");
    processLabel2->setStyleSheet("border: 3px solid black;border-radius: 5px;");

    QMainWindow::resizeEvent(evt); //call base implementation

    button1->setGeometry(QRect(this->width()/1.45, this->height()/1.15, this->width()/8, this->height()/15));
    button2->setGeometry(QRect(this->width()/1.20, this->height()/1.15, this->width()/8, this->height()/15));
    button3->setGeometry(QRect(this->width()/6, this->height()/1.375, this->width()/8, this->height()/15));
    button4->setGeometry(QRect(this->width()/1.525, this->height()/1.375, this->width()/8, this->height()/15));

    button1->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button2->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button3->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button4->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
}

Grafic5::~Grafic5()
{
    delete ui;
}

void Grafic5::on_pushButton_clicked()
{
    hide();
    parentWidget()->show();
}

void Grafic5::on_pushButton_2_clicked()
{
    parentWidget()->~QWidget();
}

void Grafic5::on_pushButton_3_clicked()
{
    QString R3D = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    R3D += "\\Proiect-6-echipa-2-grupa-322AC\\Data\\script\\dist\\3D\\3D.exe";
    string R3DPath = R3D.toStdString();
    std::wstring R3DLocation = std::wstring(R3DPath.begin(), R3DPath.end());
    LPCWSTR WR3DLocation = R3DLocation.c_str();
    ShellExecuteW(NULL, L"open", WR3DLocation, L"", WR3DLocation, SW_HIDE);
}

void Grafic5::on_pushButton_4_clicked()
{
    QString txt = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    txt += "\\Proiect-6-echipa-2-grupa-322AC\\Identificarea si modelarea unui proces din industria alimentara\\release\\Rezultate.txt";
    string txtPath = txt.toStdString();
    std::wstring txtLocation = std::wstring(txtPath.begin(), txtPath.end());
    LPCWSTR WtxtLocation = txtLocation.c_str();
    ShellExecuteW(NULL, L"open", WtxtLocation, L"", WtxtLocation, SW_SHOW);
}

