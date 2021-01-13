#include "chartwindow.h"
#include "ui_chartwindow.h"
chartWindow::chartWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chartWindow)
{
    ui->setupUi(this);
}

chartWindow::~chartWindow()
{
    delete ui;
}

void chartWindow::showchart()
{
    double maxcost=0;
        QString nowdate=QDate::currentDate().toString("yyyy");
        QVector<double>months(12);
        for(int i=1;i<13;i++){
            QString iday;
            if(i<10){
                iday="0";
                iday+=(i+'0');
            }else{
                iday=QString::number(i);
            }
            QSqlQuery query;
            query.exec("SELECT SUM(COST) FROM spending WHERE THEDATE >= "+nowdate+"-"+iday+"-01 AND THEDATE <= "+nowdate+"-"+iday+"-31");
            query.first();
            double num = query.value(0).toDouble();
            if(num==NULL){
                months[i-1]=0;
            }else{
                months[i-1]=query.value(0).toDouble();
            }
            qDebug()<<months[i-1]<<endl;
            if(maxcost<months[i-1])maxcost=months[i-1];
        }
        QBarSet *set0 = new QBarSet("Расход");
        QBarSet *set1 = new QBarSet("Приход");
        *set0 << months[0] << months[1] << months[2] << months[3] << months[4] << months[5] << months[6]
              << months[7] << months[8] << months[9] << months[10] << months[11];
        *set1 << 5 << 0 << 0 << 4 << 0 << 7 << 1 << 2 << 3 << 4 << 5 << 6;
        QBarSeries *series = new QBarSeries();
        series->append(set0);
        series->append(set1);
        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("График расходов и прихода в "+nowdate);
        chart->setAnimationOptions(QChart::SeriesAnimations);
        QStringList categories;
        categories << "ЯНВАРЬ" << "ФЕВРАЛЬ" << "МАРТ" << "АПРЕЛЬ" << "МАЙ" << "ИЮНЬ"
                      << "ИЮЛЬ" << "АВГУСТ" << "СЕНТЯБРЬ" << "ОКТЯБРЬ" << "НОЯБРЬ" << "ДЕКАБРЬ";
        QBarCategoryAxis *axisX = new QBarCategoryAxis();
        axisX->append(categories);
        chart->addAxis(axisX, Qt::AlignBottom);
        series->attachAxis(axisX);

        QValueAxis *axisY = new QValueAxis();
        axisY->setRange(0,maxcost+100);
        chart->addAxis(axisY, Qt::AlignLeft);
        series->attachAxis(axisY);
        chart->legend()->setVisible(true);
        chart->legend()->setAlignment(Qt::AlignBottom);
        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);
        this->setCentralWidget(chartView);
}
