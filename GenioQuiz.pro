QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aboutme.cpp \
    aboutproject.cpp \
    endgame.cpp \
    gameover.cpp \
    hardfive.cpp \
    hardfour.cpp \
    hardone.cpp \
    hardthree.cpp \
    hardtwo.cpp \
    main.cpp \
    mainwindow.cpp \
    questions.cpp \
    questionseasy.cpp

HEADERS += \
    aboutme.h \
    aboutproject.h \
    endgame.h \
    gameover.h \
    hardfive.h \
    hardfour.h \
    hardone.h \
    hardthree.h \
    hardtwo.h \
    mainwindow.h \
    questions.h \
    questionseasy.h

FORMS += \
    aboutme.ui \
    aboutproject.ui \
    endgame.ui \
    gameover.ui \
    hardfive.ui \
    hardfour.ui \
    hardone.ui \
    hardthree.ui \
    hardtwo.ui \
    mainwindow.ui \
    questionseasy.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Resources/Me.jpg
