/********************************************************************************
** Form generated from reading UI file 'balance.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BALANCE_H
#define UI_BALANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_balance
{
public:
    QLabel *Background;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *header;
    QPushButton *ProfileBtn;
    QPushButton *SharesListBtn;
    QPushButton *PortfolioBtn;
    QPushButton *TestsBtn;
    QFrame *line;
    QLabel *Login;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *Menu;
    QLabel *TopUpYourBalance;
    QHBoxLayout *TotalMenu;
    QLabel *Total;
    QLineEdit *AmountInput;
    QPushButton *TopUpBtn;

    void setupUi(QWidget *balance)
    {
        if (balance->objectName().isEmpty())
            balance->setObjectName("balance");
        balance->resize(800, 600);
        Background = new QLabel(balance);
        Background->setObjectName("Background");
        Background->setGeometry(QRect(0, 0, 800, 600));
        Background->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(13, 12, 12, 255), stop:1 rgba(74, 72, 72, 255));"));
        horizontalLayoutWidget = new QWidget(balance);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 671, 41));
        header = new QHBoxLayout(horizontalLayoutWidget);
        header->setSpacing(8);
        header->setObjectName("header");
        header->setContentsMargins(5, 5, 5, 5);
        ProfileBtn = new QPushButton(horizontalLayoutWidget);
        ProfileBtn->setObjectName("ProfileBtn");
        ProfileBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));

        header->addWidget(ProfileBtn);

        SharesListBtn = new QPushButton(horizontalLayoutWidget);
        SharesListBtn->setObjectName("SharesListBtn");
        SharesListBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));

        header->addWidget(SharesListBtn);

        PortfolioBtn = new QPushButton(horizontalLayoutWidget);
        PortfolioBtn->setObjectName("PortfolioBtn");
        PortfolioBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));

        header->addWidget(PortfolioBtn);

        TestsBtn = new QPushButton(horizontalLayoutWidget);
        TestsBtn->setObjectName("TestsBtn");
        TestsBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));

        header->addWidget(TestsBtn);

        line = new QFrame(balance);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 50, 800, 20));
        line->setLineWidth(1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        Login = new QLabel(balance);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(690, 10, 100, 40));
        QFont font;
        Login->setFont(font);
        Login->setLayoutDirection(Qt::LeftToRight);
        Login->setAutoFillBackground(false);
        Login->setStyleSheet(QString::fromUtf8("font-size: 22px;\n"
"color: black;"));
        Login->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Login->setWordWrap(true);
        verticalLayoutWidget = new QWidget(balance);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(200, 200, 418, 211));
        Menu = new QVBoxLayout(verticalLayoutWidget);
        Menu->setObjectName("Menu");
        Menu->setContentsMargins(0, 0, 0, 0);
        TopUpYourBalance = new QLabel(verticalLayoutWidget);
        TopUpYourBalance->setObjectName("TopUpYourBalance");
        TopUpYourBalance->setStyleSheet(QString::fromUtf8("color : white;\n"
"font-size:26px;\n"
"font-weight: bold;\n"
""));
        TopUpYourBalance->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        TopUpYourBalance->setMargin(20);

        Menu->addWidget(TopUpYourBalance);

        TotalMenu = new QHBoxLayout();
        TotalMenu->setObjectName("TotalMenu");
        Total = new QLabel(verticalLayoutWidget);
        Total->setObjectName("Total");
        Total->setStyleSheet(QString::fromUtf8("color : white;\n"
"font-size:26px;"));

        TotalMenu->addWidget(Total);

        AmountInput = new QLineEdit(verticalLayoutWidget);
        AmountInput->setObjectName("AmountInput");
        AmountInput->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 124, 16);\n"
"color: black;\n"
"font-size:20px;\n"
"border: none;\n"
"border-radius:10px;"));

        TotalMenu->addWidget(AmountInput);


        Menu->addLayout(TotalMenu);

        TopUpBtn = new QPushButton(verticalLayoutWidget);
        TopUpBtn->setObjectName("TopUpBtn");
        TopUpBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));

        Menu->addWidget(TopUpBtn);


        retranslateUi(balance);

        QMetaObject::connectSlotsByName(balance);
    } // setupUi

    void retranslateUi(QWidget *balance)
    {
        balance->setWindowTitle(QCoreApplication::translate("balance", "Form", nullptr));
        Background->setText(QString());
        ProfileBtn->setText(QCoreApplication::translate("balance", "Profile", nullptr));
        SharesListBtn->setText(QCoreApplication::translate("balance", "Shares List", nullptr));
        PortfolioBtn->setText(QCoreApplication::translate("balance", "Portfolio", nullptr));
        TestsBtn->setText(QCoreApplication::translate("balance", "Tests", nullptr));
        Login->setText(QCoreApplication::translate("balance", "Login", nullptr));
        TopUpYourBalance->setText(QCoreApplication::translate("balance", "Top up your balance", nullptr));
        Total->setText(QCoreApplication::translate("balance", "Total:", nullptr));
        TopUpBtn->setText(QCoreApplication::translate("balance", "Top up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class balance: public Ui_balance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BALANCE_H
