#-------------------------------------------------
#
# Project created by QtCreator 2016-09-03T09:58:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VocabularyNgDesktop
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    newworddialog.cpp \
    settingsdialog.cpp \
    choosevocabdialog.cpp \
    searchdialog.cpp \
    rewriteworddialog.cpp

HEADERS  += mainwindow.h \
    newworddialog.h \
    searchdialog.h \
    settingsdialog.h \
    choosevocabdialog.h \
    rewriteworddialog.h

FORMS    += mainwindow.ui \
    newworddialog.ui \
    modifyvocablistdialog.ui \
    newvocabdialog.ui \
    settingsdialog.ui \
    choosevocabdialog.ui \
    searchdialog.ui \
    rewriteworddialog0.ui \
    rewriteworddialog.ui

RESOURCES += \
    icons.qrc
