#-------------------------------------------------
#
# Project created by QtCreator 2019-08-18T17:58:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled4
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        bishop.cpp \
        board.cpp \
        chess.cpp \
        customchessview.cpp \
        element.cpp \
        king.cpp \
        knight.cpp \
        main.cpp \
        pawn.cpp \
        queen.cpp \
        rook.cpp \
        team.cpp \
        testingdummy.cpp

HEADERS += \
    bishop.h \
    board.h \
    chess.h \
    chressmacros.h \
    customchessview.h \
    element.h \
    king.h \
    knight.h \
    pawn.h \
    queen.h \
    rook.h \
    team.h \
    testingdummy.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
