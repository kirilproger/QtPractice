#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix1(":/res/white.png");
    QIcon white(pix1);
    ui->a11->setIcon(white);
}

MainWindow::~MainWindow()
{
    delete ui;
}
