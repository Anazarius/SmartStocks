/********************************************************************************
** Form generated from reading UI file 'account.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNT_H
#define UI_ACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_account
{
public:
    QLabel *Background;
    QLabel *Login;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *menu;
    QPushButton *ProfileBtn;
    QPushButton *SharesListBtn;
    QPushButton *BalanceBtn;
    QPushButton *TestsBtn;
    QFrame *line;

    void setupUi(QWidget *account)
    {
        if (account->objectName().isEmpty())
            account->setObjectName("account");
        account->resize(800, 600);
        Background = new QLabel(account);
        Background->setObjectName("Background");
        Background->setGeometry(QRect(0, 0, 800, 600));
        Background->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(13, 12, 12, 255), stop:1 rgba(74, 72, 72, 255));"));
        Login = new QLabel(account);
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
        horizontalLayoutWidget = new QWidget(account);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 671, 41));
        menu = new QHBoxLayout(horizontalLayoutWidget);
        menu->setSpacing(8);
        menu->setObjectName("menu");
        menu->setContentsMargins(5, 5, 5, 5);
        ProfileBtn = new QPushButton(horizontalLayoutWidget);
        ProfileBtn->setObjectName("ProfileBtn");
        ProfileBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));

        menu->addWidget(ProfileBtn);

        SharesListBtn = new QPushButton(horizontalLayoutWidget);
        SharesListBtn->setObjectName("SharesListBtn");
        SharesListBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));

        menu->addWidget(SharesListBtn);

        BalanceBtn = new QPushButton(horizontalLayoutWidget);
        BalanceBtn->setObjectName("BalanceBtn");
        BalanceBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));

        menu->addWidget(BalanceBtn);

        TestsBtn = new QPushButton(horizontalLayoutWidget);
        TestsBtn->setObjectName("TestsBtn");
        TestsBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));

        menu->addWidget(TestsBtn);

        line = new QFrame(account);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 50, 800, 20));
        line->setLineWidth(1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(account);

        QMetaObject::connectSlotsByName(account);
    } // setupUi

    void retranslateUi(QWidget *account)
    {
        account->setWindowTitle(QCoreApplication::translate("account", "Form", nullptr));
        Background->setText(QString());
        Login->setText(QCoreApplication::translate("account", "Login", nullptr));
        ProfileBtn->setText(QCoreApplication::translate("account", "Profile", nullptr));
        SharesListBtn->setText(QCoreApplication::translate("account", "Shares List", nullptr));
        BalanceBtn->setText(QCoreApplication::translate("account", "Balance", nullptr));
        TestsBtn->setText(QCoreApplication::translate("account", "Tests", nullptr));
    } // retranslateUi

};

namespace Ui {
    class account: public Ui_account {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNT_H
