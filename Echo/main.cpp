#include "startscreen.h"
#include "income.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    startScreen* w;
    w = new startScreen;
    w->show();

//    income *i;
//    i = new income(5);
//    i->show();

    return a.exec();
}
