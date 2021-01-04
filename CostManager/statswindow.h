#ifndef STATSWINDOW_H
#define STATSWINDOW_H

#include <QMainWindow>

namespace Ui {
class statsWindow;
}

class statsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit statsWindow(QWidget *parent = nullptr);
    ~statsWindow();
    void setDate(QString a, QString b);

private slots:
    void on_pushButton_clicked();

private:
    Ui::statsWindow *ui;
    QString firstDate, secondDate;
};

#endif // STATSWINDOW_H
