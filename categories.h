#ifndef CATEGORIES_H
#define CATEGORIES_H
#include <QDialog>
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

private:
    Ui::categories *ui;
};

#endif // CATEGORIES_H
