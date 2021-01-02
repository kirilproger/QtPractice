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
    QSqlQuery lastindex;
    lastindex.exec("SELECT MAX(ID) FROM spending");
    int lidx;
    lastindex.first();
    lidx=lastindex.value(0).toInt()+1;
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
    addquery.prepare("INSERT INTO spending (ID,THEDATE,NAME,PRICE,AMOUNT,COST,TYPE)"
                     "VALUES(:ID, :THEDATE, :NAME, :PRICE, :AMOUNT,:COST, :TYPE)");
    addquery.bindValue(":ID",lidx);
    addquery.bindValue(":NAME",name);
    addquery.bindValue(":THEDATE",year+"-"+month+"-"+day);
    addquery.bindValue(":PRICE",price);
    addquery.bindValue(":AMOUNT",amount);
    addquery.bindValue(":COST",price*amount);
    addquery.bindValue(":TYPE",type);
    addquery.exec();
}
