#ifndef INPUTWINDOW_H
#define INPUTWINDOW_H

#include <QMainWindow>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QDate>
#include <QTime>
namespace Ui {
class InputWindow;
}

class InputWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit InputWindow(QWidget *parent = nullptr);
    ~InputWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::InputWindow *ui;
};

#endif // INPUTWINDOW_H
