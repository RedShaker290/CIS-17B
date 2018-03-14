#include <QPushButton>
#include <QApplication>
#include <QWidget>
#include <QFormLayout>
#include <QFrame>
#include <QLineEdit>
#include <QLabel>

int main(int argc, char **argv)
{

    QApplication app(argc,argv);
                                                                                            // http://doc.qt.io/archives/qt-4.8/layout.html
    QWidget *window = new QWidget;
                                                                                           // Create buttons
    QPushButton *checkingAccButton = new QPushButton("Checking Account: 123456");
    QPushButton *checkingDepButton = new QPushButton("Deposit to Checking");
    QPushButton *checkingWithButton = new QPushButton("Withdraw from Checking");

    QPushButton *savingsAccButton = new QPushButton("Savings Account: 654321");
    QPushButton *savingsDepButton = new QPushButton("Deposit to Savings");
    QPushButton *savingsWithButton = new QPushButton("Withdraw from Savings");

    QPushButton *transferButton = new QPushButton("Transfer Funds");
    QPushButton *transHisButton = new QPushButton("Transaction History");
                                                                                          // Labels for Account balances
    QLabel *checkingL = new QLabel;
    checkingL -> setText("Checking Available Balance: $50.00");
    QLabel *savingsL = new QLabel;
    savingsL ->setText("Savings Available Balance: $150.00");
    QLabel *userName = new QLabel;
    userName ->setText("Welcome Jason Guevara");

                                                                                         // Format buttons
    QGridLayout *layout = new QGridLayout;
                                                                                        // Formats Labels
    layout->addWidget(checkingL,1,1,1,2);
    layout->addWidget(savingsL,5,1,5,2);
    layout->addWidget(userName,0,1,1,2);
                                                                                       // Formats Buttons
    layout->addWidget(checkingAccButton, 2, 1, 2, 2);
    layout->addWidget(checkingDepButton, 4, 1);
    layout->addWidget(checkingWithButton, 4, 2);
    layout->addWidget(savingsDepButton, 12, 1);
    layout->addWidget(savingsWithButton, 12, 2);
    layout->addWidget(savingsAccButton, 0, 1, 0, 2);
    layout->addWidget(transferButton, 20, 1);
    layout->addWidget(transHisButton, 20, 2);
                                                                                   //  Set the title
    QString windowTitle("Bank of America");
    window->setWindowTitle(windowTitle);
    window->setLayout(layout);
    window->setFixedSize(500,450);
    window->show();

    return app.exec();
}

