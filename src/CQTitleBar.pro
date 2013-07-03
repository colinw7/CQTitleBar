TEMPLATE = lib

TARGET = 

DEPENDPATH += .

CONFIG += staticlib

# Input
HEADERS += \
../include/CQTitleBar.h

SOURCES += \
CQTitleBar.cpp

OBJECTS_DIR = ../obj

DESTDIR = ../lib

INCLUDEPATH += . ../include
