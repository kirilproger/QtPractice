#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Quit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_Open_triggered()
{
    statusBar()->showMessage("Open file",2000);
}
