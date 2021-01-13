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
        QVector<double>incomes(12);
        for(int i=1;i<13;i++){
            QString iday;
            if(i<10){
                iday="0";
                iday+=(i+'0');
            }else{
                iday=QString::number(i);
            }
            QSqlQuery query;
            query.exec("SELECT SUM(COST) FROM spending WHERE THEDATE >= '"+nowdate+"-"+iday+"-01' AND THEDATE <= '"+nowdate+"-"+iday+"-31'");
            query.first();
            double num = query.value(0).toDouble();
            if(num==NULL){
                months[i-1]=0;
            }else{
                months[i-1]=query.value(0).toDouble();
            }
            //qDebug()<<months[i-1]<<endl;
            if(maxcost<months[i-1])maxcost=months[i-1];
            //income
            query.exec("SELECT SUM(TOTAL) FROM income WHERE THEDATE >= '"+nowdate+"-"+iday+"-01' AND THEDATE <= '"+nowdate+"-"+iday+"-31'");
            query.first();
            num = query.value(0).toDouble();
            if(num==NULL){
                incomes[i-1]=0;
            }else{
                incomes[i-1]=query.value(0).toDouble();
            }
            //qDebug()<<months[i-1]<<endl;
            if(maxcost<incomes[i-1])maxcost=incomes[i-1];
        }
        QBarSet *set0 = new QBarSet("Расход");
        QBarSet *set1 = new QBarSet("Приход");
        *set0 << months[0] << months[1] << months[2] << months[3] << months[4] << months[5] << months[6]
              << months[7] << months[8] << months[9] << months[10] << months[11];
        *set1 << incomes[0] << incomes[1] << incomes[2] << incomes[3] << incomes[4] << incomes[5] << incomes[6]
              << incomes[7] << incomes[8] << incomes[9] << incomes[10] << incomes[11];
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
