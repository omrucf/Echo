#ifndef EXPENSES_H
#define EXPENSES_H

#include <QMainWindow>
#include <sstream>
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <QFile>
#include "homepage.h"
#include "about.h"
#include "features.h"

namespace Ui {
class expenses;
}

class expenses : public QMainWindow
{
    Q_OBJECT
    std::vector<QStringList> expensesvec;

public:
    explicit expenses(QString, QWidget *parent = nullptr);
    ~expenses();
    bool is_number(const std::string&);
    QString user;

private slots:
    void on_addB_clicked();

    void on_saveB_clicked();

    void on_homeB_clicked();

    void on_aboutB_clicked();

    void on_featuresB_clicked();
private:
    Ui::expenses *ui;
};

#endif // EXPENSES_H
