/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Background;
    QPushButton *SignUp;
    QLineEdit *LoginInput;
    QLineEdit *PasswordInput;
    QPushButton *SignIn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Background = new QLabel(centralwidget);
        Background->setObjectName("Background");
        Background->setGeometry(QRect(0, 0, 800, 600));
        Background->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(13, 12, 12, 255), stop:1 rgba(74, 72, 72, 255));"));
        SignUp = new QPushButton(centralwidget);
        SignUp->setObjectName("SignUp");
        SignUp->setGeometry(QRect(250, 310, 100, 30));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SignUp->sizePolicy().hasHeightForWidth());
        SignUp->setSizePolicy(sizePolicy);
        SignUp->setAutoFillBackground(false);
        SignUp->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 147, 43);\n"
"color: black;\n"
"font-size:16px;\n"
"border: none;\n"
"border-radius:10px;"));
        LoginInput = new QLineEdit(centralwidget);
        LoginInput->setObjectName("LoginInput");
        LoginInput->setGeometry(QRect(250, 175, 300, 40));
        LoginInput->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));
        PasswordInput = new QLineEdit(centralwidget);
        PasswordInput->setObjectName("PasswordInput");
        PasswordInput->setGeometry(QRect(250, 250, 300, 40));
        PasswordInput->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));
        SignIn = new QPushButton(centralwidget);
        SignIn->setObjectName("SignIn");
        SignIn->setGeometry(QRect(250, 360, 300, 40));
        SignIn->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 89, 11);\n"
"color: black;\n"
"font-size:22px;\n"
"border: none;\n"
"border-radius:10px;"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Background->setText(QString());
        SignUp->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        LoginInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        PasswordInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        SignIn->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
