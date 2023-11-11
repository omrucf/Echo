/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_homepage
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
    QLabel *logoImage;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *income;
    QPushButton *expenses;
    QPushButton *budgeting;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *savings;
    QPushButton *investment;
    QPushButton *analytics;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *homepage)
    {
        if (homepage->objectName().isEmpty())
            homepage->setObjectName(QString::fromUtf8("homepage"));
        homepage->resize(1300, 700);
        centralwidget = new QWidget(homepage);
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
        homeB->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0)"));

        NavBarOpt->addWidget(homeB);

        featuresB = new QPushButton(horizontalLayoutWidget);
        featuresB->setObjectName(QString::fromUtf8("featuresB"));
        featuresB->setFont(font1);
        featuresB->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0)"));

        NavBarOpt->addWidget(featuresB);

        aboutB = new QPushButton(horizontalLayoutWidget);
        aboutB->setObjectName(QString::fromUtf8("aboutB"));
        aboutB->setFont(font1);
        aboutB->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0)"));

        NavBarOpt->addWidget(aboutB);

        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(843, 168, 397, 377));
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(330, 200, 631, 451));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font2;
        font2.setPointSize(24);
        font2.setBold(true);
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: black"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 0, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: black"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 2, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: black"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 2, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: black"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("color: black"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 0, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: black"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_2->raise();
        label_6->raise();
        label_7->raise();
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(330, 119, 631, 171));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        income = new QPushButton(horizontalLayoutWidget_2);
        income->setObjectName(QString::fromUtf8("income"));
        income->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(income);

        expenses = new QPushButton(horizontalLayoutWidget_2);
        expenses->setObjectName(QString::fromUtf8("expenses"));
        expenses->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(expenses);

        budgeting = new QPushButton(horizontalLayoutWidget_2);
        budgeting->setObjectName(QString::fromUtf8("budgeting"));
        budgeting->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(budgeting);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(330, 340, 634, 180));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        savings = new QPushButton(horizontalLayoutWidget_3);
        savings->setObjectName(QString::fromUtf8("savings"));
        savings->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(savings);

        investment = new QPushButton(horizontalLayoutWidget_3);
        investment->setObjectName(QString::fromUtf8("investment"));
        investment->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(investment);

        analytics = new QPushButton(horizontalLayoutWidget_3);
        analytics->setObjectName(QString::fromUtf8("analytics"));
        analytics->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(analytics);

        homepage->setCentralWidget(centralwidget);
        whitebg->raise();
        navbar->raise();
        label->raise();
        horizontalLayoutWidget->raise();
        logoImage->raise();
        gridLayoutWidget_2->raise();
        horizontalLayoutWidget_2->raise();
        horizontalLayoutWidget_3->raise();
        statusbar = new QStatusBar(homepage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        homepage->setStatusBar(statusbar);
        menubar = new QMenuBar(homepage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1300, 21));
        homepage->setMenuBar(menubar);

        retranslateUi(homepage);

        QMetaObject::connectSlotsByName(homepage);
    } // setupUi

    void retranslateUi(QMainWindow *homepage)
    {
        homepage->setWindowTitle(QCoreApplication::translate("homepage", "homepage", nullptr));
        label->setText(QCoreApplication::translate("homepage", "Echo", nullptr));
        homeB->setText(QCoreApplication::translate("homepage", "Home", nullptr));
        featuresB->setText(QCoreApplication::translate("homepage", "Features", nullptr));
        aboutB->setText(QCoreApplication::translate("homepage", "About", nullptr));
        logoImage->setText(QString());
        label_6->setText(QCoreApplication::translate("homepage", "Expenses", nullptr));
        label_5->setText(QCoreApplication::translate("homepage", "Analytics", nullptr));
        label_4->setText(QCoreApplication::translate("homepage", "Investments", nullptr));
        label_3->setText(QCoreApplication::translate("homepage", "Savings", nullptr));
        label_7->setText(QCoreApplication::translate("homepage", "Budgeting", nullptr));
        label_2->setText(QCoreApplication::translate("homepage", "Income", nullptr));
        income->setText(QString());
        expenses->setText(QString());
        budgeting->setText(QString());
        savings->setText(QString());
        investment->setText(QString());
        analytics->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class homepage: public Ui_homepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
