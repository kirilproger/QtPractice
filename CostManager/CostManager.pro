#-------------------------------------------------
#
# Project created by QtCreator 2020-12-24T12:36:34
#
#-------------------------------------------------

QT       += core gui
QT += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CostManager
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        addwindow.cpp \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        addwindow.h \
        mainwindow.h

FORMS += \
        addwindow.ui \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    rec.qrc

win32: LIBS += -L$$PWD/../../../../Downloads/mysql-connector-odbc-noinstall-8.0.22-winx64/mysql-connector-odbc-noinstall-8.0.22-winx64/lib/ -lmyodbc8a

INCLUDEPATH += $$PWD/../../../../Downloads/mysql-connector-odbc-noinstall-8.0.22-winx64/mysql-connector-odbc-noinstall-8.0.22-winx64
DEPENDPATH += $$PWD/../../../../Downloads/mysql-connector-odbc-noinstall-8.0.22-winx64/mysql-connector-odbc-noinstall-8.0.22-winx64

win32: LIBS += -L$$PWD/../../../../Downloads/mysql-connector-c-6.1.2-winx64/mysql-connector-c-6.1.2-winx64/lib/ -llibmysql

INCLUDEPATH += $$PWD/../../../../Downloads/mysql-connector-c-6.1.2-winx64/mysql-connector-c-6.1.2-winx64/include
DEPENDPATH += $$PWD/../../../../Downloads/mysql-connector-c-6.1.2-winx64/mysql-connector-c-6.1.2-winx64/include
