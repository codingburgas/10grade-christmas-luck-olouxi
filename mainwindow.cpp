#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/images/img/logo.png");
    ui->label_3->setPixmap(pix);
    QPixmap pix2(":/images/img/tree3.png");
    ui->label_4->setPixmap(pix2);
}

MainWindow::~MainWindow()
{
    delete ui;
}
