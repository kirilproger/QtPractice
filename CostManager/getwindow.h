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
signals:
    void sendData(QString a,QString b);
private slots:
    void on_pushButton_clicked();
    void onButtonSend();

private:
    Ui::getWindow *ui;
    statsWindow *nWindow;
};

#endif // GETWINDOW_H
