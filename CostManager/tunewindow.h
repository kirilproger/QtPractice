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
class TuneWindow;
}

class TuneWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TuneWindow(QWidget *parent = nullptr);
    void connection_db();
    ~TuneWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TuneWindow *ui;
};

#endif // TUNEWINDOW_H
