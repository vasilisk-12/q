QT += core
QT -= gui

CONFIG += c++11

TARGET = second_ha
CONFIG += console
CONFIG -= app_bundle
LIBS  += -L"C:\Users\VAsilisk\Desktop\Qt\build-ha-Desktop_Qt_5_6_0_MinGW_32bit-Debug\debug\ha.dll"
TEMPLATE = app

SOURCES += main.cpp
