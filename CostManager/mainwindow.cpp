#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("localhost");
        db.setDatabaseName("testbase");
        db.setUserName("root");
        db.setPassword("");
        if (!db.open()) {
            qDebug() << "Database error occurred";
            qDebug() << db.lastError();
        }else{
            qDebug() << "Database connected!!!!";
        }

}

MainWindow::~MainWindow()
{
    delete ui;
}
