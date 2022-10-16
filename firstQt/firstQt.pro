#为qt添加模块： 核心模块，图形模块
QT       += core gui
#4.0之后widget独立出来
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QTApp
TEMPLATE = app

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Mybutton.cpp \
    Student.cpp \
    main.cpp \
    Widget.cpp

HEADERS += \
    Mybutton.h \
    Student.h \
    Widget.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
