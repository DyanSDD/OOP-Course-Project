#include "QtCore/QStandardPaths"
#include "ui_dateintrare.h"
#include "QtCore/QProcess"
#include "dateintrare.h"
#include "QtGui/QMovie"
#include "windows.h"
#include "string.h"
#include "cstring"
#include "string"

using namespace std;

DateIntrare::DateIntrare(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DateIntrare)
{
    ui->setupUi(this);

    this->setWindowTitle("Date Intrare");
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
    button15 = new QPushButton(wdg);
    button16 = new QPushButton(wdg);

    button1->setText(tr("Date 1"));
    button2->setText(tr("Date 2"));
    button3->setText(tr("Date 3"));
    button4->setText(tr("Date 4"));
    button5->setText(tr("Date 5"));
    button6->setText(tr("Date 6"));
    button7->setText(tr("Date 7"));
    button8->setText(tr("Date 8"));
    button9->setText(tr("Date 9"));
    button10->setText(tr("Date 10"));
    button11->setText(tr("Date 11"));
    button12->setText(tr("Date 12"));
    button13->setText(tr("Rezultate"));
    button14->setText(tr("Medii"));
    button15->setText(tr("Intoarcere"));
    button16->setText(tr("Iesire"));

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
    connect ( button15, SIGNAL( clicked() ), this, SLOT( on_pushButton_15_clicked() ) );
    connect ( button16, SIGNAL( clicked() ), this, SLOT( on_pushButton_16_clicked() ) );

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

void DateIntrare::resizeEvent(QResizeEvent *evt)
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
    button13->setGeometry(QRect(this->width()/10, this->height()/1.675, this->width()/8, this->height()/15));
    button14->setGeometry(QRect(this->width()/4, this->height()/1.675, this->width()/8, this->height()/15));

    button15->setGeometry(QRect(this->width()/1.45, this->height()/1.15, this->width()/8, this->height()/15));
    button16->setGeometry(QRect(this->width()/1.20, this->height()/1.15, this->width()/8, this->height()/15));

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

    button15->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button16->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
}

DateIntrare::~DateIntrare()
{
    delete ui;
}

void DateIntrare::on_pushButton_clicked()
{
    QString input = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    input += "\\Proiect-6-echipa-2-grupa-322AC\\Identificarea si modelarea unui proces din industria alimentara\\release\\1.txt";
    string inputPath = input.toStdString();
    std::wstring inputLocation = std::wstring(inputPath.begin(), inputPath.end());
    LPCWSTR WinputLocation = inputLocation.c_str();
    ShellExecuteW(NULL, L"open", WinputLocation, L"", WinputLocation, SW_SHOW);
}

void DateIntrare::on_pushButton_2_clicked()
{
    QString input = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    input += "\\Proiect-6-echipa-2-grupa-322AC\\Identificarea si modelarea unui proces din industria alimentara\\release\\2.txt";
    string inputPath = input.toStdString();
    std::wstring inputLocation = std::wstring(inputPath.begin(), inputPath.end());
    LPCWSTR WinputLocation = inputLocation.c_str();
    ShellExecuteW(NULL, L"open", WinputLocation, L"", WinputLocation, SW_SHOW);
}

void DateIntrare::on_pushButton_3_clicked()
{
    QString input = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    input += "\\Proiect-6-echipa-2-grupa-322AC\\Identificarea si modelarea unui proces din industria alimentara\\release\\3.txt";
    string inputPath = input.toStdString();
    std::wstring inputLocation = std::wstring(inputPath.begin(), inputPath.end());
    LPCWSTR WinputLocation = inputLocation.c_str();
    ShellExecuteW(NULL, L"open", WinputLocation, L"", WinputLocation, SW_SHOW);
}

void DateIntrare::on_pushButton_4_clicked()
{
    QString input = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    input += "\\Proiect-6-echipa-2-grupa-322AC\\Identificarea si modelarea unui proces din industria alimentara\\release\\4.txt";
    string inputPath = input.toStdString();
    std::wstring inputLocation = std::wstring(inputPath.begin(), inputPath.end());
    LPCWSTR WinputLocation = inputLocation.c_str();
    ShellExecuteW(NULL, L"open", WinputLocation, L"", WinputLocation, SW_SHOW);
}

void DateIntrare::on_pushButton_5_clicked()
{
    QString input = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    input += "\\Proiect-6-echipa-2-grupa-322AC\\Identificarea si modelarea unui proces din industria alimentara\\release\\5.txt";
    string inputPath = input.toStdString();
    std::wstring inputLocation = std::wstring(inputPath.begin(), inputPath.end());
    LPCWSTR WinputLocation = inputLocation.c_str();
    ShellExecuteW(NULL, L"open", WinputLocation, L"", WinputLocation, SW_SHOW);
}

