QT += core

TARGET = BS_LOGIC
TEMPLATE = lib

DEFINES += BS_LOGIC_LIBRARY

unix {
    target.path = /usr/lib
    INSTALLS += target
}

CONFIG(debug, debug|release) {
    DESTDIR = ../BS_Main/debug
} else {
    DESTDIR = ../BS_Main/release
}

include(BS_Logic.pri)


INCLUDEPATH += $$PWD/../BS_QML
DEPENDPATH += $$PWD/../BS_QML


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../BS_Main/release/ -lBS_QML
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../BS_Main/debug/ -lBS_QML
else:unix: CONFIG(debug, debug|release):LIBS += -L$$OUT_PWD/../BS_Main/debug/ -lBS_QML
else:unix: CONFIG(release, debug|release):LIBS += -L$$OUT_PWD/../BS_Main/release/ -lBS_QML

#OTHER_FILES += \
#    icom.rc
