#include "homepage.h"
#include "ui_homepage.h"

homepage::homepage(QString user, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::homepage)
{

    this->user = user;

    int size = 200;

    ui->setupUi(this);
    this->setGeometry(80,100,1300,700);
    QWidget::setWindowTitle("Echo");

    ui->income->setIcon(QIcon(":/Icons/income"));
    ui->income->setIconSize(QSize(size,size));

    ui->expenses->setIcon(QIcon(":/Icons/expenses"));
    ui->expenses->setIconSize(QSize(size,size));

    ui->budgeting->setIcon(QIcon(":/Icons/budgeting"));
    ui->budgeting->setIconSize(QSize(size,size));

    ui->analytics->setIcon(QIcon(":/Icons/analytics"));
    ui->analytics->setIconSize(QSize(size,size));

    ui->savings->setIcon(QIcon(":/Icons/piggybank"));
    ui->savings->setIconSize(QSize(size,size - 40));
}

homepage::~homepage()
{
    delete ui;
}

void homepage::on_income_clicked()
{
    this->close();
    income *i;
    i = new income(user);
    i->show();
}


void homepage::on_expenses_clicked()
{
    this->close();
    expenses * e;
    e = new expenses(user);
    e->show();
}


void homepage::on_budgeting_clicked()
{
    this->close();
    budgeting * s;
    s = new budgeting(user);
    s->show();
}

void homepage::on_featuresB_clicked()
{
    this->close();
    features* f;
    f = new features(user);
    f->show();
}


void homepage::on_aboutB_clicked()
{
    this->close();
    about* ab;
    ab = new about(user);
    ab->show();
}

void homepage::on_homeB_clicked()
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




void homepage::on_savings_clicked()
{
    this->close();
    soon * s;
    s = new soon(user);
    s->show();
}


void homepage::on_analytics_clicked()
{
    this->close();
    report * s;
    s = new report(user);
    s->show();
}

