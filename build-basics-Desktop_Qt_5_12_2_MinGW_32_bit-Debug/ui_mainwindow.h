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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actrest;
    QWidget *centralWidget;
    QToolButton *a11;
    QToolButton *a12;
    QToolButton *a13;
    QToolButton *a22;
    QToolButton *a21;
    QToolButton *a23;
    QToolButton *a32;
    QToolButton *a31;
    QToolButton *a33;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(405, 440);
        actrest = new QAction(MainWindow);
        actrest->setObjectName(QString::fromUtf8("actrest"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        a11 = new QToolButton(centralWidget);
        a11->setObjectName(QString::fromUtf8("a11"));
        a11->setGeometry(QRect(50, 30, 100, 100));
        a11->setIconSize(QSize(100, 100));
        a11->setCheckable(false);
        a12 = new QToolButton(centralWidget);
        a12->setObjectName(QString::fromUtf8("a12"));
        a12->setGeometry(QRect(150, 30, 100, 100));
        a12->setIconSize(QSize(100, 100));
        a12->setCheckable(false);
        a13 = new QToolButton(centralWidget);
        a13->setObjectName(QString::fromUtf8("a13"));
        a13->setGeometry(QRect(250, 30, 100, 100));
        a13->setIconSize(QSize(100, 100));
        a13->setCheckable(false);
        a22 = new QToolButton(centralWidget);
        a22->setObjectName(QString::fromUtf8("a22"));
        a22->setGeometry(QRect(150, 130, 100, 100));
        a22->setIconSize(QSize(100, 100));
        a22->setCheckable(false);
        a21 = new QToolButton(centralWidget);
        a21->setObjectName(QString::fromUtf8("a21"));
        a21->setGeometry(QRect(50, 130, 100, 100));
        a21->setIconSize(QSize(100, 100));
        a21->setCheckable(false);
        a23 = new QToolButton(centralWidget);
        a23->setObjectName(QString::fromUtf8("a23"));
        a23->setGeometry(QRect(250, 130, 100, 100));
        a23->setIconSize(QSize(100, 100));
        a23->setCheckable(false);
        a32 = new QToolButton(centralWidget);
        a32->setObjectName(QString::fromUtf8("a32"));
        a32->setGeometry(QRect(150, 230, 100, 100));
        a32->setIconSize(QSize(100, 100));
        a32->setCheckable(false);
        a31 = new QToolButton(centralWidget);
        a31->setObjectName(QString::fromUtf8("a31"));
        a31->setGeometry(QRect(50, 230, 100, 100));
        a31->setIconSize(QSize(100, 100));
        a31->setCheckable(false);
        a33 = new QToolButton(centralWidget);
        a33->setObjectName(QString::fromUtf8("a33"));
        a33->setGeometry(QRect(250, 230, 100, 100));
        a33->setIconSize(QSize(100, 100));
        a33->setCheckable(false);
        a33->setChecked(false);
        a33->setAutoRepeat(false);
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

        mainToolBar->addAction(actrest);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actrest->setText(QApplication::translate("MainWindow", "RESTART", nullptr));
        a11->setText(QApplication::translate("MainWindow", "...", nullptr));
        a12->setText(QApplication::translate("MainWindow", "...", nullptr));
        a13->setText(QApplication::translate("MainWindow", "...", nullptr));
        a22->setText(QApplication::translate("MainWindow", "...", nullptr));
        a21->setText(QApplication::translate("MainWindow", "...", nullptr));
        a23->setText(QApplication::translate("MainWindow", "...", nullptr));
        a32->setText(QApplication::translate("MainWindow", "...", nullptr));
        a31->setText(QApplication::translate("MainWindow", "...", nullptr));
        a33->setText(QApplication::translate("MainWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
