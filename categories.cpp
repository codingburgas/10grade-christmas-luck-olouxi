#include "categories.h"
#include<fstream>
#include<cstring>
#include "ui_categories.h"
#include <QFile>
#include <QDebug>

categories::categories(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::categories)
{
    ui->setupUi(this);
    ui->animalCardWidget->hide(); //hide animal card
    QPixmap pix(":/images/img/logo.png"); //add logo on the page
    ui->LogoLabel->setPixmap(pix);
    setWindowTitle("Evolutionary Tree");
    ui->SearchLineCat->setPlaceholderText("Search");
}

categories::~categories()
{
    delete ui;
}
struct Animal{ //animal structure declaration
private:
    std::string Specie;
    std::string Nutrition;
    std::string Photo;
    std::string Description;
    std::string Aclass;
    std::string Family;
    std::string Genus;
public:
    void setSpecie(const std::string& specie) { Specie = specie; } // setters&getters
    void setNutrition(const std::string& nutrition) { Nutrition = nutrition; }
    void setPhoto(const std::string& photo) { Photo = photo; }
    void setDescription(const std::string& description) { Description = description; }
    void setAclass(const std::string& aclass) { Aclass = aclass; }
    void setFamily(const std::string& family) { Family = family; }
    void setGenus(const std::string& genus) { Genus = genus; }
    std::string getSpecie() const { return Specie; }
    std::string getNutrition() const { return Nutrition; }
    std::string getPhoto() const { return Photo; }
    std::string getDescription() const { return Description; }
    std::string getAclass() const { return Aclass; }
    std::string getFamily() const { return Family; }
    std::string getGenus() const { return Genus; }

    Animal findAnimalBySpecie(const std::string& targetSpecie) { //function for taking info from animalList.txt
        const std::string filename = "animalList.txt";
        std::ifstream file(filename);
        Animal animal; //empty animal
        animal.Specie = "no info";
        animal.Nutrition="nutrition";
        animal.Photo = "photo";
        animal.Description = "description";
        animal.Aclass = "aclass";
        animal.Family = "family";
        animal.Genus = "genus";
        if (!file.is_open()) {
            throw std::runtime_error("Cannot open file");
            return animal;
        }

        std::string line;
        while (std::getline(file, line)) { //cut line with information about animal
            std::stringstream ss(line);
            std::string specie, nutrition, photo, description, aclass, family, genus;

            std::getline(ss, specie, ';');
            std::getline(ss, nutrition, ';');
            std::getline(ss, photo, ';');
            std::getline(ss, description, ';');
            std::getline(ss, aclass, ';');
            std::getline(ss, family, ';');
            std::getline(ss, genus, ';');

            if (specie == targetSpecie) { // if animal exists
                animal.setSpecie(specie);
                animal.setNutrition(nutrition);
                animal.setPhoto(photo);
                animal.setDescription(description);
                animal.setAclass(aclass);
                animal.setFamily(family);
                animal.setGenus(genus);
                return animal;
            }
        }
        return animal;
    }
};

void categories::on_returnButton_clicked() // function to return to the main window
{
    this->close();
    emit MAINreturn();
}

void categories::ChangeCard(std::string text){ // function to change animal card
    Animal actual;
    actual = actual.findAnimalBySpecie(text);
    if(actual.getSpecie() != "no info"){
        QString ssss = QString::fromStdString(actual.getSpecie());
        ui->animalNameLabel->setText(ssss);
        ssss = QString::fromStdString(actual.getNutrition());
        if (ssss == "Carnivore")
            ui->animalNutritionLabel->setStyleSheet("color: rgb(238, 108, 123); font-size: 200px; font-weight: bold; border: none; margin: 0px; padding: 0px; background-color: transparent; text-align: center; qproperty-alignment: 'AlignCenter'; background-color: transparent;");
        else if (ssss == "Herbivore")
            ui->animalNutritionLabel->setStyleSheet("color: rgb(153, 255, 153); font-size: 200px; font-weight: bold; border: none; margin: 0px; padding: 0px; background-color: transparent; text-align: center; qproperty-alignment: 'AlignCenter'; background-color: transparent;");
        else if (ssss == "Omnivore")
            ui->animalNutritionLabel->setStyleSheet("color: rgb(250, 231, 156); font-size: 200px; font-weight: bold; border: none; margin: 0px; padding: 0px; background-color: transparent; text-align: center; qproperty-alignment: 'AlignCenter'; background-color: transparent;");
        else
            ui->animalNutritionLabel->setStyleSheet("color: rgb(0, 0, 0); font-size: 200px; font-weight: bold; border: none; margin: 0px; padding: 0px; background-color: transparent; text-align: center; qproperty-alignment: 'AlignCenter'; background-color: transparent;");

        std::string a = actual.getPhoto();
        ssss = QString::fromStdString(a);
        QPixmap pix2(ssss);
        ui->animalPhotoLabel->setPixmap(pix2);


        ssss = QString::fromStdString(actual.getDescription());
        ui->animalDescriptionLabel->setText(ssss);

        ssss = QString::fromStdString(actual.getAclass());
        ui->animalInfoLabel1->setText(ssss);

        ssss = QString::fromStdString(actual.getFamily());
        ui->animalInfoLabel2->setText(ssss);

        ssss = QString::fromStdString(actual.getGenus());
        ui->animalInfoLabel3->setText(ssss);

        ui->animalCardWidget->show();
    }
}

void categories::on_SearchLineCat_returnPressed() //receives information from search line
{
    QString Searchtext = ui->SearchLineCat->text();
    std::string text = Searchtext.toStdString();
    categories::ChangeCard(text);
}

void categories::on_treeWidget_2_itemDoubleClicked(QTreeWidgetItem *item, int column)//receives information from tree widget
{
    QString ITEMtext = item->text(column);
    std::string text = ITEMtext.toStdString();
    categories::ChangeCard(text);
}

void categories::on_animalCardCloseButton_clicked()//function to close animal card
{
    ui->animalCardWidget->hide();
}
