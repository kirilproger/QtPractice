#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<inputwindow.h>
#include<outputwindow.h>
#include<tunewindow.h>
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
    void default_connection();

private slots:
    void on_InputButton_clicked();

    void on_ProgressButton_clicked();

    void on_actionConnection_triggered();

private:
    Ui::MainWindow *ui;
    InputWindow *iWindow;
    OutputWindow *oWindow;
    tuneWindow *tWindow;
};

#endif // MAINWINDOW_H
