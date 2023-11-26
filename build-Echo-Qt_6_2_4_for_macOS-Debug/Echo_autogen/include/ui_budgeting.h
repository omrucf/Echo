/********************************************************************************
** Form generated from reading UI file 'budgeting.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUDGETING_H
#define UI_BUDGETING_H

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

class Ui_budgeting
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
    QLabel *label_3;
    QListWidget *budgetings;
    QComboBox *categories;
    QPushButton *addB;
    QLineEdit *budgetE;
    QLabel *label_4;
    QLabel *error;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *budgeting)
    {
        if (budgeting->objectName().isEmpty())
            budgeting->setObjectName(QString::fromUtf8("budgeting"));
        budgeting->resize(1300, 700);
        centralwidget = new QWidget(budgeting);
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
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 181, 151, 24));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: black"));
        budgetings = new QListWidget(centralwidget);
        budgetings->setObjectName(QString::fromUtf8("budgetings"));
        budgetings->setGeometry(QRect(880, 180, 401, 401));
        budgetings->setStyleSheet(QString::fromUtf8("background-color: rgba(115, 117, 117, 147);\n"
"color: wite"));
        categories = new QComboBox(centralwidget);
        categories->addItem(QString());
        categories->addItem(QString());
        categories->addItem(QString());
        categories->addItem(QString());
        categories->addItem(QString());
        categories->addItem(QString());
        categories->addItem(QString());
        categories->addItem(QString());
        categories->addItem(QString());
        categories->addItem(QString());
        categories->addItem(QString());
        categories->addItem(QString());
        categories->addItem(QString());
        categories->addItem(QString());
        categories->addItem(QString());
        categories->setObjectName(QString::fromUtf8("categories"));
        categories->setGeometry(QRect(60, 310, 356, 40));
        categories->setStyleSheet(QString::fromUtf8("background-color: white; color: black; border-width: 1px; border-style: solid; border-color: rgba(68, 69, 69, 181);\n"
""));
        addB = new QPushButton(centralwidget);
        addB->setObjectName(QString::fromUtf8("addB"));
        addB->setGeometry(QRect(64, 390, 140, 30));
        addB->setCursor(QCursor(Qt::PointingHandCursor));
        addB->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color: white;\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 15px;"));
        budgetE = new QLineEdit(centralwidget);
        budgetE->setObjectName(QString::fromUtf8("budgetE"));
        budgetE->setGeometry(QRect(60, 205, 356, 40));
        budgetE->setFont(font1);
        budgetE->setStyleSheet(QString::fromUtf8("background-color: white; color: black; border-width: 1px; border-style: solid; border-color: rgba(68, 69, 69, 181);\n"
""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 287, 124, 24));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: black"));
        error = new QLabel(centralwidget);
        error->setObjectName(QString::fromUtf8("error"));
        error->setGeometry(QRect(60, 530, 491, 81));
        error->setStyleSheet(QString::fromUtf8("color: red"));
        error->setWordWrap(true);
        budgeting->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(budgeting);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        budgeting->setStatusBar(statusbar);
        menubar = new QMenuBar(budgeting);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1300, 21));
        budgeting->setMenuBar(menubar);

        retranslateUi(budgeting);

        QMetaObject::connectSlotsByName(budgeting);
    } // setupUi

    void retranslateUi(QMainWindow *budgeting)
    {
        budgeting->setWindowTitle(QCoreApplication::translate("budgeting", "budgeting", nullptr));
        label->setText(QCoreApplication::translate("budgeting", "Echo", nullptr));
        homeB->setText(QCoreApplication::translate("budgeting", "Home", nullptr));
        featuresB->setText(QCoreApplication::translate("budgeting", "Features", nullptr));
        aboutB->setText(QCoreApplication::translate("budgeting", "About", nullptr));
        logoImage->setText(QString());
        label_3->setText(QCoreApplication::translate("budgeting", "Amount (EGP)", nullptr));
        categories->setItemText(0, QCoreApplication::translate("budgeting", "Select an item", nullptr));
        categories->setItemText(1, QCoreApplication::translate("budgeting", "Housing", nullptr));
        categories->setItemText(2, QCoreApplication::translate("budgeting", "Utilities", nullptr));
        categories->setItemText(3, QCoreApplication::translate("budgeting", "Groceries", nullptr));
        categories->setItemText(4, QCoreApplication::translate("budgeting", "Transportation", nullptr));
        categories->setItemText(5, QCoreApplication::translate("budgeting", "Healthcare", nullptr));
        categories->setItemText(6, QCoreApplication::translate("budgeting", "Education", nullptr));
        categories->setItemText(7, QCoreApplication::translate("budgeting", "Dining", nullptr));
        categories->setItemText(8, QCoreApplication::translate("budgeting", "Clothing", nullptr));
        categories->setItemText(9, QCoreApplication::translate("budgeting", "Personal Care", nullptr));
        categories->setItemText(10, QCoreApplication::translate("budgeting", "Childrne", nullptr));
        categories->setItemText(11, QCoreApplication::translate("budgeting", "Pets", nullptr));
        categories->setItemText(12, QCoreApplication::translate("budgeting", "Savings & Investments", nullptr));
        categories->setItemText(13, QCoreApplication::translate("budgeting", "Gifts & Donations", nullptr));
        categories->setItemText(14, QCoreApplication::translate("budgeting", "Other", nullptr));

        addB->setText(QCoreApplication::translate("budgeting", "Add", nullptr));
        label_4->setText(QCoreApplication::translate("budgeting", "Category", nullptr));
        error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class budgeting: public Ui_budgeting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUDGETING_H
