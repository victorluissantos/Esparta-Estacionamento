#-------------------------------------------------
#
# Project created by QtCreator 2015-05-21T18:27:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Estacionamento
TEMPLATE = app


SOURCES += main.cpp\
        cardapio.cpp \
    controlarquivo.cpp

HEADERS  += cardapio.h \
    config.h \
    controlarquivo.h

FORMS    += cardapio.ui

RESOURCES += \
    resoruce.qrc
