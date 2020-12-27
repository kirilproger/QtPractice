#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->addButton->setIcon(QIcon(":/rec/img/add.png"));
    ui->getButton->setIcon(QIcon(":/rec/img/get.png"));
    ui->tuneButton->setIcon(QIcon(":/rec/img/tune.png"));
    sWindow = new AddWindow();
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("testbase");
    if(db.open()){qDebug()<<"Database opened!";}
    else{qDebug() << db.lastError().text();}
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addButton_clicked()
{
    sWindow->show();
}