void DateIntrare::on_pushButton_6_clicked()
{
    QString input = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    input += "\\Proiect-6-echipa-2-grupa-322AC\\Identificarea si modelarea unui proces din industria alimentara\\release\\6.txt";
    string inputPath = input.toStdString();
    std::wstring inputLocation = std::wstring(inputPath.begin(), inputPath.end());
    LPCWSTR WinputLocation = inputLocation.c_str();
    ShellExecuteW(NULL, L"open", WinputLocation, L"", WinputLocation, SW_SHOW);
}

void DateIntrare::on_pushButton_7_clicked()
{
    QString input = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    input += "\\Proiect-6-echipa-2-grupa-322AC\\Identificarea si modelarea unui proces din industria alimentara\\release\\7.txt";
    string inputPath = input.toStdString();
    std::wstring inputLocation = std::wstring(inputPath.begin(), inputPath.end());
    LPCWSTR WinputLocation = inputLocation.c_str();
    ShellExecuteW(NULL, L"open", WinputLocation, L"", WinputLocation, SW_SHOW);
}

void DateIntrare::on_pushButton_8_clicked()
{
    QString input = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    input += "\\Proiect-6-echipa-2-grupa-322AC\\Identificarea si modelarea unui proces din industria alimentara\\release\\8.txt";
    string inputPath = input.toStdString();
    std::wstring inputLocation = std::wstring(inputPath.begin(), inputPath.end());
    LPCWSTR WinputLocation = inputLocation.c_str();
    ShellExecuteW(NULL, L"open", WinputLocation, L"", WinputLocation, SW_SHOW);
}

void DateIntrare::on_pushButton_9_clicked()
{
    QString input = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    input += "\\Proiect-6-echipa-2-grupa-322AC\\Identificarea si modelarea unui proces din industria alimentara\\release\\9.txt";
    string inputPath = input.toStdString();
    std::wstring inputLocation = std::wstring(inputPath.begin(), inputPath.end());
    LPCWSTR WinputLocation = inputLocation.c_str();
    ShellExecuteW(NULL, L"open", WinputLocation, L"", WinputLocation, SW_SHOW);
}

void DateIntrare::on_pushButton_10_clicked()
{
    QString input = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    input += "\\Proiect-6-echipa-2-grupa-322AC\\Identificarea si modelarea unui proces din industria alimentara\\release\\10.txt";
    string inputPath = input.toStdString();
    std::wstring inputLocation = std::wstring(inputPath.begin(), inputPath.end());
    LPCWSTR WinputLocation = inputLocation.c_str();
    ShellExecuteW(NULL, L"open", WinputLocation, L"", WinputLocation, SW_SHOW);
}

void DateIntrare::on_pushButton_11_clicked()
{
    QString input = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    input += "\\Proiect-6-echipa-2-grupa-322AC\\Identificarea si modelarea unui proces din industria alimentara\\release\\11.txt";
    string inputPath = input.toStdString();
    std::wstring inputLocation = std::wstring(inputPath.begin(), inputPath.end());
    LPCWSTR WinputLocation = inputLocation.c_str();
    ShellExecuteW(NULL, L"open", WinputLocation, L"", WinputLocation, SW_SHOW);
}

void DateIntrare::on_pushButton_12_clicked()
{
    QString input = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    input += "\\Proiect-6-echipa-2-grupa-322AC\\Identificarea si modelarea unui proces din industria alimentara\\release\\12.txt";
    string inputPath = input.toStdString();
    std::wstring inputLocation = std::wstring(inputPath.begin(), inputPath.end());
    LPCWSTR WinputLocation = inputLocation.c_str();
    ShellExecuteW(NULL, L"open", WinputLocation, L"", WinputLocation, SW_SHOW);
}

void DateIntrare::on_pushButton_13_clicked()
{
    QString input = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    input += "\\Proiect-6-echipa-2-grupa-322AC\\Identificarea si modelarea unui proces din industria alimentara\\release\\Rezultate.txt";
    string inputPath = input.toStdString();
    std::wstring inputLocation = std::wstring(inputPath.begin(), inputPath.end());
    LPCWSTR WinputLocation = inputLocation.c_str();
    ShellExecuteW(NULL, L"open", WinputLocation, L"", WinputLocation, SW_SHOW);
}

void DateIntrare::on_pushButton_14_clicked()
{
    QString input = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    input += "\\Proiect-6-echipa-2-grupa-322AC\\Identificarea si modelarea unui proces din industria alimentara\\release\\Medii.txt";
    string inputPath = input.toStdString();
    std::wstring inputLocation = std::wstring(inputPath.begin(), inputPath.end());
    LPCWSTR WinputLocation = inputLocation.c_str();
    ShellExecuteW(NULL, L"open", WinputLocation, L"", WinputLocation, SW_SHOW);
}

void DateIntrare::on_pushButton_15_clicked()
{
    hide();
    parentWidget()->show();
}

void DateIntrare::on_pushButton_16_clicked()
{
    parentWidget()->~QWidget();
}
