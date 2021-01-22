#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<inputwindow.h>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QSqlError>
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
    void on_InputButton_clicked();

    void on_ProgressButton_clicked();

private:
    Ui::MainWindow *ui;
    InputWindow *iWindow;
};

#endif // MAINWINDOW_H
