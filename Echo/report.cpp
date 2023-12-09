#include "report.h"
#include "ui_report.h"

report::report(QString user, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::report)
{
    ui->setupUi(this);
    this->setGeometry(80,100,1300,700);
    this->user = user;
    QWidget::setWindowTitle("Echo");


    QString tempInc;

    QFile fileinc("/Users/omar/Desktop/AUC/Fall 23/Software/Project/database/income.csv");
        if (fileinc.open(QIODevice::ReadOnly)) {
            QTextStream read(&fileinc);
        while(!read.atEnd()){
            tempInc = read.readLine();
            if(tempInc != "")
            {
                incomesvec.push_back(tempInc.split(','));
            }
        }
        }
        fileinc.close();

        for(int i = 0; i < incomesvec.size(); i++)
        {
            if(incomesvec[i][0] == user)
            {
                if (ui->incomeLst->findItems(incomesvec[i][2], Qt::MatchStartsWith).size() != 0)
                    ui->incomeLst->item(ui->incomeLst->row(ui->incomeLst->findItems(incomesvec[i][2], Qt::MatchStartsWith)[0]))->setText(incomesvec[i][2] + ": " + QString::number(incomesvec[i][1].toInt() + ui->incomeLst->item(ui->incomeLst->row(ui->incomeLst->findItems(incomesvec[i][2], Qt::MatchStartsWith)[0]))->text().split(": ")[1].toInt()));
                else
                    ui->incomeLst->addItem(incomesvec[i][2] + ": " + incomesvec[i][1]);
                ui->totalInc->setText(QString::number((std::stoi(ui->totalInc->text().toStdString())) + std::stoi(incomesvec[i][1].toStdString())));
            }
        }

        QString temp;

        QFile file("/Users/omar/Desktop/AUC/Fall 23/Software/Project/database/expenses.csv");
            if (file.open(QIODevice::ReadOnly)) {
                QTextStream read(&file);
            while(!read.atEnd()){
                temp = read.readLine();
                if(temp != "")
                {
                    expensesvec.push_back(temp.split(','));
                }
            }
            }
            file.close();

            for(int i = 0; i < expensesvec.size(); i++)
            {
                if(expensesvec[i][0] == user)
                {

                    if (ui->expensesLst->findItems(expensesvec[i][2], Qt::MatchStartsWith).size() != 0)
                        ui->expensesLst->item(ui->expensesLst->row(ui->expensesLst->findItems(expensesvec[i][2], Qt::MatchStartsWith)[0]))->setText(expensesvec[i][2] + ": " + QString::number(expensesvec[i][1].toInt() + ui->expensesLst->item(ui->expensesLst->row(ui->expensesLst->findItems(expensesvec[i][2], Qt::MatchStartsWith)[0]))->text().split(": ")[1].toInt()));
                    else
                        ui->expensesLst->addItem(expensesvec[i][2] + ": " + expensesvec[i][1]);
                    ui->totalExp->setText(QString::number((std::stoi(ui->totalExp->text().toStdString())) + std::stoi(expensesvec[i][1].toStdString())));
                }
            }

            ui->total->setText(QString::number(ui->totalInc->text().toInt() - ui->totalExp->text().toInt()));
}

report::~report()
{
    delete ui;
}


void report::on_featuresB_clicked()
{
    this->close();
    features* f;
    f = new features(user);
    f->show();
}


void report::on_aboutB_clicked()
{
    this->close();
    about* ab;
    ab = new about(user);
    ab->show();
}

void report::on_homeB_clicked()
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
