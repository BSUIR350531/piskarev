#-------------------------------------------------
#
# Project created by QtCreator 2015-10-14T16:09:38
#
#-------------------------------------------------

QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = crossfit
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    newwoddialog.cpp \
    workplace.cpp \
    tabataroundwidget.cpp \
    journal.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    newwoddialog.h \
    workplace.h \
    tabataroundwidget.h \
    journal.h

FORMS    += mainwindow.ui \
    dialog.ui \
    newwoddialog.ui \
    workplace.ui \
    tabataroundwidget.ui \
    journal.ui

RESOURCES += \
    resourcefile.qrc
