#ifndef ACCOUNT_H
#define ACCOUNT_H



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

    double displayAcc();
    double withdraw(double num);
    double deposit(double num);
};

#endif // ACCOUNT_H
