#-------------------------------------------------
#
# Project created by QtCreator 2016-04-27T10:29:33
#
#-------------------------------------------------

QT       -= gui

TARGET = ha
TEMPLATE = lib

DEFINES += HA_LIBRARY

SOURCES += ha.cpp

HEADERS += ha.h\
        ha_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
