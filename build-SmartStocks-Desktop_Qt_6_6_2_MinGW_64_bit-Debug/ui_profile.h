/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profile
{
public:
    QLabel *Background;
    QLabel *BackgroundMenu;
    QLabel *UserProfile;
    QLineEdit *LoginInput;
    QLineEdit *PasswordInput;
    QLineEdit *PasswordConfirmInput;
    QPushButton *ConfirmBtn;
    QLabel *Login;
    QLabel *Password;
    QLabel *PasswordConfirm;
    QFrame *line;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *header;
    QPushButton *BalanceBtn;
    QPushButton *SharesListBtn;
    QPushButton *PortfolioBtn;
    QPushButton *TestsBtn;

    void setupUi(QWidget *profile)
    {
        if (profile->objectName().isEmpty())
            profile->setObjectName("profile");
        profile->resize(800, 600);
        Background = new QLabel(profile);
        Background->setObjectName("Background");
        Background->setGeometry(QRect(0, 0, 800, 600));
        Background->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(13, 12, 12, 255), stop:1 rgba(74, 72, 72, 255));"));
        BackgroundMenu = new QLabel(profile);
        BackgroundMenu->setObjectName("BackgroundMenu");
        BackgroundMenu->setGeometry(QRect(200, 100, 400, 400));
        BackgroundMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(8, 34, 85);\n"
"border: none;\n"
"border-radius:10px;"));
        UserProfile = new QLabel(profile);
        UserProfile->setObjectName("UserProfile");
        UserProfile->setGeometry(QRect(200, 100, 400, 61));
        UserProfile->setStyleSheet(QString::fromUtf8("color : black;\n"
"font-size:30px;\n"
"font-weight: bold;\n"
""));
        UserProfile->setAlignment(Qt::AlignCenter);
        LoginInput = new QLineEdit(profile);
        LoginInput->setObjectName("LoginInput");
        LoginInput->setGeometry(QRect(325, 200, 250, 25));
        LoginInput->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));
        PasswordInput = new QLineEdit(profile);
        PasswordInput->setObjectName("PasswordInput");
        PasswordInput->setGeometry(QRect(325, 270, 250, 25));
        PasswordInput->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));
        PasswordConfirmInput = new QLineEdit(profile);
        PasswordConfirmInput->setObjectName("PasswordConfirmInput");
        PasswordConfirmInput->setGeometry(QRect(325, 340, 250, 25));
        PasswordConfirmInput->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));
        ConfirmBtn = new QPushButton(profile);
        ConfirmBtn->setObjectName("ConfirmBtn");
        ConfirmBtn->setGeometry(QRect(300, 440, 200, 40));
        ConfirmBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));
        Login = new QLabel(profile);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(200, 190, 130, 40));
        Login->setStyleSheet(QString::fromUtf8("color : black;\n"
"font-size:26px;\n"
"font-weight: bold;\n"
""));
        Password = new QLabel(profile);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(200, 260, 130, 40));
        Password->setStyleSheet(QString::fromUtf8("color : black;\n"
"font-size:26px;\n"
"font-weight: bold;\n"
""));
        PasswordConfirm = new QLabel(profile);
        PasswordConfirm->setObjectName("PasswordConfirm");
        PasswordConfirm->setGeometry(QRect(200, 330, 130, 40));
        PasswordConfirm->setStyleSheet(QString::fromUtf8("color : black;\n"
"font-size:26px;\n"
"font-weight: bold;\n"
""));
        line = new QFrame(profile);
        line->setObjectName("line");
        line->setGeometry(QRect(200, 160, 400, 5));
        line->setLineWidth(2);
        line->setMidLineWidth(1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(profile);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(70, 10, 671, 41));
        header = new QHBoxLayout(horizontalLayoutWidget);
        header->setSpacing(8);
        header->setObjectName("header");
        header->setContentsMargins(5, 5, 5, 5);
        BalanceBtn = new QPushButton(horizontalLayoutWidget);
        BalanceBtn->setObjectName("BalanceBtn");
        BalanceBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));

        header->addWidget(BalanceBtn);

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


        retranslateUi(profile);

        QMetaObject::connectSlotsByName(profile);
    } // setupUi

    void retranslateUi(QWidget *profile)
    {
        profile->setWindowTitle(QCoreApplication::translate("profile", "Form", nullptr));
        Background->setText(QString());
        BackgroundMenu->setText(QString());
        UserProfile->setText(QCoreApplication::translate("profile", "User Profile", nullptr));
        ConfirmBtn->setText(QCoreApplication::translate("profile", "Confirm", nullptr));
        Login->setText(QCoreApplication::translate("profile", "Login", nullptr));
        Password->setText(QCoreApplication::translate("profile", "Password", nullptr));
        PasswordConfirm->setText(QCoreApplication::translate("profile", "Password", nullptr));
        BalanceBtn->setText(QCoreApplication::translate("profile", "Balance", nullptr));
        SharesListBtn->setText(QCoreApplication::translate("profile", "Shares List", nullptr));
        PortfolioBtn->setText(QCoreApplication::translate("profile", "Portfolio", nullptr));
        TestsBtn->setText(QCoreApplication::translate("profile", "Tests", nullptr));
    } // retranslateUi

};

namespace Ui {
    class profile: public Ui_profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
