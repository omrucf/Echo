#include "expenses.h"
#include "ui_expenses.h"


expenses::expenses(QString user, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::expenses)
{
    ui->setupUi(this);
    this->setGeometry(80,100,1300,700);
    QWidget::setWindowTitle("Echo");

    this->user = user;

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

                if (ui->expensess->findItems(expensesvec[i][2], Qt::MatchStartsWith).size() != 0)
                    ui->expensess->item(ui->expensess->row(ui->expensess->findItems(expensesvec[i][2], Qt::MatchStartsWith)[0]))->setText(expensesvec[i][2] + ": " + QString::number(expensesvec[i][1].toInt() + ui->expensess->item(ui->expensess->row(ui->expensess->findItems(expensesvec[i][2], Qt::MatchStartsWith)[0]))->text().split(": ")[1].toInt()));
                else
                    ui->expensess->addItem(expensesvec[i][2] + ": " + expensesvec[i][1]);
                ui->total->setText(QString::number((std::stoi(ui->total->text().toStdString())) + std::stoi(expensesvec[i][1].toStdString())));
            }
        }

}

expenses::~expenses()
{
    delete ui;
}

bool expenses::is_number(const std::string & str)
{
    std::istringstream ss(str);
    double value;
    ss >> value;
    return !ss.fail() && ss.eof();
}

void expenses::on_addB_clicked()
{
    std::string temp;
    temp = ui->expensesE->text().toStdString();
    if (!is_number(temp))
    {
        ui->error->setText("expenses must be a number!");
        return;
    }
    if(ui->expensesE->text().isEmpty())
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

    inc = ui->expensesE->text();
    src = ui->sourceE->currentText();

    QStringList templist;
    templist.append(user);
    templist.append(inc);
    templist.append(src);

    expensesvec.push_back(templist);

    templist.clear();

    if (ui->expensess->findItems(src, Qt::MatchStartsWith).size() != 0)
        ui->expensess->item(ui->expensess->row(ui->expensess->findItems(src, Qt::MatchStartsWith)[0]))->setText(src + ": " + QString::number(inc.toInt() + ui->expensess->item(ui->expensess->row(ui->expensess->findItems(src, Qt::MatchStartsWith)[0]))->text().split(": ")[1].toInt()));
    else
        ui->expensess->addItem(src + ": " + inc);

    ui->total->setText(QString::number((std::stoi(ui->total->text().toStdString())) + std::stoi(inc.toStdString())));

    on_saveB_clicked();

}


void expenses::on_saveB_clicked()
{
    QFile file("/Users/omar/Desktop/AUC/Fall 23/Software/Project/database/expenses.csv");
        QTextStream write(&file);
        if (file.open(QIODevice::WriteOnly))
        {
            qDebug() << "opened file" << expensesvec.size();

    for(int i = 0; i < expensesvec.size(); i++)
    {
        qDebug() << "hello";
        write << expensesvec[i][0] << ',' << expensesvec[i][1] << ',' << expensesvec[i][2] << '\n';
    }
    }
        file.close();
}

void expenses::on_featuresB_clicked()
{
    this->close();
    features* f;
    f = new features(user);
    f->show();
}


void expenses::on_aboutB_clicked()
{
    this->close();
    about* ab;
    ab = new about(user);
    ab->show();
}

void expenses::on_homeB_clicked()
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




void expenses::on_sourceE_currentTextChanged(const QString &arg1)
{

}


void expenses::on_sourceE_currentIndexChanged(int index)
{
    if (ui->sourceE->currentText() == "Other")
    {
        ui->sourceE->setEditable(QComboBox::InsertBeforeCurrent);
    }
    else
        ui->sourceE->setEditable(false);
}

