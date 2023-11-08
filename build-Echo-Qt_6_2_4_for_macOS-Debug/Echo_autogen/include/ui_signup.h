/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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

class Ui_signup
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
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *userEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *passEdit;
    QLineEdit *confirmEdit;
    QCheckBox *checkBox;
    QPushButton *signupB;
    QLabel *label_6;
    QPushButton *signinB;
    QLabel *label_7;
    QLabel *error;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QString::fromUtf8("signup"));
        signup->resize(1300, 700);
        centralwidget = new QWidget(signup);
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
        whitebg->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
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

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(420, 118, 144, 40));
        QFont font2;
        font2.setPointSize(32);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: black\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(430, 183, 124, 24));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: black"));
        userEdit = new QLineEdit(centralwidget);
        userEdit->setObjectName(QString::fromUtf8("userEdit"));
        userEdit->setGeometry(QRect(430, 207, 356, 40));
        userEdit->setFont(font1);
        userEdit->setStyleSheet(QString::fromUtf8("background-color: white; color: black; border-width: 1px; border-style: solid; border-color: rgba(68, 69, 69, 181);\n"
""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(430, 282, 124, 24));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: black"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(430, 370, 171, 24));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: black"));
        passEdit = new QLineEdit(centralwidget);
        passEdit->setObjectName(QString::fromUtf8("passEdit"));
        passEdit->setGeometry(QRect(430, 305, 356, 40));
        passEdit->setFont(font1);
        passEdit->setStyleSheet(QString::fromUtf8("background-color: white; color: black; border-width: 1px; border-style: solid; border-color: rgba(68, 69, 69, 181);\n"
""));
        confirmEdit = new QLineEdit(centralwidget);
        confirmEdit->setObjectName(QString::fromUtf8("confirmEdit"));
        confirmEdit->setGeometry(QRect(430, 393, 356, 40));
        confirmEdit->setFont(font1);
        confirmEdit->setStyleSheet(QString::fromUtf8("background-color: white; color: black; border-width: 1px; border-style: solid; border-color: rgba(68, 69, 69, 181);\n"
""));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(385, 460, 531, 29));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Inter")});
        font3.setPointSize(20);
        checkBox->setFont(font3);
        checkBox->setCursor(QCursor(Qt::PointingHandCursor));
        checkBox->setStyleSheet(QString::fromUtf8("color: black"));
        signupB = new QPushButton(centralwidget);
        signupB->setObjectName(QString::fromUtf8("signupB"));
        signupB->setGeometry(QRect(511, 510, 140, 30));
        signupB->setCursor(QCursor(Qt::PointingHandCursor));
        signupB->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color: white;\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 15px;"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(500, 560, 117, 21));
        label_6->setCursor(QCursor(Qt::IBeamCursor));
        label_6->setStyleSheet(QString::fromUtf8("color: black"));
        signinB = new QPushButton(centralwidget);
        signinB->setObjectName(QString::fromUtf8("signinB"));
        signinB->setGeometry(QRect(600, 558, 80, 24));
        QFont font4;
        font4.setUnderline(true);
        signinB->setFont(font4);
        signinB->setCursor(QCursor(Qt::PointingHandCursor));
        signinB->setLayoutDirection(Qt::LeftToRight);
        signinB->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0); color: black"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(664, 550, 60, 41));
        error = new QLabel(centralwidget);
        error->setObjectName(QString::fromUtf8("error"));
        error->setGeometry(QRect(820, 100, 441, 101));
        error->setFont(font3);
        error->setStyleSheet(QString::fromUtf8("color: red"));
        error->setWordWrap(true);
        signup->setCentralWidget(centralwidget);
        whitebg->raise();
        signinB->raise();
        navbar->raise();
        label->raise();
        horizontalLayoutWidget->raise();
        label_2->raise();
        label_3->raise();
        userEdit->raise();
        label_4->raise();
        label_5->raise();
        passEdit->raise();
        confirmEdit->raise();
        checkBox->raise();
        signupB->raise();
        label_6->raise();
        label_7->raise();
        error->raise();
        statusbar = new QStatusBar(signup);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        signup->setStatusBar(statusbar);
        menubar = new QMenuBar(signup);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1300, 21));
        signup->setMenuBar(menubar);

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QMainWindow *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "signup", nullptr));
        label->setText(QCoreApplication::translate("signup", "Echo", nullptr));
        homeB->setText(QCoreApplication::translate("signup", "Home", nullptr));
        featuresB->setText(QCoreApplication::translate("signup", "Features", nullptr));
        aboutB->setText(QCoreApplication::translate("signup", "About", nullptr));
        label_2->setText(QCoreApplication::translate("signup", "Sign Up", nullptr));
        label_3->setText(QCoreApplication::translate("signup", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("signup", "Password", nullptr));
        label_5->setText(QCoreApplication::translate("signup", "Confirm Password", nullptr));
        checkBox->setText(QCoreApplication::translate("signup", "I agree to all the statements in the terms of services ", nullptr));
        signupB->setText(QCoreApplication::translate("signup", "Create account", nullptr));
        label_6->setText(QCoreApplication::translate("signup", "Already a member?", nullptr));
        signinB->setText(QCoreApplication::translate("signup", "Sign in", nullptr));
        label_7->setText(QString());
        error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
