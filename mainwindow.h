#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "categories.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void MainReturn();

private slots:
    void on_CategoryButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *MAINW;
    categories *category;
};
#endif // MAINWINDOW_H
