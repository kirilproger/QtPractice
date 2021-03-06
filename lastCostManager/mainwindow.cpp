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
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addButton_clicked()
{
    sWindow->show();
}
