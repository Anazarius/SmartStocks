#include "profile.h"
#include "ui_profile.h"
#include "account.h"
#include "balance.h"

profile::profile(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::profile)
{
    ui->setupUi(this);
}

profile::~profile()
{
    delete ui;
}

void profile::on_PortfolioBtn_clicked()
{
    account *accountWindow = new account(this);
    accountWindow->show();
}


void profile::on_BalanceBtn_clicked()
{
    balance *balanceWindow = new balance(this);
    balanceWindow->show();
}

