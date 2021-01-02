#include "addwindow.h"
#include "ui_addwindow.h"

addwindow::addwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addwindow)
{
    ui->setupUi(this);
}

addwindow::~addwindow()
{
    delete ui;
}

void addwindow::on_pushButton_clicked()
{
    QSqlQuery addquery;
    int day=0,month=0,year=0;
    QString name,type;
    int price=0,amount=0;
    day = ui->dayBox->currentText().toInt();
    month = ui->monthBox->currentText().toInt();
    year = ui->yearBox->currentText().toInt();
    name = ui->NameEdit->text();
    type = ui->typeBox->currentText();
    price = ui->PriceEdit->text().toInt();
    amount = ui->AmountEdit->text().toInt();
}
