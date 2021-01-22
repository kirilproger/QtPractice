#include "outputwindow.h"
#include "ui_outputwindow.h"

OutputWindow::OutputWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OutputWindow)
{
    ui->setupUi(this);
    /*QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("myweight");
    db.setUserName("root");
    db.setPassword("");
    db.open();*/
    QVector<int>years;
    QVector<int>months;
    QVector<int>days;
    QVector<double>values;
    QSqlQuery query;
    query.exec("SELECT VALUE,THEDATE FROM weight order by THEDATE");
    while(query.next()){
        double value = query.value(0).toDouble();
        QString date = query.value(1).toString();
        values.push_back(value);
        QString year,month,day;
        year = date.mid(0,4);
        month = date.mid(5,2);
        day = date.mid(8,2);
        years.push_back(year.toInt());
        months.push_back(month.toInt());
        days.push_back(day.toInt());
    }

}

OutputWindow::~OutputWindow()
{
    delete ui;
}
