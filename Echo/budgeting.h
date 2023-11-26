#ifndef BUDGETING_H
#define BUDGETING_H

#include <QMainWindow>
#include <QFile>
#include <sstream>
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "homepage.h"
#include "about.h"
#include "features.h"

namespace Ui {
class budgeting;
}

class budgeting : public QMainWindow
{
    Q_OBJECT
    std::vector<QStringList> expensesvec;
    std::vector<QStringList> incomesvec;
    std::vector<QStringList> budgetsvec;

public:
    explicit budgeting(QString, QWidget *parent = nullptr);
    ~budgeting();
    bool is_number(const std::string&);

private slots:
    void on_addB_clicked();

    void on_categories_currentIndexChanged(int index);

    void on_homeB_clicked();

    void on_featuresB_clicked();

    void on_aboutB_clicked();

private:
    Ui::budgeting *ui;
    QString user;
};

#endif // BUDGETING_H
