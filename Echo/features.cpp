#include "features.h"
#include "ui_features.h"

features::features(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::features)
{
    ui->setupUi(this);
    user = "";
}

features::features(QString user, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::features)
{
    ui->setupUi(this);
    this->user = user;

}

features::~features()
{
    delete ui;
}

void features::on_homeB_clicked()
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

void features::on_aboutB_clicked()
{
    this->close();
    about* ab;
    ab = new about(user);
    ab->show();
}
