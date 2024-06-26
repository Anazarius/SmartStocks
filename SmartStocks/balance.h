#ifndef BALANCE_H
#define BALANCE_H

#include <QWidget>

namespace Ui {
class balance;
}

class balance : public QWidget
{
    Q_OBJECT

public:
    explicit balance(QWidget *parent = nullptr);
    ~balance();

private slots:
    void on_PortfolioBtn_clicked();

    void on_ProfileBtn_clicked();

    void on_TestsBtn_clicked();

private:
    Ui::balance *ui;
};

#endif // BALANCE_H
