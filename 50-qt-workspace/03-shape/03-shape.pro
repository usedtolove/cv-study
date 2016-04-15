QT += core
QT -= gui

CONFIG += c++11

TARGET = helloOpencv
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

#自定义openCV3 install 路径
MY_LAST_BUILD = E:\openCV3\opencv\lastBuild
INCLUDEPATH += $${MY_LAST_BUILD}\include

MY_LIB = $${MY_LAST_BUILD}\x86\mingw\lib
LIBS += $${MY_LIB}\libopencv_core310.dll.a
LIBS += $${MY_LIB}\libopencv_imgcodecs310.dll.a
LIBS += $${MY_LIB}\libopencv_imgproc310.dll.a
LIBS += $${MY_LIB}\libopencv_highgui310.dll.a

SOURCES += main.cpp

#below for CLI compile useage!
CONFIG += qt warn_on release
