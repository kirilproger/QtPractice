#include "tunewindow.h"
#include "ui_tunewindow.h"

TuneWindow::TuneWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TuneWindow)
{
    ui->setupUi(this);
}

TuneWindow::~TuneWindow()
{
    delete ui;
}

void TuneWindow::connection_db()
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

void TuneWindow::on_pushButton_clicked()
{
    connection_db();
}
