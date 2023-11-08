/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signin
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
    QLineEdit *userEdit;
    QLineEdit *passEdit;
    QLabel *label_3;
    QPushButton *signupB;
    QLabel *label_4;
    QLabel *error;
    QPushButton *signinB;
    QLabel *label_7;
    QLabel *label_6;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *signin)
    {
        if (signin->objectName().isEmpty())
            signin->setObjectName(QString::fromUtf8("signin"));
        signin->resize(1300, 700);
        centralwidget = new QWidget(signin);
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
        label_2->setGeometry(QRect(462, 120, 321, 88));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Inter")});
        font2.setPointSize(36);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: black"));
        userEdit = new QLineEdit(centralwidget);
        userEdit->setObjectName(QString::fromUtf8("userEdit"));
        userEdit->setGeometry(QRect(460, 265, 356, 40));
        userEdit->setFont(font1);
        userEdit->setStyleSheet(QString::fromUtf8("background-color: white; color: black; border-width: 1px; border-style: solid; border-color: rgba(68, 69, 69, 181);\n"
""));
        passEdit = new QLineEdit(centralwidget);
        passEdit->setObjectName(QString::fromUtf8("passEdit"));
        passEdit->setGeometry(QRect(460, 373, 356, 40));
        passEdit->setFont(font1);
        passEdit->setStyleSheet(QString::fromUtf8("background-color: white; color: black; border-width: 1px; border-style: solid; border-color: rgba(68, 69, 69, 181);\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(460, 241, 124, 24));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: black"));
        signupB = new QPushButton(centralwidget);
        signupB->setObjectName(QString::fromUtf8("signupB"));
        signupB->setGeometry(QRect(570, 460, 140, 30));
        signupB->setCursor(QCursor(Qt::PointingHandCursor));
        signupB->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color: white;\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 15px;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(460, 350, 124, 24));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: black"));
        error = new QLabel(centralwidget);
        error->setObjectName(QString::fromUtf8("error"));
        error->setGeometry(QRect(830, 100, 441, 101));
        error->setFont(font1);
        error->setStyleSheet(QString::fromUtf8("color: red"));
        error->setWordWrap(true);
        signinB = new QPushButton(centralwidget);
        signinB->setObjectName(QString::fromUtf8("signinB"));
        signinB->setGeometry(QRect(630, 528, 80, 24));
        QFont font3;
        font3.setUnderline(true);
        signinB->setFont(font3);
        signinB->setCursor(QCursor(Qt::PointingHandCursor));
        signinB->setLayoutDirection(Qt::LeftToRight);
        signinB->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0); color: black"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(694, 520, 60, 41));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(533, 530, 117, 21));
        label_6->setCursor(QCursor(Qt::IBeamCursor));
        label_6->setStyleSheet(QString::fromUtf8("color: black"));
        signin->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(signin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        signin->setStatusBar(statusbar);
        menubar = new QMenuBar(signin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1300, 21));
        signin->setMenuBar(menubar);

        retranslateUi(signin);

        QMetaObject::connectSlotsByName(signin);
    } // setupUi

    void retranslateUi(QMainWindow *signin)
    {
        signin->setWindowTitle(QCoreApplication::translate("signin", "signin", nullptr));
        label->setText(QCoreApplication::translate("signin", "Echo", nullptr));
        homeB->setText(QCoreApplication::translate("signin", "Home", nullptr));
        featuresB->setText(QCoreApplication::translate("signin", "Features", nullptr));
        aboutB->setText(QCoreApplication::translate("signin", "About", nullptr));
        logoImage->setText(QString());
        label_2->setText(QCoreApplication::translate("signin", "Sing in", nullptr));
        label_3->setText(QCoreApplication::translate("signin", "Username", nullptr));
        signupB->setText(QCoreApplication::translate("signin", "Sign in", nullptr));
        label_4->setText(QCoreApplication::translate("signin", "Password", nullptr));
        error->setText(QString());
        signinB->setText(QCoreApplication::translate("signin", "Sign up", nullptr));
        label_7->setText(QString());
        label_6->setText(QCoreApplication::translate("signin", "Create an account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signin: public Ui_signin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
