#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H
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

class MyMainWindow: public QMainWindow
{
  Q_OBJECT

private:
    double value = 0;
    double accNum = 0;

public:
    MyMainWindow(double value, double accNum)
    {
        this->value = value;
        this->accNum = accNum;
    }
    ~ MyMainWindow(){}

    void decorate()
    {
      QWidget *window = new QWidget;

      QPushButton *checkingAccButton = new QPushButton(this);
      QPushButton *savingsAccButton = new QPushButton(this);

      QPushButton *deposit = new QPushButton(this);
      QPushButton *withdraw = new QPushButton(this);

      QPushButton *transferFunds = new QPushButton(this);
      QPushButton *transHistory = new QPushButton(this);

      checkingAccButton->setText("Checking Account: 123456");
      savingsAccButton->setText("Savings Account: 654321");

      deposit->setText("Deposit");
      withdraw->setText("Withdraw");

      transferFunds->setText("Transfer Funds");
      transHistory->setText("Transaction History");

      //Labels for Account balances
      QLabel *userName = new QLabel;
      userName -> setText("Welcome, User");

      QObject::connect(checkingAccButton, SIGNAL(clicked()),this, SLOT(displayAcc()));
      QObject::connect(savingsAccButton, SIGNAL(clicked()),this, SLOT(displayAcc()));

      QObject::connect(deposit, SIGNAL(clicked()),this, SLOT(deposit()));
      QObject::connect(withdraw, SIGNAL(clicked()),this, SLOT(withdraw()));

      QObject::connect(transferFunds, SIGNAL(clicked()),this, SLOT(clickedSlot()));
      QObject::connect(transHistory, SIGNAL(clicked()),this, SLOT(clickedSlot()));

// I commented this stuff out because it blocked several buttons...
// I left them here just in case we need to use them later
 /*
      button1->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
      button2->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
      button3->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
      button4->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
      button5->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
      button6->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
      button7->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
      button8->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
*/


      // Format buttons
      QGridLayout *layout = new QGridLayout;
      layout->addWidget(userName,0,1,1,2);

      layout->addWidget(checkingAccButton, 0, 1, 2, 2);
      layout->addWidget(savingsAccButton, 1, 1, 1, 2);

      layout->addWidget(deposit, 2, 1, 1, 2);
      layout->addWidget(withdraw, 3, 1, 1, 2);

      layout-> addWidget(transferFunds, 20, 1);
      layout-> addWidget(transHistory, 20, 2);

      // Set the title
      QString windowTitle("Welcome to Bank of America, Jason Guevara!");
      window->setWindowTitle(windowTitle);
      window->setLayout(layout);
      window->setFixedSize(500,275);
      window->show();
    }

   public slots:
     void displayAcc();
     void deposit();
     void withdraw();

#endif
