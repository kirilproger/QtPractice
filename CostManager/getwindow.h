#ifndef GETWINDOW_H
#define GETWINDOW_H

#include <QMainWindow>

namespace Ui {
class getWindow;
}

class getWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit getWindow(QWidget *parent = nullptr);
    ~getWindow();

private:
    Ui::getWindow *ui;
};

#endif // GETWINDOW_H
