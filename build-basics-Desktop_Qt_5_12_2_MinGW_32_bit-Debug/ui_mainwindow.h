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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *a11;
    QPushButton *a12;
    QPushButton *a13;
    QPushButton *a21;
    QPushButton *a22;
    QPushButton *a23;
    QPushButton *a31;
    QPushButton *a32;
    QPushButton *a33;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(405, 440);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        a11 = new QPushButton(centralWidget);
        a11->setObjectName(QString::fromUtf8("a11"));
        a11->setGeometry(QRect(50, 40, 100, 100));
        a11->setIconSize(QSize(100, 100));
        a12 = new QPushButton(centralWidget);
        a12->setObjectName(QString::fromUtf8("a12"));
        a12->setGeometry(QRect(150, 40, 100, 100));
        a13 = new QPushButton(centralWidget);
        a13->setObjectName(QString::fromUtf8("a13"));
        a13->setGeometry(QRect(250, 40, 100, 100));
        a21 = new QPushButton(centralWidget);
        a21->setObjectName(QString::fromUtf8("a21"));
        a21->setGeometry(QRect(50, 140, 100, 100));
        a22 = new QPushButton(centralWidget);
        a22->setObjectName(QString::fromUtf8("a22"));
        a22->setGeometry(QRect(150, 140, 100, 100));
        a23 = new QPushButton(centralWidget);
        a23->setObjectName(QString::fromUtf8("a23"));
        a23->setGeometry(QRect(250, 140, 100, 100));
        a31 = new QPushButton(centralWidget);
        a31->setObjectName(QString::fromUtf8("a31"));
        a31->setGeometry(QRect(50, 240, 100, 100));
        a32 = new QPushButton(centralWidget);
        a32->setObjectName(QString::fromUtf8("a32"));
        a32->setGeometry(QRect(150, 240, 100, 100));
        a33 = new QPushButton(centralWidget);
        a33->setObjectName(QString::fromUtf8("a33"));
        a33->setGeometry(QRect(250, 240, 100, 100));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 405, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        a11->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        a12->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        a13->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        a21->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        a22->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        a23->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        a31->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        a32->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        a33->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
