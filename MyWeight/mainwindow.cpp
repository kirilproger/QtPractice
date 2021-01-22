#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    default_connection();
    iWindow = new InputWindow();
    oWindow = new OutputWindow();
    tWindow = new tuneWindow();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::default_connection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("myweight");
    db.setUserName("root");
    db.setPassword("");
    db.open();
}

void MainWindow::on_InputButton_clicked()
{
    iWindow->show();
}

void MainWindow::on_ProgressButton_clicked()
{
    oWindow->show();
}

void MainWindow::on_actionConnection_triggered()
{
    tWindow->show();
}
