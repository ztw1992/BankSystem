#-------------------------------------------------
#
# Project created by QtCreator 2016-11-12T14:01:22
#
#-------------------------------------------------

QT += core gui multimedia qml quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BankSystem
TEMPLATE = app
#RC_FILE = icom.rc

include(BS_Main.pri)


INCLUDEPATH += $$PWD/../BS_ConvertEngine
DEPENDPATH += $$PWD/../BS_ConvertEngine


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../BS_Main/release/ -lBS_CONVERTENGIENT
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../BS_Main/debug/ -lBS_CONVERTENGIENT
else:unix: CONFIG(debug, debug|release):LIBS += -L$$OUT_PWD/../BS_Main/debug/ -lBS_CONVERTENGIENT
else:unix: CONFIG(release, debug|release):LIBS += -L$$OUT_PWD/../BS_Main/release/ -lBS_CONVERTENGIENT


INCLUDEPATH += $$PWD/../BS_QML
DEPENDPATH += $$PWD/../BS_QML


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../BS_Main/release/ -lBS_QML
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../BS_Main/debug/ -lBS_QML
else:unix: CONFIG(debug, debug|release):LIBS += -L$$OUT_PWD/../BS_Main/debug/ -lBS_QML
else:unix: CONFIG(release, debug|release):LIBS += -L$$OUT_PWD/../BS_Main/release/ -lBS_QML



#OTHER_FILES += \
#    icom.rc




