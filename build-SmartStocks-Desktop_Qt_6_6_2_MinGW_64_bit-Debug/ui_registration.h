/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registration
{
public:
    QLabel *Background;
    QLineEdit *LoginInput;
    QLineEdit *PasswordConfirmInput;
    QPushButton *SignUp;
    QLineEdit *PasswordInput;
    QPushButton *SignIn;

    void setupUi(QWidget *registration)
    {
        if (registration->objectName().isEmpty())
            registration->setObjectName("registration");
        registration->resize(800, 600);
        Background = new QLabel(registration);
        Background->setObjectName("Background");
        Background->setGeometry(QRect(0, 0, 800, 600));
        Background->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(13, 12, 12, 255), stop:1 rgba(74, 72, 72, 255));"));
        LoginInput = new QLineEdit(registration);
        LoginInput->setObjectName("LoginInput");
        LoginInput->setGeometry(QRect(250, 175, 300, 40));
        LoginInput->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));
        PasswordConfirmInput = new QLineEdit(registration);
        PasswordConfirmInput->setObjectName("PasswordConfirmInput");
        PasswordConfirmInput->setGeometry(QRect(250, 325, 300, 40));
        PasswordConfirmInput->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));
        SignUp = new QPushButton(registration);
        SignUp->setObjectName("SignUp");
        SignUp->setGeometry(QRect(250, 425, 300, 40));
        SignUp->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));
        PasswordInput = new QLineEdit(registration);
        PasswordInput->setObjectName("PasswordInput");
        PasswordInput->setGeometry(QRect(250, 250, 300, 40));
        PasswordInput->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));
        SignIn = new QPushButton(registration);
        SignIn->setObjectName("SignIn");
        SignIn->setGeometry(QRect(250, 380, 100, 30));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SignIn->sizePolicy().hasHeightForWidth());
        SignIn->setSizePolicy(sizePolicy);
        SignIn->setAutoFillBackground(false);
        SignIn->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 147, 43);\n"
"color: black;\n"
"font-size:14px;\n"
"border: none;\n"
"border-radius:10px;"));

        retranslateUi(registration);

        QMetaObject::connectSlotsByName(registration);
    } // setupUi

    void retranslateUi(QWidget *registration)
    {
        registration->setWindowTitle(QCoreApplication::translate("registration", "Form", nullptr));
        Background->setText(QString());
        LoginInput->setPlaceholderText(QCoreApplication::translate("registration", "Login", nullptr));
        PasswordConfirmInput->setPlaceholderText(QCoreApplication::translate("registration", "Confirm password", nullptr));
        SignUp->setText(QCoreApplication::translate("registration", "Sign up", nullptr));
        PasswordInput->setPlaceholderText(QCoreApplication::translate("registration", "Password", nullptr));
        SignIn->setText(QCoreApplication::translate("registration", "Sign in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registration: public Ui_registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
