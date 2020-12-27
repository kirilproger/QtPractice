#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<addwindow.h>
#include<QSqlDatabase>
#include<QtSql>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_addButton_clicked();

private:
    Ui::MainWindow *ui;
    AddWindow *sWindow;
};

#endif // MAINWINDOW_H
