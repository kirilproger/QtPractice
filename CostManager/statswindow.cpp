#include "statswindow.h"
#include "ui_statswindow.h"
#include<QDebug>
statsWindow::statsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::statsWindow)
{
    ui->setupUi(this);
    ui->periodLabel->setText(this->firstDate+"-"+this->secondDate);


}

statsWindow::~statsWindow()
{
    delete ui;
}

void statsWindow::on_pushButton_clicked()
{
    this->close();
}

void statsWindow::recieveData(QString a,QString b){
    ui->periodLabel->setText(a+"---"+b);
    QSqlQuery query;
    query.exec("SELECT SUM(COST) FROM spending WHERE THEDATE >= '"+a+"' AND THEDATE <= '"+b+"'");
    query.first();
    double num = query.value(0).toDouble();
    if(num==NULL){
        ui->SumCost->setText("0");
    }else{
        ui->SumCost->setText(query.value(0).toString());
    }
    query.exec("SELECT SUM(COST) FROM spending WHERE THEDATE >= '"+a+"' AND THEDATE <= '"+b+"' AND TYPE= 'продукты'");
    query.first();
    num = query.value(0).toDouble();
    if(num==NULL){
        ui->SumCost->setText("0");
    }else{
        ui->ProdCost->setText(query.value(0).toString());
    }
    query.exec("SELECT SUM(TOTAL) FROM income WHERE THEDATE >= '"+a+"' AND THEDATE <= '"+b+"'");
    query.first();
    num = query.value(0).toDouble();
    if(num==NULL){
        ui->SumCost->setText("0");
    }else{
        ui->TotalCost->setText(query.value(0).toString());
    }
}
