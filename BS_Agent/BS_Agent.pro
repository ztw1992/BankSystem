QT += core

TARGET = BS_AGENT
TEMPLATE = lib

DEFINES += BS_AGENT_LIBRARY

unix {
    target.path = /usr/lib
    INSTALLS += target
}

CONFIG(debug, debug|release) {
    DESTDIR = ../BS_Main/debug
} else {
    DESTDIR = ../BS_Main/release
}

include(BS_Agent.pri)
