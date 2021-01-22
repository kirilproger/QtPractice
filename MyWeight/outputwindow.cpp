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
    QVector<QDateTime>dates;
    query.exec("SELECT VALUE,THEDATE FROM weight order by THEDATE");
    while(query.next()){
        double value = query.value(0).toDouble();
        QString date = query.value(1).toString();
        QDateTime temp = QDateTime::fromString(date,"yyyy-MM-dd");
        //qDebug()<<temp<<endl;
        //qDebug()<<temp<<endl;
        dates.push_back(temp);
        values.push_back(value);
        /*QString year,month,day;
        year = date.mid(0,4);
        month = date.mid(5,2);
        day = date.mid(8,2);
        years.push_back(year.toInt());
        months.push_back(month.toInt());
        days.push_back(day.toInt());
        */
    }
    QLineSeries *series = new QLineSeries();
    for(int i=0;i<dates.size();i++){
        series->append(dates[i].toMSecsSinceEpoch(),values[i]);
        //qDebug()<<dates[i]<<" "<<values[i]<<endl;
    }
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->legend()->hide();
    chart->setTitle("Weight graph");

    QDateTimeAxis *axisX = new QDateTimeAxis;
    axisX->setTickCount(dates.size());
    axisX->setFormat("dd MMM");
    axisX->setTitleText("Date");
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis;
    axisY->setLabelFormat("%i");
    axisY->setTitleText("Weight");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    this->setCentralWidget(chartView);

}

OutputWindow::~OutputWindow()
{
    delete ui;
}
