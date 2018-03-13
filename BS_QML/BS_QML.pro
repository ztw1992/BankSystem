QT += core gui multimedia qml quick

TARGET = BS_QML
TEMPLATE = lib

DEFINES += BS_QML_LIBRARY

unix {
    target.path = /usr/lib
    INSTALLS += target
}

CONFIG(debug, debug|release) {
    DESTDIR = ../BS_Main/debug
} else {
    DESTDIR = ../BS_Main/release
}

include(BS_QML.pri)

INCLUDEPATH += $$PWD/../BS_Data
DEPENDPATH += $$PWD/../BS_Data


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../BS_Main/release/ -lBS_DATA
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../BS_Main/debug/ -lBS_DATA
else:unix: CONFIG(debug, debug|release):LIBS += -L$$OUT_PWD/../BS_Main/debug/ -lBS_DATA
else:unix: CONFIG(release, debug|release):LIBS += -L$$OUT_PWD/../BS_Main/release/ -lBS_DATA


RESOURCES += \
    qrc.qrc
