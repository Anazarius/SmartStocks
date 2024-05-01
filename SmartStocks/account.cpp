#include "account.h"
#include "ui_account.h"
#include "balance.h"
#include "profile.h"

account::account(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::account)
{
    ui->setupUi(this);
}

account::~account()
{
    delete ui;
}

void account::on_BalanceBtn_clicked()
{
    balance *balanceWindow = new balance(this);
    balanceWindow->show();
}


void account::on_ProfileBtn_clicked()
{
    profile *profileWindow = new profile(this);
    profileWindow->show();
}

