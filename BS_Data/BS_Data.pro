QT += core

TARGET = BS_DATA
TEMPLATE = lib

DEFINES += BS_DATA_LIBRARY

unix {
    target.path = /usr/lib
    INSTALLS += target
}

CONFIG(debug, debug|release) {
    DESTDIR = ../BS_Main/debug
} else {
    DESTDIR = ../BS_Main/release
}

include(BS_Data.pri)
