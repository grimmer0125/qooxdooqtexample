#-------------------------------------------------
#
# Project created by QtCreator 2016-11-27T20:23:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qttest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += widgets
    QT += webkitwidgets
} else {
    QT += webkit
}

OTHER_FILES += \
    test.html \
    index.js
