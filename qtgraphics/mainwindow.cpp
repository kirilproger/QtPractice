#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QLinearGradient gradient(50,100,300,350);
    gradient.setColorAt(0.0,Qt::white);
}

MainWindow::~MainWindow()
{
    delete ui;
}
