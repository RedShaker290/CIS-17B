#include "mymainwindow.h"

void MyMainWindow::displayAcc()
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
void MyMainWindow::deposit()
{
    QWidget *subWindowDep = new QWidget;
    subWindowDep->setWindowTitle("Deposit");
    subWindowDep->show();
    return num = num - value;
}
void MyMainWindow::withdraw()
{
    QWidget *subWindowWith = new QWidget;
    subWindowWith->setWindowTitle("Withdraw");
    subWindowWith->show();
    return num = num + value;
}
