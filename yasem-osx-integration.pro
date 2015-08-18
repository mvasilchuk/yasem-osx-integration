#-------------------------------------------------
#
# Project created by QtCreator 2014-03-11T12:58:06
#
#-------------------------------------------------

VERSION = 0.1.0
TARGET = yasem-osx-integration
TEMPLATE = lib

include($${top_srcdir}/common.pri)

QT       += core gui widgets

DEFINES += OSXINTEGRATION_LIBRARY

SOURCES += \
    osxintegrationobject.cpp \
    osxintegrationplugin.cpp

HEADERS +=\
    osxintegration_global.h \
    osxintegrationplugin.h \
    osxintegrationobject.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    metadata.json

RESOURCES +=
