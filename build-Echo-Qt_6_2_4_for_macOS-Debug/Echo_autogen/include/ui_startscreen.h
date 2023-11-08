/********************************************************************************
** Form generated from reading UI file 'startscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTSCREEN_H
#define UI_STARTSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_startScreen
{
public:
    QWidget *centralwidget;
    QGraphicsView *navbar;
    QGraphicsView *whitebg;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *NavBarOpt;
    QPushButton *homeB;
    QPushButton *featuresB;
    QPushButton *aboutB;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *getStarted;
    QPushButton *howItWorks;
    QLabel *logoImage;
    QPushButton *strtnw;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *startScreen)
    {
        if (startScreen->objectName().isEmpty())
            startScreen->setObjectName(QString::fromUtf8("startScreen"));
        startScreen->resize(1300, 700);
        centralwidget = new QWidget(startScreen);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        navbar = new QGraphicsView(centralwidget);
        navbar->setObjectName(QString::fromUtf8("navbar"));
        navbar->setGeometry(QRect(0, 0, 1300, 60));
        QPalette palette;
        QBrush brush(QColor(31, 31, 31, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        navbar->setPalette(palette);
        navbar->setAutoFillBackground(true);
        navbar->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 31, 31)"));
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::Dense1Pattern);
        navbar->setBackgroundBrush(brush1);
        QBrush brush2(QColor(24, 24, 24, 255));
        brush2.setStyle(Qt::SolidPattern);
        navbar->setForegroundBrush(brush2);
        whitebg = new QGraphicsView(centralwidget);
        whitebg->setObjectName(QString::fromUtf8("whitebg"));
        whitebg->setGeometry(QRect(0, 60, 1300, 640));
        whitebg->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 237, 237)"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 101, 41));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        label->setFont(font);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(430, 0, 440, 61));
        NavBarOpt = new QHBoxLayout(horizontalLayoutWidget);
        NavBarOpt->setObjectName(QString::fromUtf8("NavBarOpt"));
        NavBarOpt->setContentsMargins(0, 0, 0, 0);
        homeB = new QPushButton(horizontalLayoutWidget);
        homeB->setObjectName(QString::fromUtf8("homeB"));
        QFont font1;
        font1.setPointSize(20);
        homeB->setFont(font1);
        homeB->setCursor(QCursor(Qt::PointingHandCursor));
        homeB->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0)"));

        NavBarOpt->addWidget(homeB);

        featuresB = new QPushButton(horizontalLayoutWidget);
        featuresB->setObjectName(QString::fromUtf8("featuresB"));
        featuresB->setFont(font1);
        featuresB->setCursor(QCursor(Qt::PointingHandCursor));
        featuresB->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0)"));

        NavBarOpt->addWidget(featuresB);

        aboutB = new QPushButton(horizontalLayoutWidget);
        aboutB->setObjectName(QString::fromUtf8("aboutB"));
        aboutB->setFont(font1);
        aboutB->setCursor(QCursor(Qt::PointingHandCursor));
        aboutB->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0)"));

        NavBarOpt->addWidget(aboutB);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(163, 217, 511, 106));
        QFont font2;
        font2.setPointSize(40);
        font2.setBold(true);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: black"));
        label_3->setWordWrap(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(176, 340, 501, 91));
        QFont font3;
        font3.setPointSize(24);
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color: black\n"
""));
        label_4->setWordWrap(true);
        getStarted = new QPushButton(centralwidget);
        getStarted->setObjectName(QString::fromUtf8("getStarted"));
        getStarted->setGeometry(QRect(163, 454, 192, 56));
        getStarted->setFont(font3);
        getStarted->setCursor(QCursor(Qt::PointingHandCursor));
        getStarted->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 226, 247); color: black"));
        howItWorks = new QPushButton(centralwidget);
        howItWorks->setObjectName(QString::fromUtf8("howItWorks"));
        howItWorks->setGeometry(QRect(439, 454, 192, 56));
        howItWorks->setFont(font3);
        howItWorks->setCursor(QCursor(Qt::PointingHandCursor));
        howItWorks->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 226, 247); color: black"));
        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(843, 168, 397, 377));
        strtnw = new QPushButton(centralwidget);
        strtnw->setObjectName(QString::fromUtf8("strtnw"));
        strtnw->setGeometry(QRect(1140, 10, 132, 40));
        QFont font4;
        font4.setPointSize(24);
        font4.setBold(true);
        strtnw->setFont(font4);
        strtnw->setCursor(QCursor(Qt::PointingHandCursor));
        strtnw->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0)"));
        startScreen->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(startScreen);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        startScreen->setStatusBar(statusbar);
        menubar = new QMenuBar(startScreen);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1300, 21));
        startScreen->setMenuBar(menubar);

        retranslateUi(startScreen);

        QMetaObject::connectSlotsByName(startScreen);
    } // setupUi

    void retranslateUi(QMainWindow *startScreen)
    {
        startScreen->setWindowTitle(QCoreApplication::translate("startScreen", "startScreen", nullptr));
        label->setText(QCoreApplication::translate("startScreen", "Echo", nullptr));
        homeB->setText(QCoreApplication::translate("startScreen", "Home", nullptr));
        featuresB->setText(QCoreApplication::translate("startScreen", "Features", nullptr));
        aboutB->setText(QCoreApplication::translate("startScreen", "About", nullptr));
        label_3->setText(QCoreApplication::translate("startScreen", "Track your spending and manage your finances", nullptr));
        label_4->setText(QCoreApplication::translate("startScreen", "Reach your goals and record your spending everyday. You can see where your money comes and goes.", nullptr));
        getStarted->setText(QCoreApplication::translate("startScreen", "Get Started", nullptr));
        howItWorks->setText(QCoreApplication::translate("startScreen", "How it works", nullptr));
        logoImage->setText(QString());
        strtnw->setText(QCoreApplication::translate("startScreen", "Start Now!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class startScreen: public Ui_startScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTSCREEN_H
