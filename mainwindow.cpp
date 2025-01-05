#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include <QApplication>
#include <QLineEdit>
#include <QIcon>
#include <QWidget>
#include <QVBoxLayout>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , MAINW(new Ui::MainWindow)
{
    MAINW->setupUi(this);
    category = new categories();
    connect(category, &categories::MAINreturn, this, &MainWindow::show);
    setWindowTitle("Main page");

    QPixmap pix(":/images/img/logo.png");
    MAINW->label_3->setPixmap(pix);
    QPixmap pix2(":/images/img/tree3.png");
    MAINW->label_4->setPixmap(pix2);
}

MainWindow::~MainWindow()
{
    delete MAINW;
}

void MainWindow::on_CategoryButton_clicked()
{
    category->show();
    this->close();
}

void MainWindow::on_pushButton_clicked()
{
    category->show();
    this->close();
}

