#include "getwindow.h"
#include "ui_getwindow.h"

getWindow::getWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::getWindow)
{
    ui->setupUi(this);
}

getWindow::~getWindow()
{
    delete ui;
}
