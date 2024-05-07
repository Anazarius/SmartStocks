#ifndef TESTS_H
#define TESTS_H

#include <QWidget>

namespace Ui {
class tests;
}

class tests : public QWidget
{
    Q_OBJECT

public:
    explicit tests(QWidget *parent = nullptr);
    ~tests();

private slots:
    void on_ProfileBtn_clicked();

    void on_BalanceBtn_clicked();

    void on_Portfolio_clicked();

private:
    Ui::tests *ui;
};

#endif // TESTS_H
