#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    iWindow = new InputWindow();
    oWindow = new OutputWindow();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_InputButton_clicked()
{
    iWindow->show();
}

void MainWindow::on_ProgressButton_clicked()
{
    oWindow->show();
}
