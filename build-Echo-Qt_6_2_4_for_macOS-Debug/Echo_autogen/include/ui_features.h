/********************************************************************************
** Form generated from reading UI file 'features.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEATURES_H
#define UI_FEATURES_H

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

class Ui_features
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
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *features)
    {
        if (features->objectName().isEmpty())
            features->setObjectName(QString::fromUtf8("features"));
        features->resize(1300, 700);
        centralwidget = new QWidget(features);
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

        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(843, 168, 397, 377));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 129, 173, 33));
        QFont font2;
        font2.setPointSize(32);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: black\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(51, 100, 1203, 582));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(false);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color: black"));
        label_3->setWordWrap(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 190, 271, 21));
        QFont font4;
        font4.setPointSize(18);
        font4.setBold(true);
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("color: black"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 260, 271, 21));
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8("color: black"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 520, 271, 30));
        label_6->setFont(font4);
        label_6->setStyleSheet(QString::fromUtf8("color: black"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 460, 310, 20));
        label_7->setFont(font4);
        label_7->setStyleSheet(QString::fromUtf8("color: black"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(51, 390, 140, 30));
        label_8->setFont(font4);
        label_8->setStyleSheet(QString::fromUtf8("color: black"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(50, 324, 271, 21));
        label_9->setFont(font4);
        label_9->setStyleSheet(QString::fromUtf8("color: black"));
        features->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(features);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        features->setStatusBar(statusbar);
        menubar = new QMenuBar(features);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1300, 21));
        features->setMenuBar(menubar);

        retranslateUi(features);

        QMetaObject::connectSlotsByName(features);
    } // setupUi

    void retranslateUi(QMainWindow *features)
    {
        features->setWindowTitle(QCoreApplication::translate("features", "features", nullptr));
        label->setText(QCoreApplication::translate("features", "Echo", nullptr));
        homeB->setText(QCoreApplication::translate("features", "Home", nullptr));
        featuresB->setText(QCoreApplication::translate("features", "Features", nullptr));
        aboutB->setText(QCoreApplication::translate("features", "About", nullptr));
        logoImage->setText(QString());
        label_2->setText(QCoreApplication::translate("features", "Features", nullptr));
        label_3->setText(QCoreApplication::translate("features", "\n"
"User Account Management is fundamental as it enables users to create accounts, log in securely, and recover passwords if forgotten. Without a robust account management system, users cannot access the app and its features.\n"
"\n"
"Income tracking is crucial as it allows users to understand their financial inflow. It helps users plan their budget, savings, and investments effectively. Managing different sources of income and tracking them over time provides users with a clear financial overview.\n"
"\n"
"Expense tracking is essential for financial management. Categorizing expenses, differentiating between recurring and one-time expenses, and monitoring spending habits are key aspects. Users need to know where their money is going to make informed decisions about budgeting and saving.\n"
"\n"
"Budgeting tools empower users to control their finances. Setting spending limits and visualizing overspending provide immediate feedback, encouraging responsible financial behavior. Effective budgeting ensures that us"
                        "ers live within their means and avoid unnecessary debts.\n"
"\n"
"Savings goals motivate users to save for specific purposes. Setting targets and tracking progress visually encourages disciplined saving habits. Achieving savings goals gives users a sense of accomplishment and financial security for future needs or desires.\n"
"\n"
"Timely alerts are essential for user engagement and financial responsibility. Alerts for overspending prevent users from going over budget, while bill payment reminders help users avoid late fees. Notifications ensure users stay on top of their financial obligations.", nullptr));
        label_4->setText(QCoreApplication::translate("features", "4.1 User Account Management", nullptr));
        label_5->setText(QCoreApplication::translate("features", "4.2. Income Tracking", nullptr));
        label_6->setText(QCoreApplication::translate("features", "4.6 Notifications", nullptr));
        label_7->setText(QCoreApplication::translate("features", "4.5 Savings Goals", nullptr));
        label_8->setText(QCoreApplication::translate("features", "4.4 Budgeting", nullptr));
        label_9->setText(QCoreApplication::translate("features", "4.3 Expense Tracking", nullptr));
    } // retranslateUi

};

namespace Ui {
    class features: public Ui_features {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEATURES_H
