#include "balance.h"
#include "ui_balance.h"
#include "account.h"
#include "profile.h"
#include "tests.h"

balance::balance(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::balance)
{
    ui->setupUi(this);
}

balance::~balance()
{
    delete ui;
}

void balance::on_PortfolioBtn_clicked()
{
    account *accountWindow = new account(this);
    accountWindow->show();
}


void balance::on_ProfileBtn_clicked()
{
    profile *profileWindow = new profile(this);
    profileWindow->show();
}


void balance::on_TestsBtn_clicked()
{
    tests *testsWindow = new tests(this);
    testsWindow->show();
}

