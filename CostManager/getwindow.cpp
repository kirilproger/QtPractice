#include "getwindow.h"
#include "ui_getwindow.h"
#include<QDebug>
getWindow::getWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::getWindow)
{
    ui->setupUi(this);
    nWindow = new statsWindow();
    connect(ui->pushButton, &QAbstractButton::clicked, this, &getWindow::onButtonSend);
    connect(this, &getWindow::sendData, nWindow, &statsWindow::recieveData);
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

getWindow::~getWindow()
{
    delete ui;
}

void getWindow::on_pushButton_clicked()
{
    nWindow->show();
}
void getWindow::onButtonSend(){
    QString fDate,sDate;
    fDate=ui->firstYearBox->currentText()+"-"+ui->firstMonthBox->currentText()+"-"+ui->firstDayBox->currentText();
    sDate=ui->secondYearBox->currentText()+"-"+ui->secondMonthBox->currentText()+"-"+ui->secondDayBox->currentText();
    emit sendData(fDate,sDate);
}
