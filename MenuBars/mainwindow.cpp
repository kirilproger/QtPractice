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

void MainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.drawPixmap(0,44,QPixmap(fname));
    resize(QPixmap(fname).width(),QPixmap(fname).height());
}
void MainWindow::on_Quit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_Open_triggered()
{
    statusBar()->showMessage("Open file",2000);
    QString filename = QFileDialog::getOpenFileName(this,"Open Dialog"," ","*.jpg *.png");
    QMessageBox::warning(this,"Внимание",QString("Вы открыли файл "+filename));
    fname = filename;
    repaint();
}
