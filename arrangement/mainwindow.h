#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void resizeEvent(QResizeEvent * /* event */);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
