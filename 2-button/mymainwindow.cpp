#include <QApplication>
#include <QMainWindow>
#include "mymainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MyMainWindow window;

    window.setWindowTitle(QString::fromUtf8("MainWindow"));
    window.resize(450,300);
    window.decorate();

    return app.exec();

}
