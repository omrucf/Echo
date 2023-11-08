#include "signin.h"
#include "ui_signin.h"

signin::signin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signin)
{
    ui->setupUi(this);
}

signin::~signin()
{
    delete ui;
}

bool signin::checkUser(QString user)
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

bool signin::CheckPass(QString USER, QString PASS)
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

void signin::allaccounts()
{
    QString temp;
    QStringList tempList;
    QFile file("/Users/omar/Desktop/AUC/Fall 23/Software/Project/users.csv");
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

void signin::on_signupB_clicked()
{
    user = ui->userEdit->text();

        if(!checkUser(user))
        {
            ui->error->setText("user not found!!");
        }
        else
        {
            pass = ui->passEdit->text();
            if(CheckPass(user,pass))
            {
                this->close();
                homepage * hp;
                hp = new homepage(user);
                hp->show();
            }
            else
            {
                ui->error->setText("incorrect password!");
            }
        }
}

void signin::on_homeB_clicked()
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

void signin::on_featuresB_clicked()
{
    this->close();
    features* f;
    f = new features;
    f->show();
}

void signin::on_aboutB_clicked()
{
    this->close();
    about* ab;
    ab = new about;
    ab->show();
}


void signin::on_signinB_clicked()
{
    this->close();
    signup * s;
    s = new signup;
    s->show();
}

