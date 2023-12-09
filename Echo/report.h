#ifndef REPORT_H
#define REPORT_H

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
class report;
}

class report : public QMainWindow
{
    Q_OBJECT
    std::vector<QStringList> incomesvec;
    std::vector<QStringList> expensesvec;

public:
    explicit report(QString, QWidget *parent = nullptr);
    ~report();
    QString user;

private slots:
    void on_featuresB_clicked();

    void on_aboutB_clicked();

    void on_homeB_clicked();

private:
    Ui::report *ui;
};

#endif // REPORT_H
