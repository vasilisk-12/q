QT += core
QT -= gui

CONFIG += c++11

TARGET = second_ha
CONFIG += console
CONFIG -= app_bundle
LIBS  += -L"C:\Users\VAsilisk\Desktop\Qt\cpp\second_ha\ha.dll"
TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    ha.h \
    ha_global.h
