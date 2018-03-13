QT += core

TARGET = BS_UTIL
TEMPLATE = lib

DEFINES += BS_UTIL_LIBRARY

unix {
    target.path = /usr/lib
    INSTALLS += target
}

CONFIG(debug, debug|release) {
    DESTDIR = ../BS_Main/debug
} else {
    DESTDIR = ../BS_Main/release
}

include(BS_util.pri)
