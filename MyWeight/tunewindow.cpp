#include "tunewindow.h"
#include "ui_tunewindow.h"

tuneWindow::tuneWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tuneWindow)
{
    ui->setupUi(this);
}

tuneWindow::~tuneWindow()
{
    delete ui;
}

void tuneWindow::connection_db()
{
    QMessageBox result;
    result.setWindowTitle("Result of connection");
    QString hostName = ui->hostEdit->text();
    QString dbName = ui->NameEdit->text();
    QString userName = ui->UserEdit->text();
    QString password = ui->PasswordEdit->text();
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName(hostName);
        db.setDatabaseName(dbName);
        db.setUserName(userName);
        db.setPassword(password);
        if (!db.open()) {
            qDebug() << "Database error occurred";
            result.setText("Ошибка соединения!"+db.lastError().text());
            qDebug() << db.lastError();
        }else{
            qDebug() << "Database connected";
            result.setText("Соединение установлено!");
        }
        result.exec();
        this->close();
}

void tuneWindow::on_pushButton_clicked()
{
    connection_db();
}
