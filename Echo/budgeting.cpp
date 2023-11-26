#include "budgeting.h"
#include "ui_budgeting.h"

budgeting::budgeting(QString user, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::budgeting)
{
    ui->setupUi(this);

    this->setGeometry(80,100,1300,700);
    QWidget::setWindowTitle("Echo");
    this->user = user;

    QString temp;
    QStringList templist;
    int tempx = 0;

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

    QFile file2("/Users/omar/Desktop/AUC/Fall 23/Software/Project/database/income.csv");
        if (file2.open(QIODevice::ReadOnly)) {
            QTextStream read(&file2);
        while(!read.atEnd()){
            temp = read.readLine();
            if(temp != "")
            {
                incomesvec.push_back(temp.split(','));
            }
        }
        }
        file2.close();

    QFile file3("/Users/omar/Desktop/AUC/Fall 23/Software/Project/database/budget.csv");
        if (file3.open(QIODevice::ReadOnly)) {
            QTextStream read(&file3);

        while(!read.atEnd()){
            temp = read.readLine();

            if(temp != "")
                budgetsvec.push_back(temp.split(','));
        }
        }
        file3.close();

        for(int i = 0; i < budgetsvec.size(); i++)
        {
            if(budgetsvec[i][0] == user)
            {

                if (ui->budgetings->findItems(budgetsvec[i][2], Qt::MatchStartsWith).size() != 0)
                    ui->budgetings->item(ui->budgetings->row(ui->budgetings->findItems(budgetsvec[i][2], Qt::MatchStartsWith)[0]))->setText(budgetsvec[i][2] + ": " + QString::number(budgetsvec[i][1].toInt() + ui->budgetings->item(ui->budgetings->row(ui->budgetings->findItems(budgetsvec[i][2], Qt::MatchStartsWith)[0]))->text().split(": ")[1].toInt()));
                else
                    ui->budgetings->addItem(budgetsvec[i][2] + ": " + budgetsvec[i][1]);
            }
        }

        for(int i = 0; i < expensesvec.size(); i++)
        {
            if(expensesvec[i][0] == user)
            {
                if (ui->budgetings->findItems(expensesvec[i][2], Qt::MatchStartsWith).size() != 0)
                    ui->budgetings->item(ui->budgetings->row(ui->budgetings->findItems(expensesvec[i][2], Qt::MatchStartsWith)[0]))->setText(expensesvec[i][2] + ": " + QString::number(ui->budgetings->item(ui->budgetings->row(ui->budgetings->findItems(expensesvec[i][2], Qt::MatchStartsWith)[0]))->text().split(": ")[1].toInt() - expensesvec[i][1].toInt()));
            }
        }
}

budgeting::~budgeting()
{
    delete ui;
}

bool budgeting::is_number(const std::string & str)
{
    std::istringstream ss(str);
    double value;
    ss >> value;
    return !ss.fail() && ss.eof();
}

void budgeting::on_addB_clicked()
{
    std::string temp;
    temp = ui->budgetE->text().toStdString();
    if (!is_number(temp))
    {
        ui->error->setText("expenses must be a number!");
        return;
    }
    if(ui->budgetE->text().isEmpty())
    {
        ui->error->setText("Please fill all boxes!");
        return;
    }
    if (ui->categories->currentText() == "Select an item" || ui->categories->currentText() == "Other")
    {
        ui->error->setText("Please select a category");
        return;
    }

    QString inc, src;

    inc = ui->budgetE->text();
    src = ui->categories->currentText();

    QStringList templist;
    templist.append(user);
    templist.append(inc);
    templist.append(src);

    budgetsvec.push_back(templist);

    templist.clear();

    if (ui->budgetings->findItems(src, Qt::MatchStartsWith).size() != 0)
        ui->budgetings->item(ui->budgetings->row(ui->budgetings->findItems(src, Qt::MatchStartsWith)[0]))->setText(src + ": " + QString::number(inc.toInt() + ui->budgetings->item(ui->budgetings->row(ui->budgetings->findItems(src, Qt::MatchStartsWith)[0]))->text().split(": ")[1].toInt()));
    else
        ui->budgetings->addItem(src + ": " + inc);



    QFile file("/Users/omar/Desktop/AUC/Fall 23/Software/Project/database/budget.csv");
        QTextStream write(&file);
        if (file.open(QIODevice::WriteOnly))
        {
            qDebug() << "opened file" << budgetsvec.size();

    for(int i = 0; i < budgetsvec.size(); i++)
    {
        qDebug() << "hello";
        write << budgetsvec[i][0] << ',' << budgetsvec[i][1] << ',' << budgetsvec[i][2] << '\n';
    }
    }
        file.close();

}


void budgeting::on_categories_currentIndexChanged(int index)
{
    if (ui->categories->currentText() == "Other")
    {
        ui->categories->setEditable(QComboBox::InsertBeforeCurrent);
    }
    else
        ui->categories->setEditable(false);
}


void budgeting::on_homeB_clicked()
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


void budgeting::on_featuresB_clicked()
{
    this->close();
    features* f;
    f = new features(user);
    f->show();
}


void budgeting::on_aboutB_clicked()
{
    this->close();
    about* ab;
    ab = new about(user);
    ab->show();
}

