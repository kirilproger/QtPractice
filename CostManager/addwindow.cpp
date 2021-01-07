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
    double price=0,amount=0;
    day = ui->dayBox->currentText();
    month = ui->monthBox->currentText();
    year = ui->yearBox->currentText();
    name = ui->NameEdit->text();
    type = ui->typeBox->currentText();
    price = ui->PriceEdit->text().toDouble();
    amount = ui->AmountEdit->text().toDouble();
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

void addwindow::on_pushButton_2_clicked()
{
    QSqlQuery lastindex;
    lastindex.exec("SELECT MAX(ID) FROM income");
    int lidx;
    lastindex.first();
    lidx=lastindex.value(0).toInt()+1;
    QSqlQuery addtotal;
    QString day,month,year;
    QString description;
    double total=0;
    day = ui->dayBox_2->currentText();
    month = ui->monthBox_2->currentText();
    year = ui->yearBox_2->currentText();
    description = ui->aboutLine->text();
    total = ui->totalLine->text().toDouble();
    addtotal.prepare("INSERT INTO income (ID,THEDATE,TOTAL,ABOUT)"
                     "VALUES(:ID, :THEDATE, :TOTAL, :ABOUT)");
    addtotal.bindValue(":ID",lidx);
    addtotal.bindValue(":THEDATE",year+"-"+month+"-"+day);
    addtotal.bindValue(":TOTAL",total);
    addtotal.bindValue(":ABOUT",description);
    addtotal.exec();
    qDebug()<<lidx<<" "<<description<<" "<<year+"-"+month+"-"+day;
}
