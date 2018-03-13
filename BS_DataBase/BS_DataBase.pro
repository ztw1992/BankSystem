QT += core

TARGET = BS_DATABASE
TEMPLATE = lib

DEFINES += BS_DATABASE_LIBRARY

unix {
    target.path = /usr/lib
    INSTALLS += target
}

CONFIG(debug, debug|release) {
    DESTDIR = ../BS_Main/debug
} else {
    DESTDIR = ../BS_Main/release
}

include(BS_DataBase.pri)
