#-------------------------------------------------
#
# Project created by QtCreator 2018-11-16T09:05:31
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = projet
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    gestionnaireanki.cpp \
    administrateur.cpp \
    utilisateur.cpp \
    carte.cpp \
    jeudecartes.cpp

HEADERS += \
    gestionnaireanki.h \
    utilisateur.h \
    carte.h \
    administrateur.h \
    jeudecartes.h
