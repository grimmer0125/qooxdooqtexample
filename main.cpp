#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
//    QPushButton *button = new QPushButton("Hello World", &);
//    button->setGeometry(10, 10, 80, 30);
    w.show();

//    QPushButton button ("Hello world !");
//    button.show();

    return a.exec();
}
