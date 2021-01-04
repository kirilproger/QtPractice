#ifndef STATSWINDOW_H
#define STATSWINDOW_H

#include <QMainWindow>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QSqlError>
namespace Ui {
class statsWindow;
}

class statsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit statsWindow(QWidget *parent = nullptr);
    ~statsWindow();
    void recieveData(QString a,QString b);
private slots:
    void on_pushButton_clicked();

private:
    Ui::statsWindow *ui;
    QString firstDate, secondDate;
};

#endif // STATSWINDOW_H
