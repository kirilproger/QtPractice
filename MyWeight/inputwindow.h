#ifndef INPUTWINDOW_H
#define INPUTWINDOW_H

#include <QMainWindow>

namespace Ui {
class InputWindow;
}

class InputWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit InputWindow(QWidget *parent = nullptr);
    ~InputWindow();

private:
    Ui::InputWindow *ui;
};

#endif // INPUTWINDOW_H
