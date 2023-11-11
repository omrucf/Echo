#include "soon.h"
#include "ui_soon.h"

soon::soon(QString user, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::soon)
{
    ui->setupUi(this);
    this->user = user;
    this->setGeometry(80,100,1300,700);
    QWidget::setWindowTitle("Echo");

}

soon::~soon()
{
    delete ui;
}

void soon::on_featuresB_clicked()
{
    this->close();
    features* f;
    f = new features(user);
    f->show();
}


void soon::on_aboutB_clicked()
{
    this->close();
    about* ab;
    ab = new about(user);
    ab->show();
}

void soon::on_homeB_clicked()
{
    this->close();
        if(user == "")
        {
            startScreen * ss;
            ss = new startScreen;
            ss->show();
        }
        else
        {
            homepage * hp;
            hp = new homepage(user);
            hp->show();
        }
}

