#ifndef ADDWINDOW_H
#define ADDWINDOW_H

#include <QMainWindow>

namespace Ui {
class addwindow;
}

class addwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit addwindow(QWidget *parent = nullptr);
    ~addwindow();

private:
    Ui::addwindow *ui;
};

#endif // ADDWINDOW_H
