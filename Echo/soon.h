#ifndef SOON_H
#define SOON_H

#include <QMainWindow>
#include "homepage.h"
#include "about.h"
#include "features.h"

namespace Ui {
class soon;
}

class soon : public QMainWindow
{
    Q_OBJECT
    QString user;

public:
    explicit soon(QString, QWidget *parent = nullptr);
    ~soon();

private slots:
    void on_featuresB_clicked();

    void on_aboutB_clicked();

    void on_homeB_clicked();

private:
    Ui::soon *ui;
};

#endif // SOON_H
