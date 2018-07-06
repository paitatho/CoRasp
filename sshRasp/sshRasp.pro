QT += widgets
QMAKE_CXXFLAGS = -std=c++11
QMAKE_LFLAGS = -std=c++11

FORMS += \
    mainwindow.ui

HEADERS += \
    mainwindow.h \
    Reseau.h

SOURCES += \
    mainwindow.cpp \
    main.cpp \
    Reseau.cpp
