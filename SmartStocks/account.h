#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QWidget>

namespace Ui {
class account;
}

class account : public QWidget
{
    Q_OBJECT

public:
    explicit account(QWidget *parent = nullptr);
    ~account();

private slots:
    void on_BalanceBtn_clicked();

    void on_ProfileBtn_clicked();

private:
    Ui::account *ui;
};

#endif // ACCOUNT_H
