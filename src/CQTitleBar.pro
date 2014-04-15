TEMPLATE = lib

TARGET = CQTitleBar

DEPENDPATH += .

QT += widgets

CONFIG += staticlib

# Input
HEADERS += \
../include/CQTitleBar.h

SOURCES += \
CQTitleBar.cpp

OBJECTS_DIR = ../obj

DESTDIR = ../lib

INCLUDEPATH += . ../include
