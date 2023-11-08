#ifndef SIGNIN_H
#define SIGNIN_H

#include <QMainWindow>
#include <QWidget>
#include <fstream>
#include <QFile>
#include <QTextStream>
#include "homepage.h"
#include "about.h"
#include "features.h"
#include "homepage.h"
#include "signup.h"

namespace Ui {
class signin;
}

class signin : public QMainWindow
{
    Q_OBJECT
    QString user, pass;
    QString un[500];
    QString pw[500];
    int x = 0;

public:
    explicit signin(QWidget *parent = nullptr);
    ~signin();
    bool checkUser(QString);
    void allaccounts();
    bool CheckPass(QString,QString);


private slots:
    void on_signupB_clicked();

    void on_homeB_clicked();

    void on_featuresB_clicked();

    void on_aboutB_clicked();

    void on_signinB_clicked();

private:
    Ui::signin *ui;
};

#endif // SIGNIN_H
