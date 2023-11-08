#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>
#include <QWidget>
#include <fstream>
#include <QFile>
#include <QTextStream>
#include <iostream>
#include <climits>
#include "about.h"
#include "features.h"
#include "homepage.h"
#include "signin.h"

QT_BEGIN_NAMESPACE
namespace Ui { class signup; }
QT_END_NAMESPACE

class signup : public QMainWindow
{
    Q_OBJECT
        QString user, pass, passc, userX;
        QString un[500];
        QString pw[500];
        int x = 0;
        QString ux[500];

public:
    signup(QWidget *parent = nullptr);
    ~signup();

    bool checkUser(QString);
    void allaccounts();
    bool CheckPass(QString,QString);
    void runclicker();

private slots:
    void on_homeB_clicked();

    void on_featuresB_clicked();

    void on_aboutB_clicked();

    void on_signupB_clicked();

    void on_signinB_clicked();

private:
    Ui::signup *ui;
};
#endif // STARTSCREEN_H
