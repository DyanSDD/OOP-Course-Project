QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dateintrare.cpp \
    grafic1.cpp \
    grafic10.cpp \
    grafic11.cpp \
    grafic12.cpp \
    grafic2.cpp \
    grafic3.cpp \
    grafic4.cpp \
    grafic5.cpp \
    grafic6.cpp \
    grafic7.cpp \
    grafic8.cpp \
    grafic9.cpp \
    grafice.cpp \
    graficegeneral.cpp \
    info.cpp \
    main.cpp \
    mainwindow.cpp \
    menu.cpp

HEADERS += \
    dateintrare.h \
    grafic1.h \
    grafic10.h \
    grafic11.h \
    grafic12.h \
    grafic2.h \
    grafic3.h \
    grafic4.h \
    grafic5.h \
    grafic6.h \
    grafic7.h \
    grafic8.h \
    grafic9.h \
    grafice.h \
    graficegeneral.h \
    info.h \
    mainwindow.h \
    menu.h

FORMS += \
    dateintrare.ui \
    grafic1.ui \
    grafic10.ui \
    grafic11.ui \
    grafic12.ui \
    grafic2.ui \
    grafic3.ui \
    grafic4.ui \
    grafic5.ui \
    grafic6.ui \
    grafic7.ui \
    grafic8.ui \
    grafic9.ui \
    grafice.ui \
    graficegeneral.ui \
    info.ui \
    mainwindow.ui \
    menu.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
