#include "QtCore/QStandardPaths"
#include "ui_menu.h"
#include "menu.h"

Menu::Menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    this->setWindowTitle("Meniu");
    this->resize(1280,720);

    wdg = new QWidget(this);

    button1 = new QPushButton(wdg);
    button2 = new QPushButton(wdg);
    button3 = new QPushButton(wdg);
    button4 = new QPushButton(wdg);
    button5 = new QPushButton(wdg);

    button1->setText(tr("Grafice"));
    button2->setText(tr("Grafic General"));
    button3->setText(tr("Date Intrare"));
    button4->setText(tr("Intoarcere"));
    button5->setText(tr("Iesire"));

    setCentralWidget(wdg);

    connect ( button1, SIGNAL( clicked() ), this, SLOT( on_pushButton_clicked() ) );
    connect ( button2, SIGNAL( clicked() ), this, SLOT( on_pushButton_2_clicked() ) );
    connect ( button3, SIGNAL( clicked() ), this, SLOT( on_pushButton_3_clicked() ) );
    connect ( button4, SIGNAL( clicked() ), this, SLOT( on_pushButton_4_clicked() ) );
    connect ( button5, SIGNAL( clicked() ), this, SLOT( on_pushButton_5_clicked() ) );
}

void Menu::resizeEvent(QResizeEvent *evt)
{
    QString backgroundLocation = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    backgroundLocation += "/Proiect-6-echipa-2-grupa-322AC/Data/photo/MainWindowBackground.jpg";
    QPixmap background(backgroundLocation);
    background = background.scaled(size(), Qt::IgnoreAspectRatio);
    QPalette p = palette();
    p.setBrush(QPalette::Background, background);
    setPalette(p);
    QMainWindow::resizeEvent(evt); //call base implementation

    button1->setGeometry(QRect(this->width()/2.75, this->height()/9, this->width()/3.25, this->height()/10.5));
    button2->setGeometry(QRect(this->width()/2.75, this->height()/4.5, this->width()/3.25, this->height()/10.5));
    button3->setGeometry(QRect(this->width()/2.75, this->height()/3, this->width()/3.25, this->height()/10.5));
    button4->setGeometry(QRect(this->width()/1.45, this->height()/1.15, this->width()/8, this->height()/15));
    button5->setGeometry(QRect(this->width()/1.20, this->height()/1.15, this->width()/8, this->height()/15));

    button1->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button2->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button3->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button4->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button5->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{
    hide();
    grafic = new Grafice(this);
    grafic -> show();
}

void Menu::on_pushButton_2_clicked()
{
    hide();
    graficGeneral = new GraficeGeneral(this);
    graficGeneral -> show();
}

void Menu::on_pushButton_3_clicked()
{
    hide();
    inputData = new DateIntrare(this);
    inputData -> show();
}

void Menu::on_pushButton_4_clicked()
{
    hide();
    parentWidget()->show();
}

void Menu::on_pushButton_5_clicked()
{
    parentWidget()->~QWidget();
}
