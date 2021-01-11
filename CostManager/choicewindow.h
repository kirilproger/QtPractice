#ifndef CHOICEWINDOW_H
#define CHOICEWINDOW_H

#include <QMainWindow>
#include<getwindow.h>
#include<chartwindow.h>
namespace Ui {
class choiceWindow;
}

class choiceWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit choiceWindow(QWidget *parent = nullptr);
    ~choiceWindow();

private slots:
    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

private:
    Ui::choiceWindow *ui;
    getWindow *gWindow;
    chartWindow *cWindow;
};

#endif // CHOICEWINDOW_H
