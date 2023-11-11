#include "about.h"
#include "ui_about.h"

about::about(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    this->setGeometry(80,100,1300,700);
    QWidget::setWindowTitle("Echo");

    user = "";
}

about::about(QString user, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    this->user = user;
    this->setGeometry(80,100,1300,700);
    QWidget::setWindowTitle("Echo");
}

about::~about()
{
    delete ui;
}

void about::on_homeB_clicked()
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

void about::on_featuresB_clicked()
{
    this->close();
    features* f;
    f = new features(user);
    f->show();
}

