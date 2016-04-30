#-------------------------------------------------
#
# Project created by QtCreator 2016-04-27T22:27:51
#
#-------------------------------------------------

QT       -= gui

TARGET = halib
TEMPLATE = lib

DEFINES += HALIB_LIBRARY

SOURCES += halib.cpp

HEADERS += halib.h\
        halib_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
