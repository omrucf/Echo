#include "startscreen.h"
#include "./ui_startscreen.h"



startScreen::startScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::startScreen)
{
    ui->setupUi(this);
    QWidget::setWindowTitle("Echo");

    QPixmap logoImage("/Users/omar/Desktop/AUC/Fall 23/Software/Project/icons/logoImage.png");
    logoImage.scaled(397,377);
    ui->logoImage->setPixmap(logoImage);
}

startScreen::~startScreen()
{

    delete ui;
}


void startScreen::on_featuresB_clicked()
{
    this->close();
    features* f;
    f = new features;
    f->show();
}


void startScreen::on_aboutB_clicked()
{
    this->close();
    about* ab;
    ab = new about;
    ab->show();
}


void startScreen::on_strtnw_clicked()
{
 on_getStarted_clicked();
}


void startScreen::on_getStarted_clicked()
{
    this->close();
    signup* su;
    su = new signup;
    su->show();
}


void startScreen::on_howItWorks_clicked()
{
    on_aboutB_clicked();
}

