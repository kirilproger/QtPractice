#ifndef OUTPUTWINDOW_H
#define OUTPUTWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include<QBarSet>
#include<QDateTime>
#include <QtCharts/QDateTimeAxis>
QT_CHARTS_USE_NAMESPACE
namespace Ui {
class OutputWindow;
}

class OutputWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit OutputWindow(QWidget *parent = nullptr);
    ~OutputWindow();

private:
    Ui::OutputWindow *ui;
};

#endif // OUTPUTWINDOW_H
