#include "categories.h"
#include "ui_categories.h"
categories::categories(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::categories)
{
    ui->setupUi(this);
    QPixmap pix(":/images/img/logo.png");
    ui->label_4->setPixmap(pix);
    setWindowTitle("Info");
    ui->SearchLineCat_2->setPlaceholderText("Search");
    //QAction *searchAction = new QAction(QIcon(":/images/img/search.jpg"), "", this);
    //ui->SearchLine->addAction(searchAction, QLineEdit::LeadingPosition);
}

categories::~categories()
{
    delete ui;
}

void categories::on_returnButton_clicked()
{
    //MAINW->MainReturn();
    this->close();
    emit MAINreturn();
}

