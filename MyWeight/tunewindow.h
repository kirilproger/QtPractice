#ifndef TUNEWINDOW_H
#define TUNEWINDOW_H

#include <QMainWindow>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include<QMessageBox>
namespace Ui {
class tuneWindow;
}

class tuneWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit tuneWindow(QWidget *parent = nullptr);
    void connection_db();
    ~tuneWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::tuneWindow *ui;
};

#endif // TUNEWINDOW_H
