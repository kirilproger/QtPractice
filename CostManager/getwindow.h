#ifndef GETWINDOW_H
#define GETWINDOW_H

#include <QMainWindow>
#include<statswindow.h>
namespace Ui {
class getWindow;
}

class getWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit getWindow(QWidget *parent = nullptr);
    ~getWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::getWindow *ui;
    statsWindow *nWindow;
};

#endif // GETWINDOW_H
