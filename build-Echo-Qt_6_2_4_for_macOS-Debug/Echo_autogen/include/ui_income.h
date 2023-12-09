/********************************************************************************
** Form generated from reading UI file 'income.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCOME_H
#define UI_INCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_income
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
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *incomeE;
    QPushButton *addB;
    QLabel *error;
    QLabel *label_2;
    QLabel *total;
    QListWidget *incomes;
    QComboBox *sourceE;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *income)
    {
        if (income->objectName().isEmpty())
            income->setObjectName(QString::fromUtf8("income"));
        income->resize(1300, 700);
        centralwidget = new QWidget(income);
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
        aboutB->setEnabled(true);
        aboutB->setFont(font1);
        aboutB->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0)"));

        NavBarOpt->addWidget(aboutB);

        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(843, 168, 397, 377));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 287, 124, 24));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: black"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 181, 124, 24));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: black"));
        incomeE = new QLineEdit(centralwidget);
        incomeE->setObjectName(QString::fromUtf8("incomeE"));
        incomeE->setGeometry(QRect(60, 205, 356, 40));
        incomeE->setFont(font1);
        incomeE->setStyleSheet(QString::fromUtf8("background-color: white; color: black; border-width: 1px; border-style: solid; border-color: rgba(68, 69, 69, 181);\n"
""));
        addB = new QPushButton(centralwidget);
        addB->setObjectName(QString::fromUtf8("addB"));
        addB->setGeometry(QRect(60, 400, 140, 30));
        addB->setCursor(QCursor(Qt::PointingHandCursor));
        addB->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color: white;\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 15px;"));
        error = new QLabel(centralwidget);
        error->setObjectName(QString::fromUtf8("error"));
        error->setGeometry(QRect(40, 560, 491, 81));
        error->setStyleSheet(QString::fromUtf8("color: red"));
        error->setWordWrap(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(890, 90, 131, 61));
        QFont font2;
        font2.setPointSize(36);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: black"));
        total = new QLabel(centralwidget);
        total->setObjectName(QString::fromUtf8("total"));
        total->setGeometry(QRect(1010, 90, 201, 61));
        total->setFont(font2);
        total->setStyleSheet(QString::fromUtf8("color: black"));
        incomes = new QListWidget(centralwidget);
        incomes->setObjectName(QString::fromUtf8("incomes"));
        incomes->setGeometry(QRect(880, 180, 401, 401));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Chalkboard")});
        font3.setPointSize(15);
        incomes->setFont(font3);
        incomes->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: green"));
        sourceE = new QComboBox(centralwidget);
        sourceE->addItem(QString());
        sourceE->addItem(QString());
        sourceE->addItem(QString());
        sourceE->addItem(QString());
        sourceE->addItem(QString());
        sourceE->addItem(QString());
        sourceE->addItem(QString());
        sourceE->addItem(QString());
        sourceE->addItem(QString());
        sourceE->addItem(QString());
        sourceE->addItem(QString());
        sourceE->addItem(QString());
        sourceE->addItem(QString());
        sourceE->addItem(QString());
        sourceE->setObjectName(QString::fromUtf8("sourceE"));
        sourceE->setGeometry(QRect(60, 310, 356, 40));
        sourceE->setStyleSheet(QString::fromUtf8("background-color: white; color: black; border-width: 1px; border-style: solid; border-color: rgba(68, 69, 69, 181);\n"
""));
        income->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(income);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        income->setStatusBar(statusbar);
        menubar = new QMenuBar(income);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1300, 21));
        income->setMenuBar(menubar);

        retranslateUi(income);

        QMetaObject::connectSlotsByName(income);
    } // setupUi

    void retranslateUi(QMainWindow *income)
    {
        income->setWindowTitle(QCoreApplication::translate("income", "income", nullptr));
        label->setText(QCoreApplication::translate("income", "Echo", nullptr));
        homeB->setText(QCoreApplication::translate("income", "Home", nullptr));
        featuresB->setText(QCoreApplication::translate("income", "Features", nullptr));
        aboutB->setText(QCoreApplication::translate("income", "About", nullptr));
        logoImage->setText(QString());
        label_4->setText(QCoreApplication::translate("income", "Source", nullptr));
        label_3->setText(QCoreApplication::translate("income", "Income (EGP)", nullptr));
        addB->setText(QCoreApplication::translate("income", "Add", nullptr));
        error->setText(QString());
        label_2->setText(QCoreApplication::translate("income", "Total: ", nullptr));
        total->setText(QCoreApplication::translate("income", "0", nullptr));
        sourceE->setItemText(0, QCoreApplication::translate("income", "Select an item", nullptr));
        sourceE->setItemText(1, QCoreApplication::translate("income", "Salary", nullptr));
        sourceE->setItemText(2, QCoreApplication::translate("income", "Hourly Wages", nullptr));
        sourceE->setItemText(3, QCoreApplication::translate("income", "Bonuses", nullptr));
        sourceE->setItemText(4, QCoreApplication::translate("income", "Freelance Income", nullptr));
        sourceE->setItemText(5, QCoreApplication::translate("income", "Business Revenue", nullptr));
        sourceE->setItemText(6, QCoreApplication::translate("income", "Investments Income", nullptr));
        sourceE->setItemText(7, QCoreApplication::translate("income", "Retal Income", nullptr));
        sourceE->setItemText(8, QCoreApplication::translate("income", "Pension", nullptr));
        sourceE->setItemText(9, QCoreApplication::translate("income", "Social Security", nullptr));
        sourceE->setItemText(10, QCoreApplication::translate("income", "Child Support or Alimony", nullptr));
        sourceE->setItemText(11, QCoreApplication::translate("income", "Scholarships/Grants", nullptr));
        sourceE->setItemText(12, QCoreApplication::translate("income", "Gifts", nullptr));
        sourceE->setItemText(13, QCoreApplication::translate("income", "Other", nullptr));

    } // retranslateUi

};

namespace Ui {
    class income: public Ui_income {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCOME_H
