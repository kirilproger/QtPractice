#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setMinimumSize(265,200);
    resize(365,240);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent * /* event */)
{
    int extraWidth = width() - minimumWidth();
    int extraHeight = height() - minimumHeight();
    ui->namedLabel->setGeometry(9,9,50,25);
    ui->namedLineEdit->setGeometry(65,9,100+extraWidth,25);
    ui->lookInLabel->setGeometry(9,40,50,25);
    ui->lookInLineEdit->setGeometry(65,40,100+extraWidth,25);
    ui->subfoldersCheckBox->setGeometry(9,71,156+extraWidth,23);
    ui->tableWidget->setGeometry(9,100,156+extraWidth,50+extraHeight);
    ui->findButton->setGeometry(171+extraWidth,9,85,32);
    ui->stopButton->setGeometry(171+extraWidth,47,85,32);
    ui->closeButton->setGeometry(171+extraWidth,84,85,32);
    ui->helpButton->setGeometry(171+extraWidth,149+extraHeight,85,32);
}
