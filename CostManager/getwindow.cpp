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
    fDate=ui->firstDayBox->currentText()+"-"+ui->firstMonthBox->currentText()+"-"+ui->firstYearBox->currentText();
    sDate=ui->secondDayBox->currentText()+"-"+ui->secondMonthBox->currentText()+"-"+ui->secondYearBox->currentText();
    emit sendData(fDate,sDate);
}
