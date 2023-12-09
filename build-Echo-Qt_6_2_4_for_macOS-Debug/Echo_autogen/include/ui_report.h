/********************************************************************************
** Form generated from reading UI file 'report.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_H
#define UI_REPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_report
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
    QListWidget *incomeLst;
    QListWidget *expensesLst;
    QLabel *label_2;
    QLabel *totalInc;
    QLabel *totalExp;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *total;
    QLabel *label_5;
    QLabel *label_6;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *report)
    {
        if (report->objectName().isEmpty())
            report->setObjectName(QString::fromUtf8("report"));
        report->resize(1300, 700);
        centralwidget = new QWidget(report);
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
        whitebg->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 101, 41));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
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

        incomeLst = new QListWidget(centralwidget);
        incomeLst->setObjectName(QString::fromUtf8("incomeLst"));
        incomeLst->setGeometry(QRect(130, 290, 441, 341));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Chalkboard")});
        font2.setPointSize(15);
        incomeLst->setFont(font2);
        incomeLst->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: green"));
        expensesLst = new QListWidget(centralwidget);
        expensesLst->setObjectName(QString::fromUtf8("expensesLst"));
        expensesLst->setGeometry(QRect(730, 290, 441, 341));
        expensesLst->setFont(font2);
        expensesLst->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: red"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 240, 131, 61));
        QFont font3;
        font3.setPointSize(36);
        font3.setBold(true);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: black"));
        totalInc = new QLabel(centralwidget);
        totalInc->setObjectName(QString::fromUtf8("totalInc"));
        totalInc->setGeometry(QRect(250, 240, 201, 61));
        totalInc->setFont(font3);
        totalInc->setStyleSheet(QString::fromUtf8("color: black"));
        totalExp = new QLabel(centralwidget);
        totalExp->setObjectName(QString::fromUtf8("totalExp"));
        totalExp->setGeometry(QRect(850, 240, 201, 61));
        totalExp->setFont(font3);
        totalExp->setStyleSheet(QString::fromUtf8("color: black"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(730, 240, 131, 61));
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color: black"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(560, 110, 151, 61));
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color: black"));
        total = new QLabel(centralwidget);
        total->setObjectName(QString::fromUtf8("total"));
        total->setGeometry(QRect(710, 110, 201, 61));
        total->setFont(font3);
        total->setStyleSheet(QString::fromUtf8("color: black"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 200, 141, 61));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color: black"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(620, 200, 191, 61));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("color: black"));
        report->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(report);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        report->setStatusBar(statusbar);
        menubar = new QMenuBar(report);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1300, 21));
        report->setMenuBar(menubar);

        retranslateUi(report);

        QMetaObject::connectSlotsByName(report);
    } // setupUi

    void retranslateUi(QMainWindow *report)
    {
        report->setWindowTitle(QCoreApplication::translate("report", "report", nullptr));
        label->setText(QCoreApplication::translate("report", "Echo", nullptr));
        homeB->setText(QCoreApplication::translate("report", "Home", nullptr));
        featuresB->setText(QCoreApplication::translate("report", "Features", nullptr));
        aboutB->setText(QCoreApplication::translate("report", "About", nullptr));
        label_2->setText(QCoreApplication::translate("report", "Total: ", nullptr));
        totalInc->setText(QCoreApplication::translate("report", "0", nullptr));
        totalExp->setText(QCoreApplication::translate("report", "0", nullptr));
        label_3->setText(QCoreApplication::translate("report", "Total: -", nullptr));
        label_4->setText(QCoreApplication::translate("report", "Balance: ", nullptr));
        total->setText(QCoreApplication::translate("report", "0", nullptr));
        label_5->setText(QCoreApplication::translate("report", "Income:", nullptr));
        label_6->setText(QCoreApplication::translate("report", "Expenses:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class report: public Ui_report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_H
