#ifndef GETWINDOW_H
#define GETWINDOW_H

#include <QMainWindow>
#include<statswindow.h>
#include<chartwindow.h>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>

QT_CHARTS_USE_NAMESPACE
namespace Ui {
class getWindow;
}

class getWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit getWindow(QWidget *parent = nullptr);
    ~getWindow();
signals:
    void sendData(QString a,QString b);
private slots:
    void on_pushButton_clicked();
    void onButtonSend();

private:
    Ui::getWindow *ui;
    statsWindow *nWindow;
};

#endif // GETWINDOW_H
