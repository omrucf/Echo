/********************************************************************************
** Form generated from reading UI file 'expenses.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPENSES_H
#define UI_EXPENSES_H

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

class Ui_expenses
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
    QLineEdit *expensesE;
    QPushButton *addB;
    QLabel *error;
    QLabel *label_2;
    QLabel *total;
    QListWidget *expensess;
    QComboBox *sourceE;
    QLineEdit *Other;
    QListWidget *expensesvec;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *expenses)
    {
        if (expenses->objectName().isEmpty())
            expenses->setObjectName(QString::fromUtf8("expenses"));
        expenses->resize(1300, 700);
        centralwidget = new QWidget(expenses);
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
        label_3->setGeometry(QRect(60, 181, 151, 24));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: black"));
        expensesE = new QLineEdit(centralwidget);
        expensesE->setObjectName(QString::fromUtf8("expensesE"));
        expensesE->setGeometry(QRect(60, 205, 356, 40));
        expensesE->setFont(font1);
        expensesE->setStyleSheet(QString::fromUtf8("background-color: white; color: black; border-width: 1px; border-style: solid; border-color: rgba(68, 69, 69, 181);\n"
""));
        addB = new QPushButton(centralwidget);
        addB->setObjectName(QString::fromUtf8("addB"));
        addB->setGeometry(QRect(64, 400, 140, 30));
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
        label_2->setGeometry(QRect(886, 90, 131, 61));
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
        expensess = new QListWidget(centralwidget);
        expensess->setObjectName(QString::fromUtf8("expensess"));
        expensess->setGeometry(QRect(880, 180, 401, 401));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Chalkboard")});
        font3.setPointSize(15);
        expensess->setFont(font3);
        expensess->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: red"));
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
        sourceE->addItem(QString());
        sourceE->setObjectName(QString::fromUtf8("sourceE"));
        sourceE->setGeometry(QRect(60, 310, 356, 40));
        sourceE->setStyleSheet(QString::fromUtf8("background-color: white; color: black; border-width: 1px; border-style: solid; border-color: rgba(68, 69, 69, 181);\n"
""));
        Other = new QLineEdit(centralwidget);
        Other->setObjectName(QString::fromUtf8("Other"));
        Other->setGeometry(QRect(60, 310, 356, 40));
        Other->setFont(font1);
        Other->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0)\n"
""));
        expensesvec = new QListWidget(centralwidget);
        expensesvec->setObjectName(QString::fromUtf8("expensesvec"));
        expensesvec->setGeometry(QRect(-555, -5555, 256, 192));
        expenses->setCentralWidget(centralwidget);
        Other->raise();
        navbar->raise();
        whitebg->raise();
        label->raise();
        horizontalLayoutWidget->raise();
        logoImage->raise();
        label_4->raise();
        label_3->raise();
        expensesE->raise();
        addB->raise();
        error->raise();
        label_2->raise();
        total->raise();
        expensess->raise();
        sourceE->raise();
        expensesvec->raise();
        statusbar = new QStatusBar(expenses);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        expenses->setStatusBar(statusbar);
        menubar = new QMenuBar(expenses);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1300, 21));
        expenses->setMenuBar(menubar);

        retranslateUi(expenses);

        QMetaObject::connectSlotsByName(expenses);
    } // setupUi

    void retranslateUi(QMainWindow *expenses)
    {
        expenses->setWindowTitle(QCoreApplication::translate("expenses", "expenses", nullptr));
        label->setText(QCoreApplication::translate("expenses", "Echo", nullptr));
        homeB->setText(QCoreApplication::translate("expenses", "Home", nullptr));
        featuresB->setText(QCoreApplication::translate("expenses", "Features", nullptr));
        aboutB->setText(QCoreApplication::translate("expenses", "About", nullptr));
        logoImage->setText(QString());
        label_4->setText(QCoreApplication::translate("expenses", "Source", nullptr));
        label_3->setText(QCoreApplication::translate("expenses", "Expenses (EGP)", nullptr));
        addB->setText(QCoreApplication::translate("expenses", "Add", nullptr));
        error->setText(QString());
        label_2->setText(QCoreApplication::translate("expenses", "Total: -", nullptr));
        total->setText(QCoreApplication::translate("expenses", "0", nullptr));
        sourceE->setItemText(0, QCoreApplication::translate("expenses", "Select an item", nullptr));
        sourceE->setItemText(1, QCoreApplication::translate("expenses", "Housing", nullptr));
        sourceE->setItemText(2, QCoreApplication::translate("expenses", "Utilities", nullptr));
        sourceE->setItemText(3, QCoreApplication::translate("expenses", "Groceries", nullptr));
        sourceE->setItemText(4, QCoreApplication::translate("expenses", "Transportation", nullptr));
        sourceE->setItemText(5, QCoreApplication::translate("expenses", "Healthcare", nullptr));
        sourceE->setItemText(6, QCoreApplication::translate("expenses", "Education", nullptr));
        sourceE->setItemText(7, QCoreApplication::translate("expenses", "Dining", nullptr));
        sourceE->setItemText(8, QCoreApplication::translate("expenses", "Clothing", nullptr));
        sourceE->setItemText(9, QCoreApplication::translate("expenses", "Personal Care", nullptr));
        sourceE->setItemText(10, QCoreApplication::translate("expenses", "Childrne", nullptr));
        sourceE->setItemText(11, QCoreApplication::translate("expenses", "Pets", nullptr));
        sourceE->setItemText(12, QCoreApplication::translate("expenses", "Savings & Investments", nullptr));
        sourceE->setItemText(13, QCoreApplication::translate("expenses", "Gifts & Donations", nullptr));
        sourceE->setItemText(14, QCoreApplication::translate("expenses", "Other", nullptr));

    } // retranslateUi

};

namespace Ui {
    class expenses: public Ui_expenses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPENSES_H
