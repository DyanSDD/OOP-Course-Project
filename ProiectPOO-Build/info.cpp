#include "QtCore/QStandardPaths"
#include "ui_info.h"
#include "info.h"


Info::Info(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Info)
{
    ui->setupUi(this);

    this->setWindowTitle("Informatii");
    this->resize(1280,720);

    wdg = new QWidget(this);

    button1 = new QPushButton(wdg);
    button2 = new QPushButton(wdg);

    button1->setText(tr("Intoarcere"));
    button2->setText(tr("Iesire"));

    setCentralWidget(wdg);

    connect ( button1, SIGNAL( clicked() ), this, SLOT( on_pushButton_clicked() ) );
    connect ( button2, SIGNAL( clicked() ), this, SLOT( on_pushButton_2_clicked() ) );
}

void Info::resizeEvent(QResizeEvent *evt)
{
    QString backgroundLocation = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    backgroundLocation += "/Proiect-6-echipa-2-grupa-322AC/Data/photo/theTeam.png";
    QPixmap background(backgroundLocation);
    background = background.scaled(size(), Qt::IgnoreAspectRatio);
    QPalette p = palette();
    p.setBrush(QPalette::Background, background);
    setPalette(p);

    QMainWindow::resizeEvent(evt); //call base implementation

    button1->setGeometry(QRect(this->width()/1.45, this->height()/1.15, this->width()/8, this->height()/15));
    button2->setGeometry(QRect(this->width()/1.20, this->height()/1.15, this->width()/8, this->height()/15));

    button1->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
    button2->setStyleSheet("background-color: #3cbaa2; border: 1px solid black;border-radius: 5px;");
}

Info::~Info()
{
    delete ui;
}

void Info::on_pushButton_clicked()
{
    hide();
    parentWidget()->show();
}

void Info::on_pushButton_2_clicked()
{
    parentWidget()->~QWidget();
}
