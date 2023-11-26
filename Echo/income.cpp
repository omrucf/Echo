#include "income.h"
#include "ui_income.h"


income::income(QString user, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::income)
{
    ui->setupUi(this);
    this->setGeometry(80,100,1300,700);
    this->user = user;
    QWidget::setWindowTitle("Echo");


    QString temp;

    QFile file("/Users/omar/Desktop/AUC/Fall 23/Software/Project/database/income.csv");
        if (file.open(QIODevice::ReadOnly)) {
            QTextStream read(&file);
        while(!read.atEnd()){
            temp = read.readLine();
            if(temp != "")
            {
                incomesvec.push_back(temp.split(','));
            }
        }
        }
        file.close();

        for(int i = 0; i < incomesvec.size(); i++)
        {
            if(incomesvec[i][0] == user)
            {
                if (ui->incomes->findItems(incomesvec[i][2], Qt::MatchStartsWith).size() != 0)
                    ui->incomes->item(ui->incomes->row(ui->incomes->findItems(incomesvec[i][2], Qt::MatchStartsWith)[0]))->setText(incomesvec[i][2] + ": " + QString::number(incomesvec[i][1].toInt() + ui->incomes->item(ui->incomes->row(ui->incomes->findItems(incomesvec[i][2], Qt::MatchStartsWith)[0]))->text().split(": ")[1].toInt()));
                else
                    ui->incomes->addItem(incomesvec[i][2] + ": " + incomesvec[i][1]);
                ui->total->setText(QString::number((std::stoi(ui->total->text().toStdString())) + std::stoi(incomesvec[i][1].toStdString())));
            }
        }
}

income::~income()
{
    delete ui;
}

bool income::is_number(const std::string & str)
{
    std::istringstream ss(str);
    double value;
    ss >> value;
    return !ss.fail() && ss.eof();
}

void income::on_addB_clicked()
{
    std::string temp;
    temp = ui->incomeE->text().toStdString();
    if (!is_number(temp))
    {
        ui->error->setText("Income must be a number!");
        return;
    }
    if(ui->incomeE->text().isEmpty())
    {
        ui->error->setText("Please fill all boxes!");
        return;
    }
    if (ui->sourceE->currentText() == "Select an item" || ui->sourceE->currentText() == "Other")
    {
        ui->error->setText("Please select a category");
        return;
    }

    QString inc, src;

    inc = ui->incomeE->text();
    src = ui->sourceE->currentText();

    QStringList templist;
    templist.append(user);
    templist.append(inc);
    templist.append(src);

    incomesvec.push_back(templist);



    templist.clear();

    if (ui->incomes->findItems(src, Qt::MatchStartsWith).size() != 0)
        ui->incomes->item(ui->incomes->row(ui->incomes->findItems(src, Qt::MatchStartsWith)[0]))->setText(src + ": " + QString::number(inc.toInt() + ui->incomes->item(ui->incomes->row(ui->incomes->findItems(src, Qt::MatchStartsWith)[0]))->text().split(": ")[1].toInt()));
    else
        ui->incomes->addItem(src + ": " + inc);


    ui->total->setText(QString::number((std::stoi(ui->total->text().toStdString())) + std::stoi(inc.toStdString())));
    on_saveB_clicked();

}


void income::on_saveB_clicked()
{
    QFile file("/Users/omar/Desktop/AUC/Fall 23/Software/Project/database/income.csv");
    QTextStream write(&file);
    if (file.open(QIODevice::WriteOnly))
    {
        qDebug() << "opened file" << incomesvec.size();

for(int i = 0; i < incomesvec.size(); i++)
{
    qDebug() << "hello";
    write << incomesvec[i][0] << ',' << incomesvec[i][1] << ',' << incomesvec[i][2] << '\n';
}
}
    file.close();
}

void income::on_featuresB_clicked()
{
    this->close();
    features* f;
    f = new features(user);
    f->show();
}


void income::on_aboutB_clicked()
{
    this->close();
    about* ab;
    ab = new about(user);
    ab->show();
}

void income::on_homeB_clicked()
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



void income::on_sourceE_currentIndexChanged(int index)
{
    if (ui->sourceE->currentText() == "Other")
    {
        ui->sourceE->setEditable(QComboBox::InsertBeforeCurrent);
    }
    else
        ui->sourceE->setEditable(false);
}

