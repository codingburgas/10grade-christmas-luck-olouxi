#include "mainwindow.h"
#include<iostream>
#include<QDir>
#include <QApplication>

int main(int argc, char *argv[])
{
    std::cout << "Current working directory: "
              << QDir::currentPath().toStdString() << std::endl;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
