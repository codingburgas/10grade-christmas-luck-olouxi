#include "categories.h"
#include<fstream>
//#include <iostream>
#include<sstream>
#include<cstring>
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
//int a = 1;

/*const std::string txtWork(){
    std::string ddd, sss;
    std::fstream animalList("animalList.txt", std::ios::app | std::ios::in | std::ios::out | std::ios::ate);
    animalList << "aboba";
    while (getline(animalList, ddd)){
        sss = ddd;
    }

    animalList.close();
    return sss;

}*/






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

    void newAnimal(Animal a){
        std::fstream file;
        file.open("animalList.txt");
        file << a.Specie << ' ' << a.Nutrition << ' ' << a.Photo << a.Description << ' ' << a.Aclass << ' ' << a.Family << ' ' << a.Genus << "\n";
        file.close();
    }

    void setAnimalCard(const std::string& a) {
        std::ifstream file("animalList.txt");
        if (!file.is_open()) {
            return;
        }
        std::string line;
        while (std::getline(file, line)) {
            std::istringstream iss(line);
            std::string specie;

            if (iss >> specie) {
                if (specie == a) {
                    Specie = specie;
                    iss >> Nutrition >> Photo;

                    std::string descriptionPart;
                    while (iss >> descriptionPart) {
                        if (!Description.empty()) {
                            Description += " ";
                        }
                        Description += descriptionPart;
                    }

                    iss >> Aclass >> Family >> Genus;
                    break;
                }
            }
        }

        file.close();
    }
};

void categories::on_returnButton_clicked()
{
    this->close();
    emit MAINreturn();
}


void categories::on_treeWidget_2_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    QString ITEMtext = item->text(column);
    Animal actual;
    std::string text = ITEMtext.toStdString();
    actual.setAnimalCard(text);


    QString ssss = QString::fromStdString(actual.getAclass());
    ui->animalInfoLabel1->setText(ssss);

    ssss = QString::fromStdString(actual.getFamily());
    ui->animalInfoLabel2->setText(ssss);

    ssss = QString::fromStdString(actual.getGenus());
    ui->animalInfoLabel3->setText(ssss);

    ssss = QString::fromStdString(actual.getSpecie());
    ui->animalNameLabel->setText(ssss);

    ssss = QString::fromStdString(actual.getDescription());
    ui->animalDescriptionLabel->setText(ssss);

    ssss = QString::fromStdString(actual.getNutrition());
    if (ssss == "Carnivore")
        ui->animalNutritionLabel->setStyleSheet("color: rgb(238, 108, 123);");
    else if (ssss == "Herbivore")
        ui->animalNutritionLabel->setStyleSheet("color: rgb(153, 255, 153);");
    else if (ssss == "Omnivore")
        ui->animalNutritionLabel->setStyleSheet("color: rgb(255, 255, 153);");

    ui->animalCardWidget->show();

}

void categories::on_animalCardCloseButton_clicked()
{
    ui->animalCardWidget->hide();
}





void categories::on_SearchLineCat_returnPressed()
{
    QString Searchtext = ui->SearchLineCat->text();
}

