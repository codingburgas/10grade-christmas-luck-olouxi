/********************************************************************************
** Form generated from reading UI file 'categories.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORIES_H
#define UI_CATEGORIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_categories
{
public:
    QWidget *widget;
    QLabel *label_8;
    QLineEdit *SearchLineCat;
    QLabel *label_13;
    QPushButton *returnButton;
    QLabel *label_14;
    QTreeWidget *treeWidget_2;
    QLabel *label_15;
    QLabel *LogoLabel;
    QWidget *animalCardWidget;
    QLabel *animalDescriptionLabel;
    QLabel *animalPhotoLabel;
    QLabel *animalInfoLabel1;
    QPushButton *animalCardCloseButton;
    QLabel *animalInfoLabel2;
    QLabel *animalInfoLabel3;
    QLabel *animalNutritionLabel;
    QLabel *animalNameLabel;

    void setupUi(QDialog *categories)
    {
        if (categories->objectName().isEmpty())
            categories->setObjectName("categories");
        categories->resize(1280, 720);
        categories->setStyleSheet(QString::fromUtf8("QWidget {\n"
"  background-image: url(\":/images/img/categoriesbackground.png\");\n"
"}\n"
""));
        widget = new QWidget(categories);
        widget->setObjectName("widget");
        widget->setEnabled(true);
        widget->setGeometry(QRect(-20, -100, 701, 931));
        widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background: qlineargradient(\n"
"        spread: pad, x1: 0, y1: 0, x2: 1, y2: 1,\n"
"        stop: 0 rgba(240, 248, 255, 255), \n"
"        stop: 1 rgba(220, 235, 250, 255)  \n"
"    );\n"
"  \n"
"    border: none;\n"
"\n"
"border-bottom-right-radius: 200px;  \n"
"border-top-right-radius: 200px;  \n"
"\n"
"    padding: 60px; \n"
"   }"));
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 170, 681, 121));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, \n"
"        stop:0 rgb(217, 217, 217),\n"
"        stop:1 rgb(103, 136, 207)); \n"
"    color: #333333;\n"
"\n"
"   border-top-right-radius: 25px;\n"
"    padding: 10px; \n"
" \n"
"    color: #000000;\n"
"padding: 20px;\n"
"\n"
"}\n"
""));
        SearchLineCat = new QLineEdit(widget);
        SearchLineCat->setObjectName("SearchLineCat");
        SearchLineCat->setGeometry(QRect(440, 200, 251, 60));
        SearchLineCat->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgb(157, 212, 234);\n"
"\n"
"        font: 32pt \"Mongolian Baiti\";\n"
"    color: rgb(110, 110, 110);\n"
"    border-radius: 8px; \n"
"    border: 1px solid #9DD4EA; \n"
"    padding: 5px 10px;\n"
"border: 1px solid rgb(100, 100, 100);\n"
"\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 2px solid #6B8E23;\n"
"\n"
"}\n"
""));
        label_13 = new QLabel(widget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(700, 647, 251, 261));
        label_13->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\321\202 \320\263\321\200\320\260\320\275\320\270\321\206\321\203 */\n"
"    background: transparent; /* \320\243\320\261\320\270\321\200\320\260\320\265\321\202 \321\204\320\276\320\275 (\320\265\321\201\320\273\320\270 \321\202\321\200\320\265\320\261\321\203\320\265\321\202\321\201\321\217) */\n"
"}\n"
""));
        returnButton = new QPushButton(widget);
        returnButton->setObjectName("returnButton");
        returnButton->setGeometry(QRect(40, 200, 140, 60));
        returnButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 32pt \"Mongolian Baiti\";\n"
"background-color: rgb(157, 212, 234);\n"
"    font-weight: bold; \n"
"    color: rgb(110, 110, 110);\n"
"    border-radius: 8px;\n"
"    border: 1px solid #9DD4EA; \n"
"    padding: 5px 10px; \n"
"border: 1px solid rgb(100, 100, 100);\n"
"\n"
"}\n"
"QPushButton:focus {\n"
"    border: 2px solid #6B8E23;\n"
"}\n"
""));
        label_14 = new QLabel(widget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(205, 200, 220, 60));
        label_14->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 32pt \"Mongolian Baiti\";\n"
