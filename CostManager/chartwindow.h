#ifndef CHARTWINDOW_H
#define CHARTWINDOW_H

#include <QMainWindow>
#include<statswindow.h>
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
#include<QBarSet>
#include<QDebug>
#include<QDate>
QT_CHARTS_USE_NAMESPACE
namespace Ui {
class chartWindow;
}

class chartWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit chartWindow(QWidget *parent = nullptr);
    ~chartWindow();

private:
    Ui::chartWindow *ui;
};

#endif // CHARTWINDOW_H
