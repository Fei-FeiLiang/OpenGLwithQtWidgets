QT += widgets opengl openglwidgets

CONFIG += c++11
CONFIG += utf8_source

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

include($$PWD/TheBasic/TheBasic.pri)
INCLUDEPATH += $$PWD/TheBasic
include($$PWD/TheLighting/TheLighting.pri)
INCLUDEPATH += $$PWD/TheLighting
include($$PWD/TheAdvanced/TheAdvanced.pri)
INCLUDEPATH += $$PWD/TheAdvanced
include($$PWD/TheImage/TheImage.pri)
INCLUDEPATH += $$PWD/TheImage