"background-color: rgb(155, 210, 250);\n"
"    font-weight: bold; \n"
"    color: rgb(110, 110, 110);\n"
"    border-radius: 8px;\n"
"    border: 1px solid #9DD4EA; \n"
"    padding: px 2px; \n"
"border: 1px solid rgb(100, 100, 100);\n"
"}"));
        treeWidget_2 = new QTreeWidget(widget);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoDown));
        QFont font;
        font.setFamilies({QString::fromUtf8("Yu Gothic UI")});
        font.setPointSize(17);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setFont(0, font);
        __qtreewidgetitem->setIcon(0, icon);
        treeWidget_2->setHeaderItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget_2);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        treeWidget_2->setObjectName("treeWidget_2");
        treeWidget_2->setGeometry(QRect(20, 280, 531, 511));
        treeWidget_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::ClosedHandCursor)));
        treeWidget_2->setStyleSheet(QString::fromUtf8("QTreeWidget {\n"
"    background-color: #f5f5f5; /* Light gray background */\n"
"    border: 1px solid #dcdcdc; /* Subtle border */\n"
"    border-radius: 8px;\n"
"    font-size: 14px;\n"
"    color: #333333; /* Dark text color */\n"
"}\n"
"\n"
"QTreeWidget::item {\n"
"    padding: 5px 10px;\n"
"    border: none;\n"
"    color: #333333; /* Normal text color */\n"
"}\n"
"\n"
"QTreeWidget::item:hover {\n"
"    background-color: #e6f7ff; /* Light blue on hover */\n"
"    color: #000000; /* Darker text when hovered */\n"
"}"));
        label_15 = new QLabel(widget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(245, 110, 171, 61));
        label_15->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Times new Roman\"; \n"
"    font-size: 50px;\n"
"    padding: 1px;\n"
"background: transparent;\n"
"}\n"
""));
        LogoLabel = new QLabel(widget);
        LogoLabel->setObjectName("LogoLabel");
        LogoLabel->setGeometry(QRect(520, 635, 271, 241));
        LogoLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: none;\n"
"    background: transparent; \n"
"}\n"
""));
        treeWidget_2->raise();
        label_8->raise();
        SearchLineCat->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        LogoLabel->raise();
        returnButton->raise();
        animalCardWidget = new QWidget(categories);
        animalCardWidget->setObjectName("animalCardWidget");
        animalCardWidget->setGeometry(QRect(770, 191, 420, 520));
        animalCardWidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 #FFFFFF,\n"
"        stop: 1 #D3F5FF\n"
"    );\n"
"    border: 2px solid #004080;\n"
"    border-radius: 15px;\n"
"}"));
        animalDescriptionLabel = new QLabel(animalCardWidget);
        animalDescriptionLabel->setObjectName("animalDescriptionLabel");
        animalDescriptionLabel->setGeometry(QRect(15, 305, 395, 200));
        animalDescriptionLabel->setStyleSheet(QString::fromUtf8("QWidget{\n"
"    background: #D0F4FF;\n"
"    border: 2px solid #006060;\n"
"    border-radius: 20px;\n"
"}"));
        animalPhotoLabel = new QLabel(animalCardWidget);
        animalPhotoLabel->setObjectName("animalPhotoLabel");
        animalPhotoLabel->setGeometry(QRect(10, 45, 400, 225));
        animalPhotoLabel->setStyleSheet(QString::fromUtf8("QWidget{\n"
"    background: #D0F4FF;\n"
"    border: 2px solid #006060;\n"
"    border-radius: 0px;\n"
"}"));
        animalInfoLabel1 = new QLabel(animalCardWidget);
        animalInfoLabel1->setObjectName("animalInfoLabel1");
        animalInfoLabel1->setGeometry(QRect(39, 275, 90, 22));
        animalInfoLabel1->setStyleSheet(QString::fromUtf8("QLabel{\n"
"     background: #D0F4FF;\n"
"    padding 0px;\n"
"    border-radius: 0px;\n"
"}"));
        animalCardCloseButton = new QPushButton(animalCardWidget);
        animalCardCloseButton->setObjectName("animalCardCloseButton");
        animalCardCloseButton->setGeometry(QRect(310, 10, 93, 29));
        animalCardCloseButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 1, y2: 0,\n"
