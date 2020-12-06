/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *namedLabel;
    QLabel *lookInLabel;
    QLineEdit *namedLineEdit;
    QLineEdit *lookInLineEdit;
    QCheckBox *subfoldersCheckBox;
    QTableWidget *tableWidget;
    QPushButton *findButton;
    QPushButton *stopButton;
    QPushButton *closeButton;
    QPushButton *helpButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(388, 289);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        namedLabel = new QLabel(centralWidget);
        namedLabel->setObjectName(QString::fromUtf8("namedLabel"));
        namedLabel->setGeometry(QRect(20, 10, 47, 13));
        lookInLabel = new QLabel(centralWidget);
        lookInLabel->setObjectName(QString::fromUtf8("lookInLabel"));
        lookInLabel->setGeometry(QRect(20, 40, 47, 13));
        namedLineEdit = new QLineEdit(centralWidget);
        namedLineEdit->setObjectName(QString::fromUtf8("namedLineEdit"));
        namedLineEdit->setGeometry(QRect(70, 10, 221, 20));
        lookInLineEdit = new QLineEdit(centralWidget);
        lookInLineEdit->setObjectName(QString::fromUtf8("lookInLineEdit"));
        lookInLineEdit->setGeometry(QRect(70, 40, 221, 20));
        subfoldersCheckBox = new QCheckBox(centralWidget);
        subfoldersCheckBox->setObjectName(QString::fromUtf8("subfoldersCheckBox"));
        subfoldersCheckBox->setGeometry(QRect(20, 70, 131, 17));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 100, 271, 121));
        findButton = new QPushButton(centralWidget);
        findButton->setObjectName(QString::fromUtf8("findButton"));
        findButton->setGeometry(QRect(300, 10, 75, 23));
        stopButton = new QPushButton(centralWidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setGeometry(QRect(300, 40, 75, 23));
        closeButton = new QPushButton(centralWidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(300, 70, 75, 23));
        helpButton = new QPushButton(centralWidget);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setGeometry(QRect(300, 200, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        namedLabel->setText(QApplication::translate("MainWindow", "Named:", nullptr));
        lookInLabel->setText(QApplication::translate("MainWindow", "Look in:", nullptr));
        subfoldersCheckBox->setText(QApplication::translate("MainWindow", "Include subfolders", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "In Folder", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Size", nullptr));
        findButton->setText(QApplication::translate("MainWindow", "Find", nullptr));
        stopButton->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        closeButton->setText(QApplication::translate("MainWindow", "Close", nullptr));
        helpButton->setText(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
