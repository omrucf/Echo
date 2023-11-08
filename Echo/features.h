#ifndef FEATURES_H
#define FEATURES_H

#include <QMainWindow>
#include "about.h"
#include "homepage.h"

namespace Ui {
class features;
}

class features : public QMainWindow
{
    Q_OBJECT
    QString user;
    int x;

public:
    explicit features(QWidget *parent = nullptr);
    explicit features(QString, QWidget *parent = nullptr);
    ~features();

private slots:
    void on_homeB_clicked();

    void on_aboutB_clicked();

private:
    Ui::features *ui;

};

#endif // FEATURES_H
