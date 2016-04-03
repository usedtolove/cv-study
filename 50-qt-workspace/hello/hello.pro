QT += core
QT -= gui

CONFIG += c++11

TARGET = untitled
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

INCLUDEPATH += E:\opensource\lib\opencv\target\install\include

LIBS += E:\opensource\lib\opencv\target\install\x86\mingw\lib\libopencv_core310.dll.a
LIBS += E:\opensource\lib\opencv\target\install\x86\mingw\lib\libopencv_imgcodecs310.dll.a
LIBS += E:\opensource\lib\opencv\target\install\x86\mingw\lib\libopencv_highgui310.dll.a

SOURCES += main.cpp
