CONFIG += link_pkgconfig
PKGCONFIG += poppler-qt5

HEADERS += \
    $$PWD/thumbnailmanager.h \
    $$PWD/thumbnailgenerator.h

SOURCES += \
    $$PWD/thumbnailmanager.cpp \
    $$PWD/thumbnailgenerator.cpp