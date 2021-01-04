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
}
