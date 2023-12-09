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
#include <QMessageBox>

namespace Ui {
class expenses;
}

class expenses : public QMainWindow
{
    Q_OBJECT
    std::vector<QStringList> expensesvec;
    QMessageBox* t;

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
    void on_sourceE_currentTextChanged(const QString &arg1);

    void on_sourceE_currentIndexChanged(int index);

private:
    Ui::expenses *ui;
};

#endif // EXPENSES_H
