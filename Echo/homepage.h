#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QMainWindow>
#include "income.h"
#include "expenses.h"
#include "soon.h"
#include "about.h"
#include "features.h"
#include "budgeting.h"
#include "report.h"

namespace Ui {
class homepage;
}

class homepage : public QMainWindow
{
    Q_OBJECT
    QString user;

public:
    explicit homepage(QString, QWidget *parent = nullptr);
    ~homepage();

private slots:
    void on_income_clicked();

    void on_expenses_clicked();

    void on_budgeting_clicked();

    void on_featuresB_clicked();

    void on_aboutB_clicked();

    void on_homeB_clicked();

    void on_analytics_clicked();

private:
    Ui::homepage *ui;
};

#endif // HOMEPAGE_H
