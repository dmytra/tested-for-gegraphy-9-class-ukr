QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tested_for_gegraphy_9_class_ukr
TEMPLATE = app

CONFIG += c++17
CONFIG -= console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    myclass.cpp \
    myWindow.cpp

HEADERS += \
    myWindow.h \
    myclass.h

QMAKE_PROJECT_NAME = tested_for_gegraphy_9_class_ukr

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

contains(ANDROID_TARGET_ARCH,arm64-v8a) {
    ANDROID_PACKAGE_SOURCE_DIR = \
        $$PWD/android
}
