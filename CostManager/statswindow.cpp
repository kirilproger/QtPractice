#include "statswindow.h"
#include "ui_statswindow.h"

statsWindow::statsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::statsWindow)
{
    ui->setupUi(this);

}

statsWindow::~statsWindow()
{
    delete ui;
}

void statsWindow::on_pushButton_clicked()
{
    this->close();
}

void statsWindow::setDate(QString a, QString b){
    this->firstDate=a;
    this->secondDate=b;
}
