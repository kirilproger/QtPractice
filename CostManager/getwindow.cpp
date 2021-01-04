#include "getwindow.h"
#include "ui_getwindow.h"

getWindow::getWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::getWindow)
{
    ui->setupUi(this);
    nWindow = new statsWindow();
}

getWindow::~getWindow()
{
    delete ui;
}

void getWindow::on_pushButton_clicked()
{
    QString fDate,sDate;
    fDate=ui->firstDayBox->currentText()+"-"+ui->firstMonthBox->currentText()+"-"+ui->firstYearBox->currentText();
    sDate=ui->secondDayBox->currentText()+"-"+ui->secondMonthBox->currentText()+"-"+ui->secondYearBox->currentText();
    nWindow->setDate(fDate,sDate);
    nWindow->show();
}
