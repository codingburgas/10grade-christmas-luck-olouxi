#include "categories.h"
#include "ui_categories.h"
//#include <thread>
//#include <chrono>
categories::categories(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::categories)
{
    ui->setupUi(this);
    ui->animalCardWidget->hide();
    QPixmap pix(":/images/img/logo.png");
    ui->LogoLabel->setPixmap(pix);
    setWindowTitle("Info");
    ui->SearchLineCat->setPlaceholderText("Search");
    QAction *searchAction = new QAction(QIcon(":/images/img/betterSearch.jpg"), "", this);
    ui->SearchLineCat->addAction(searchAction, QLineEdit::LeadingPosition);
    //QPixmap pix2(":/images/img/betterSearch.jpg");
    //ui->searchIcon->setPixmap(pix2);
}
int a = 1;
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


void categories::on_treeWidget_2_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    if(a == 1){
        QString ITEMtext = item->text(column);
        ui->animalNameLabel->setText(ITEMtext);
        ui->animalCardWidget->show();
        a++;
    }
    else{
        ui->animalCardWidget->hide();
        //std::this_thread::sleep_for(std::chrono::seconds(1));
        QString ITEMtext = item->text(column);
        ui->animalNameLabel->setText(ITEMtext);
        ui->animalCardWidget->show();
    }

}


void categories::on_animalCardCloseButton_clicked()
{
    ui->animalCardWidget->hide();
}




