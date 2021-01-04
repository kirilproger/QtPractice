#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include<addwindow.h>
#include<tunewindow.h>
#include<getwindow.h>
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
    void on_tuneButton_clicked();
    void default_connection();

    void on_getButton_clicked();

private:
    Ui::MainWindow *ui;
    addwindow *sWindow;
    TuneWindow *tWindow;
    getWindow *gWindow;
};

#endif // MAINWINDOW_H
