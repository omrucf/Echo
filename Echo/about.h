#ifndef ABOUT_H
#define ABOUT_H

#include <QMainWindow>
#include "features.h"
#include "homepage.h"
#include "startscreen.h"

namespace Ui {
class about;
}

class about : public QMainWindow
{
    Q_OBJECT
    QString user;
    int x;

public:
    explicit about(QWidget *parent = nullptr);
    explicit about(QString, QWidget *parent = nullptr);
    ~about();

private slots:
    void on_homeB_clicked();

    void on_featuresB_clicked();

private:
    Ui::about *ui;

};

#endif // ABOUT_H
