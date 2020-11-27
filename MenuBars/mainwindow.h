#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtGui>
#include<QFileDialog>
#include <QMessageBox>
#include<QPainter>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString fname="D:/images/erjan.jpg";

private slots:
    void on_Quit_triggered();
    void paintEvent(QPaintEvent *event);
    void on_Open_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
