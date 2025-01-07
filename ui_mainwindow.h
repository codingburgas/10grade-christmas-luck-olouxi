/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_5;
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *CategoryButton;
    QLabel *label_7;
    QPushButton *pushButton;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1280, 720);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"  background-image: url(\":/images/img/main window.png\");\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 50, 391, 51));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"comic Sans MS\"; \n"
"    font-size: 32px;\n"
"    font-weight: bold; \n"
"    letter-spacing: 2px; \n"
"    color: #7F4C4C;\n"
"    text-transform: uppercase; \n"
"    background: transparent; \n"
"    qproperty-alignment: 'AlignCenter'; \n"
"}\n"
""));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setEnabled(true);
        widget->setGeometry(QRect(420, -120, 900, 890));
        widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background: qlineargradient(\n"
"        spread: pad, x1: 0, y1: 0, x2: 1, y2: 1,\n"
"        stop: 0 rgba(240, 248, 255, 255), \n"
"        stop: 1 rgba(220, 235, 250, 255)  \n"
"    );\n"
"  \n"
"    border: none;\n"
"    border-radius: 15px;\n"
"\n"
"border-top-left-radius: 200px;  \n"
"    border-bottom-left-radius: 200px;\n"
"    padding: 60px; \n"
"   }"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(-20, 400, 931, 321));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, \n"
"        stop:0 rgb(217, 217, 217),\n"
"        stop:1 rgb(103, 136, 207)); \n"
"    color:  #092541;\n"
"    border-radius: 8px;\n"
"    border: 1px solid rgb(103, 136, 207); \n"
"    padding: 10px; \n"
" font-family: \"comic Sans MS\";\n"
"    font-size: 30px; \n"
"    font-weight: normal;\n"
"    color:  #092541;\n"
" qproperty-alignment: 'AlignCenter';\n"
"\n"
"    color:  #092541; \n"
"border-bottom-left-radius: 0px;\n"
"border-top-left-radius: 0px;\n"
"padding: 20px;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 180, 1050, 141));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, \n"
"        stop:0 rgb(217, 217, 217),\n"
"        stop:1 rgb(103, 136, 207)); \n"
"    color: #333333;\n"
"\n"
"    border: 1px solid rgb(103, 136, 207); \n"
"    padding: 10px; \n"
" \n"
"    color: #000000;\n"
"\n"
"\n"
"padding: 20px;\n"
"\n"
"}\n"
""));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(700, 647, 251, 261));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\321\202 \320\263\321\200\320\260\320\275\320\270\321\206\321\203 */\n"
"    background: transparent; /* \320\243\320\261\320\270\321\200\320\260\320\265\321\202 \321\204\320\276\320\275 (\320\265\321\201\320\273\320\270 \321\202\321\200\320\265\320\261\321\203\320\265\321\202\321\201\321\217) */\n"
"}\n"
""));
        CategoryButton = new QPushButton(widget);
        CategoryButton->setObjectName("CategoryButton");
        CategoryButton->setGeometry(QRect(285, 220, 300, 60));
        CategoryButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"\n"
""));
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 220, 222, 60));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 32pt \"Mongolian Baiti\";\n"
"background-color: rgb(155, 210, 250);\n"
"    font-weight: bold; \n"
"    color: rgb(110, 110, 110);\n"
"    border-radius: 8px;\n"
"    border: 1px solid #9DD4EA; \n"
"    padding: 5px 10px; \n"
"border: 1px solid rgb(100, 100, 100);\n"
"}"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(608, 220, 220, 60));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}"));
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(-80, 360, 931, 181));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"comic Sans MS\"; \n"
"    font-size: 24px;\n"
"    font-weight: bold; \n"
"    letter-spacing: 2px; \n"
"    color: #092541;\n"
"    text-transform: uppercase; \n"
"    background: transparent; \n"
"    qproperty-alignment: 'AlignCenter'; \n"
"}\n"
""));
        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(337, 120, 321, 51));
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Times new Roman\"; \n"
"    font-size: 50px;\n"
"    padding: 1px;\n"
"}\n"
""));
        label_2->raise();
        label_3->raise();
        CategoryButton->raise();
        label->raise();
        label_7->raise();
        pushButton->raise();
        label_8->raise();
        label_9->raise();
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 120, 291, 71));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"comic Sans MS\"; \n"
"    font-size: 32px;\n"
"    font-weight: bold; \n"
"    letter-spacing: 2px; \n"
"    color: #7F4C4C;\n"
"    text-transform: uppercase; \n"
"    background: transparent; \n"
"    qproperty-alignment: 'AlignCenter'; \n"
"}\n"
""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-20, 200, 691, 491));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: none; /*delete border */\n"
"    background: transparent; /* delete background*/\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1280, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "EVOLUTIONARY TREE", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "This app allows you to explore the ancestors of \n"
"           various organisms, trace evolutionary branches,\n"
"observe the succession of generations \342\200\224 all in just a \n"
"couple of clicks!", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        CategoryButton->setText(QCoreApplication::translate("MainWindow", "Pick a category", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Main page", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Welcome to \"Evolutionary Tree Visualizer\"!\n"
"", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "OlouXi", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "_VISUALIZER_", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
