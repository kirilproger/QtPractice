#ifndef ADDWINDOW_H
#define ADDWINDOW_H

#include <QMainWindow>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QSqlError>
namespace Ui {
class addwindow;
}

class addwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit addwindow(QWidget *parent = nullptr);
    ~addwindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addwindow *ui;
};

#endif // ADDWINDOW_H
