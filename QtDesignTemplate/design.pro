QT       += core gui \
    widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    config_reader.cpp \
    file_operator.cpp \
    main.cpp \
    mainwindow.cpp \
    style_loader.cpp

HEADERS += \
    config_reader.h \
    file_operator.h \
    mainwindow.h \
    style_loader.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../images/checkbox_checked.png \
    ../images/checkbox_checked_all.png \
    ../images/checkbox_checked_all_white.png \
    ../images/checkbox_checked_white.png \
    ../images/checkbox_unchecked.png \
    ../images/checkbox_unchecked_white.png \
    ../images/dark_theme_btn.png \
    ../images/down_arrow.png \
    ../images/down_arrow_white.png \
    ../images/left_arrow.png \
    ../images/left_arrow_white.png \
    ../images/light_theme_btn.png \
    ../images/radio_checked.png \
    ../images/radio_checked_white.png \
    ../images/radio_unchecked.png \
    ../images/radio_unchecked_white.png \
    ../images/right_arrow.png \
    ../images/right_arrow_white.png \
    ../images/up_arrow.png \
    ../images/up_arrow_white.png \
    ../style_config.conf \
    ../styles/dark_theme_settings.txt \
    ../styles/light_theme_settings.txt \
    ../styles/style_theme.qss

