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
    ui->a12->setIcon(white);
    ui->a13->setIcon(white);
    ui->a21->setIcon(white);
    ui->a22->setIcon(white);
    ui->a23->setIcon(white);
    ui->a31->setIcon(white);
    ui->a32->setIcon(white);
    ui->a33->setIcon(white);
    connect(ui->a11,&QPushButton::clicked,this,&MainWindow::btnClicked);
    connect(ui->a12,&QPushButton::clicked,this,&MainWindow::btnClicked);
    connect(ui->a13,&QPushButton::clicked,this,&MainWindow::btnClicked);
    connect(ui->a21,&QPushButton::clicked,this,&MainWindow::btnClicked);
    connect(ui->a22,&QPushButton::clicked,this,&MainWindow::btnClicked);
    connect(ui->a23,&QPushButton::clicked,this,&MainWindow::btnClicked);
    connect(ui->a31,&QPushButton::clicked,this,&MainWindow::btnClicked);
    connect(ui->a32,&QPushButton::clicked,this,&MainWindow::btnClicked);
    connect(ui->a33,&QPushButton::clicked,this,&MainWindow::btnClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::btnClicked(){
     QToolButton* buttonSender = qobject_cast<QToolButton*>(sender());
    /*if(!buttonSender->isChecked()){
        return;
    }*/
     QPixmap pix2(":/res/winzero.png");
     QIcon winzero(pix2);
     QPixmap pix3(":/res/wincross.png");
     QIcon wincross(pix3);
     if(btns[buttonSender]>0){
        return;
     }
    if(k%2==0){
        QPixmap pix1(":/res/cross.png");
        QIcon cross(pix1);
        buttonSender->setIcon(cross);
        btns[buttonSender]=2;
    }else{
        QPixmap pix1(":/res/zero.png");
        QIcon zero(pix1);
        buttonSender->setIcon(zero);
        btns[buttonSender]=1;
    }
    if(btns[ui->a11]>0 && btns[ui->a11]==btns[ui->a12] && btns[ui->a12]==btns[ui->a13]){
        if(btns[ui->a11]==1){
            ui->a11->setIcon(winzero);
            ui->a12->setIcon(winzero);
            ui->a13->setIcon(winzero);
        }else{
            ui->a11->setIcon(wincross);
            ui->a12->setIcon(wincross);
            ui->a13->setIcon(wincross);
        }
    }

    k++;
}

