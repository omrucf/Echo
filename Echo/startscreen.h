#ifndef STARTSCREEN_H
#define STARTSCREEN_H

#include <QMainWindow>
#include "signup.h"
#include "about.h"
#include "features.h"
#include "homepage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class startScreen; }
QT_END_NAMESPACE

class startScreen : public QMainWindow
{
    Q_OBJECT

public:
    startScreen(QWidget *parent = nullptr);
    ~startScreen();

private slots:
    void on_featuresB_clicked();

    void on_aboutB_clicked();

    void on_strtnw_clicked();

    void on_getStarted_clicked();

    void on_howItWorks_clicked();

private:
    Ui::startScreen *ui;
};
#endif // STARTSCREEN_H
