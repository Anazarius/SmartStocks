#include "tests.h"
#include "ui_tests.h"
#include "account.h"
#include "balance.h"
#include "profile.h"


tests::tests(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::tests)
{
    ui->setupUi(this);
}

tests::~tests()
{
    delete ui;
}

void tests::on_ProfileBtn_clicked()
{
    profile *profileWindow = new profile(this);
    profileWindow->show();
}


void tests::on_BalanceBtn_clicked()
{
    balance *balanceWindow = new balance(this);
    balanceWindow->show();
}


void tests::on_Portfolio_clicked()
{

    account *accountWindow = new account(this);
    accountWindow->show();
}