"        stop: 0 #EFFFFF,\n"
"        stop: 1 #B0E0E6\n"
"    );\n"
"    color: #004080;\n"
"    border: 1px solid #004080;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));
        animalInfoLabel2 = new QLabel(animalCardWidget);
        animalInfoLabel2->setObjectName("animalInfoLabel2");
        animalInfoLabel2->setGeometry(QRect(165, 275, 90, 22));
        animalInfoLabel2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"     background: #D0F4FF;\n"
"    padding 0px;\n"
"    border-radius: 0px;\n"
"}"));
        animalInfoLabel3 = new QLabel(animalCardWidget);
        animalInfoLabel3->setObjectName("animalInfoLabel3");
        animalInfoLabel3->setGeometry(QRect(290, 275, 90, 22));
        animalInfoLabel3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"     background: #D0F4FF;\n"
"    padding 0px;\n"
"    border-radius: 0px;\n"
"}"));
        animalNutritionLabel = new QLabel(animalCardWidget);
        animalNutritionLabel->setObjectName("animalNutritionLabel");
        animalNutritionLabel->setGeometry(QRect(-70, -135, 221, 181));
        animalNutritionLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 200px; \n"
"    font-weight: bold; \n"
"    border: none; \n"
"    margin: 0px; \n"
"    padding: 0px; \n"
"    background-color: transparent;\n"
"    text-align: center;\n"
"  qproperty-alignment: 'AlignCenter';\n"
"}"));
        animalNameLabel = new QLabel(animalCardWidget);
        animalNameLabel->setObjectName("animalNameLabel");
        animalNameLabel->setGeometry(QRect(125, 10, 140, 31));

        retranslateUi(categories);

        QMetaObject::connectSlotsByName(categories);
    } // setupUi

    void retranslateUi(QDialog *categories)
    {
        categories->setWindowTitle(QCoreApplication::translate("categories", "Dialog", nullptr));
        label_8->setText(QString());
        label_13->setText(QString());
        returnButton->setText(QCoreApplication::translate("categories", "Return", nullptr));
        label_14->setText(QCoreApplication::translate("categories", "Pick a type", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_2->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("categories", "1", nullptr));

        const bool __sortingEnabled = treeWidget_2->isSortingEnabled();
        treeWidget_2->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget_2->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("categories", "Morganucodon", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("categories", "Hesperocyon", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("categories", "Edwardii", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem2->child(1);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("categories", "Riffautae", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("categories", "Sahelanthropus tchadensis", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem5->child(0);
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("categories", "Paniscus", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem5->child(1);
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("categories", "Habilis", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("categories", "Proailurus", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem8->child(0);
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("categories", "Blytheae", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem8->child(1);
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("categories", "Silvestris", nullptr));
        treeWidget_2->setSortingEnabled(__sortingEnabled);

        label_15->setText(QCoreApplication::translate("categories", "OlouXi", nullptr));
        LogoLabel->setText(QString());
        animalDescriptionLabel->setText(QCoreApplication::translate("categories", "desc", nullptr));
        animalPhotoLabel->setText(QCoreApplication::translate("categories", "img", nullptr));
        animalInfoLabel1->setText(QString());
        animalCardCloseButton->setText(QCoreApplication::translate("categories", "close card", nullptr));
        animalInfoLabel2->setText(QString());
        animalInfoLabel3->setText(QString());
        animalNutritionLabel->setText(QCoreApplication::translate("categories", ".", nullptr));
        animalNameLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class categories: public Ui_categories {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORIES_H
