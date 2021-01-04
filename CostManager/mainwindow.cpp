#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->addButton->setIcon(QIcon(":/res/img/add.png"));
    ui->getButton->setIcon(QIcon(":/res/img/get.png"));
    ui->tuneButton->setIcon(QIcon(":/res/img/tune.png"));
    sWindow = new addwindow();
    tWindow = new TuneWindow();
    gWindow = new getWindow();
    default_connection();
    QSqlQuery query;
    query.exec("CREATE TABLE SPENDING(ID INT,THEDATE DATE,NAME VARCHAR(20),PRICE DOUBLE, AMOUNT DOUBLE,COST DOUBLE,TYPE VARCHAR(20), PRIMARY KEY(ID))");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::default_connection(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("testbase");
    db.setUserName("root");
    db.setPassword("");
    if (!db.open()) {
        qDebug() << "Database error occurred";
        qDebug() << db.lastError();
    }else{
        qDebug() << "Database connected";
    }
}

void MainWindow::on_addButton_clicked()
{
    sWindow->show();
}

void MainWindow::on_tuneButton_clicked()
{
    tWindow->show();
}

void MainWindow::on_getButton_clicked()
{
    gWindow->show();
}
