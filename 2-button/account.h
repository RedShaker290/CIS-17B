#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QPushButton>
#include <QMessageBox>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QApplication>
#include <QWidget>
#include <QFormLayout>
#include <QFrame>
#include <QLineEdit>
#include <QLabel>

class Account
{
private:
    double value = 0;
    int accNum = 0;

public:
    Account(double value, double accNum)
    {
        this->value = value;
        this->accNum = accNum;
    }
    ~Account(){}

    double displayAcc()
    {
        QWidget *subWindowAcc = new QWidget;

        QLabel *valueL = new QLabel;
        valueL -> setText("value");

        QLabel *accNum = new QLabel;
        accNum -> setText("accNum");

        QGridLayout *layout = new QGridLayout;
        layout->addWidget(valueL,0,1,1,2);
        layout->addWidget(accNum,2,1,1,2);

        subWindowAcc->setWindowTitle("Account");
        subWindowAcc->show();
        return 0;
    }
    double withdraw(double num)
    {
       return num = num - value;
    }
    double deposit(double num)
    {
       return num = num + value;
    }
};

#endif // ACCOUNT_H
