#include <QApplication>
#include <QMainWindow>
#include "mymainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MyMainWindow savings(0, 12345);
    MyMainWindow checking(0, 5678);
    MyMainWindow window(0,0);

    window.setWindowTitle(QString::fromUtf8("MainWindow"));
    window.resize(1000,100);
    window.decorate();

    checking.displayAcc();

    return app.exec();
}

