#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registration.h"
#include "account.h"

#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clearInputs()
{
    ui->LoginInput->clear();
    ui->PasswordInput->clear();
}

void MainWindow::on_SignIn_clicked()
{
    QString login = ui->LoginInput->text();
    QString password = ui->PasswordInput->text();

    if (!login.isEmpty() && !password.isEmpty()) {
        QMessageBox::about(this, "Great!", "Successful sign in!");
        account *accountWindow = new account(this);
        accountWindow->show();
    } else QMessageBox::about(this, "Fault!", "Failed sign in!");
}


void MainWindow::on_SignUp_clicked()
{
    clearInputs();
    registration *registrationWindow = new registration(this);
    registrationWindow->show();
}

