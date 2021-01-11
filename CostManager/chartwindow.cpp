#include "chartwindow.h"
#include "ui_chartwindow.h"
#include<QDebug>
chartWindow::chartWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chartWindow)
{
    ui->setupUi(this);
    QBarSet *set0 = new QBarSet("Расход");
    QBarSet *set1 = new QBarSet("Приход");
    *set0 << 1 << 2 << 3 << 4 << 5 << 6 << 1 << 2 << 3 << 4 << 5 << 6;
    *set1 << 5 << 0 << 0 << 4 << 0 << 7 << 1 << 2 << 3 << 4 << 5 << 6;
    QBarSeries *series = new QBarSeries();
    series->append(set0);
    series->append(set1);
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Simple barchart example");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    QStringList categories;
    categories << "ЯНВАРЬ" << "ФЕВРАЛЬ" << "МАРТ" << "АПРЕЛЬ" << "МАЙ" << "ИЮНЬ"
                  << "ИЮЛЬ" << "АВГУСТ" << "СЕНТЯБРЬ" << "ОКТЯБРЬ" << "НОЯБРЬ" << "ДЕКАБРЬ";
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0,15);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    this->setCentralWidget(chartView);
}

chartWindow::~chartWindow()
{
    delete ui;
}
