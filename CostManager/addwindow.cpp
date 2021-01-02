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
    QString day,month,year;
    QString name,type;
    int price=0,amount=0;
    day = ui->dayBox->currentText();
    month = ui->monthBox->currentText();
    year = ui->yearBox->currentText();
    name = ui->NameEdit->text();
    type = ui->typeBox->currentText();
    price = ui->PriceEdit->text().toInt();
    amount = ui->AmountEdit->text().toInt();
    addquery.prepare("INSERT INTO spending (ID,THEDATE,NAME,PRICE,AMOUNT,TYPE)"
                     "VALUES(:ID, :THEDATE, :NAME, :PRICE, :AMOUNT, :TYPE)");
    addquery.bindValue(":ID",2);
    addquery.bindValue(":NAME",name);
    addquery.bindValue(":THEDATE",year+"-"+month+"-"+day);
    addquery.bindValue(":PRICE",price);
    addquery.bindValue(":AMOUNT",amount);
    addquery.bindValue(":TYPE",type);
    addquery.exec();
}
