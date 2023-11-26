#include "signup.h"
#include "./ui_signup.h"



signup::signup(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::signup)
{
    ui->setupUi(this);
    QWidget::setWindowTitle("Echo");
    this->setGeometry(80,100,1300,700);
    ui->passEdit->setEchoMode(QLineEdit::Password);
    ui->confirmEdit->setEchoMode(QLineEdit::Password);

}

signup::~signup()
{
    delete ui;
}

bool signup::checkUser(QString user)
{
    bool found = false;
       allaccounts();
       for(int i=0;i<=x;i++){
           if(user==un[i]){
               found = true;
               break;
           }
       }if(found){
           return true;
       } else{
           return false;
       }
}

bool signup::CheckPass(QString USER, QString PASS)
{
    for(int i=0;i<=x;i++){
            if(USER==un[i]){
                x=i;
                break;
            }
        }
        if(PASS==pw[x]){
            return true;
        }else{
            return false;
        }
}


void signup::on_homeB_clicked()
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

void signup::on_featuresB_clicked()
{
    this->close();
    features* f;
    f = new features;
    f->show();
}

void signup::on_aboutB_clicked()
{
    this->close();
    about* ab;
    ab = new about;
    ab->show();
}

void signup::allaccounts()
{
    QString temp;
    QStringList tempList;
    QFile file("/Users/omar/Desktop/AUC/Fall 23/Software/Project/database/users.csv");
    qDebug() << "allaccounts() file opened";
        if (file.open(QIODevice::ReadOnly)) {
            QTextStream read(&file);
        while(!read.atEnd()){
            read >> temp;
            if(temp != "")
            {
                tempList = temp.split(',');
                qDebug() << "tempList: " << tempList;
                un[x] = tempList.at(0);
                pw[x] = tempList.at(1);
                x++;
            }
        }
        }
        file.close();
}



void signup::on_signupB_clicked()
{
    QFile file("/Users/omar/Desktop/AUC/Fall 23/Software/Project/database/users.csv");
    if(ui->userEdit->text().isEmpty() || ui->passEdit->text().isEmpty() || ui->confirmEdit->text().isEmpty() )
    {
        ui->error->setText("Please fill all boxes");
    }
    else if (ui->checkBox->isChecked()){
        if (file.open(QIODevice::Append)) {
            qDebug() << "append file openedd";
            QTextStream write(&file);
            user = ui->userEdit->text();
            if(!checkUser(user)&&user!=""){
                qDebug() << "user available";
                pass = ui->passEdit->text();
                passc = ui->confirmEdit->text();
                if(pass!=passc){
                    ui->error->setText("password and confirmation must be the same");
                }
                else
                {
                    qDebug() << "user and pass written";
                    write<<user<<","<<pass<<"\n";
                    this->close();

                    homepage* hp;
                    hp = new homepage(user);

                    hp->show();
                }
                file.close();
            }
            else
            {
                ui->error->setText("user already exists!\nplease try again!");
            }
        }
        else
            qDebug() << "file failed to open" ;
    }
    else
        ui->error->setText("Please check the terms of services!");
}


void signup::on_signinB_clicked()
{
    this->close();
    signin * s;
    s = new signin;
    s->show();
}

