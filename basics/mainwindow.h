#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QIcon>
#include <QPixmap>
#include<QPushButton>
#include<vector>
#include<map>
#include<iostream>
#include<string>
#include<QMap>
#include<QToolButton>
using namespace std;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    int k=0;
    QMap<QWidget*,int>btns;
    //vector<bool>btns={0,0,0,0,0,0,0,0,0};
    //map<string,bool>mp={{"a11",0},{"a12",0},{"a13",0},
    //                   {"a21",0},{"a22",0},{"a23",0},
    //                   {"a31",0},{"a32",0},{"a33",0}};
private slots:
    void btnClicked();
};

#endif // MAINWINDOW_H
