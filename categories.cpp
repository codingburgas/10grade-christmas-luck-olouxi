#include "categories.h"
#include<fstream>
#include<cstring>
#include<iostream>
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



const std::string txtWork(){
    std::string ddd, sss;
    std::fstream animalList("animalList.txt", std::ios::app | std::ios::in | std::ios::out | std::ios::ate);
    animalList << "aboba";
    while (getline(animalList, ddd)){
        sss = ddd;
    }

    animalList.close();
    return sss;

}






categories::~categories()
{
    delete ui;
}
class Animal{
private:
    std::string Specie;
    std::string Nutrition;
    std::string Photo;
    std::string Description;
    std::string Aclass;
    std::string Family;
    std::string Genus;
public:
    void setSpecie(std::string specie){
        Specie = specie;
    }
    void setNutrition(std::string nutrition){
        Nutrition = nutrition;
    }
    void setPhoto(std::string photo){
        Photo = photo;
    }
    void setDescription(std::string description){
        Description = description;
    }
    void setAclass(std::string aclass){
        Aclass = aclass;
    }
    void setFamily(std::string family){
        Family = family;
    }
    void setGenus(std::string genus){
        Genus = genus;
    }

    std::string getSpecie(){
        return Specie;
    }
    std::string getNutrition(){
        return Nutrition;
    }
    std::string getPhoto(){
        return Photo;
    }
    std::string getDescription(){
        return Description;
    }
    std::string getAclass(){
        return Aclass;
    }
    std::string getFamily(){
        return Family;
    }
    std::string getGenus(){
        return Genus;
    }
};

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
    QString ssss = QString::fromStdString(txtWork());
    ui->animalInfoLabel1->setText(ssss);
}


void categories::on_animalCardCloseButton_clicked()
{
    ui->animalCardWidget->hide();
}




