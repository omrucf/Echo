#ifndef INCOME_H
#define INCOME_H

#include <sstream>
#include <QMainWindow>
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <QFile>
#include "homepage.h"
#include "about.h"
#include "features.h"

namespace Ui {
class income;
}

class income : public QMainWindow
{
    Q_OBJECT
    std::vector<QStringList> incomesvec;

public:
    explicit income(QString, QWidget *parent = nullptr);
    ~income();
    bool is_number(const std::string&);
    QString user;

private slots:
    void on_addB_clicked();

    void on_saveB_clicked();

    void on_featuresB_clicked();

    void on_aboutB_clicked();

    void on_homeB_clicked();

private:
    Ui::income *ui;
};

#endif // INCOME_H
