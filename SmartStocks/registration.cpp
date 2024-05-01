#include "registration.h"
#include "ui_registration.h"

#include <QDebug>
#include <QMessageBox>

registration::registration(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::registration)
{
    ui->setupUi(this);
}

registration::~registration()
{
    delete ui;
}

void registration::on_SignUp_clicked()
{
    QString login = ui->LoginInput->text();
    QString password = ui->PasswordInput->text();
    QString passwordConfirm = ui->PasswordConfirmInput->text();

    if (!login.isEmpty() && !password.isEmpty() && !passwordConfirm.isEmpty()) {
        if (password == passwordConfirm) {
            QMessageBox::about(this, "Great!", "Successful sign up!");
            this->close();
            QWidget *parent = parentWidget();
            parent->show();
        } else QMessageBox::about(this, "Fault!", "Password and confirm_password must be the same");
    } else QMessageBox::about(this, "Fault!", "Failed sign up!");

}

void registration::on_SignIn_clicked()
{
    this->close();
    QWidget *parent = parentWidget();
    parent->show();
}
