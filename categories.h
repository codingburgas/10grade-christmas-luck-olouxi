#ifndef CATEGORIES_H
#define CATEGORIES_H
#include <QDialog>
#include"qtreewidget.h"
namespace Ui {
class categories;
}

class categories : public QDialog
{
    Q_OBJECT

public:
    explicit categories(QWidget *parent = nullptr);
    ~categories();
signals:
    void MAINreturn();
private slots:


    void on_returnButton_clicked();

    void on_treeWidget_2_itemDoubleClicked(QTreeWidgetItem *item, int column);

    void on_animalCardCloseButton_clicked();

private:
    Ui::categories *ui;
};

#endif // CATEGORIES_H
