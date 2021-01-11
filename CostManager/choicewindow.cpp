#include "choicewindow.h"
#include "ui_choicewindow.h"

choiceWindow::choiceWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::choiceWindow)
{
    ui->setupUi(this);
    gWindow = new getWindow();
    cWindow = new chartWindow();
}

choiceWindow::~choiceWindow()
{
    delete ui;
}

void choiceWindow::on_toolButton_clicked()
{
    gWindow->show();
}

void choiceWindow::on_toolButton_2_clicked()
{
    cWindow->show();
}
