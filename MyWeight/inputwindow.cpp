#include "inputwindow.h"
#include "ui_inputwindow.h"

InputWindow::InputWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InputWindow)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("myweight");
    db.setUserName("root");
    db.setPassword("");
    db.open();
    QSqlQuery createTable;
    createTable.exec("CREATE TABLE weight(ID int, THEDATE date NOT NULL, VALUE double NOT NULL, UNIQUE(THEDATE),PRIMARY KEY(ID))");
}

InputWindow::~InputWindow()
{
    delete ui;
}

void InputWindow::on_pushButton_clicked()
{
    double value = ui->lineEdit->text().toDouble();
    if(value!=NULL){
    QDate cd = QDate::currentDate();
    QString now = cd.toString("yyyy-MM-dd");
    QSqlQuery lastindex;
    lastindex.exec("SELECT MAX(ID) FROM weight");
    int lidx;
    lastindex.first();
    lidx=lastindex.value(0).toInt()+1;
    QSqlQuery addquery;
    addquery.prepare("INSERT INTO weight (ID,THEDATE,VALUE)"
                         "VALUES(:ID, :THEDATE, :VALUE)");
        addquery.bindValue(":ID",lidx);
        addquery.bindValue(":THEDATE",now);
        addquery.bindValue(":VALUE",value);
        addquery.exec();
    }
}
