QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Plugin_1
TEMPLATE = lib
CONFIG += plugin

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

HEADERS += \
    plugin_1.h

SOURCES += \
    plugin_1.cpp

DISTFILES += \
    plugin_1.json
