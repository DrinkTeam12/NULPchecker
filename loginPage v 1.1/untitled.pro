QT       += core gui
QT += quick qml quickcontrols2
QT += quick qml quickcontrols2 quickwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH +=  "C:/msys64/mingw64/include/mongocxx/v_noabi" \
                "C:/msys64/mingw64/include//bsoncxx/v_noabi" \
                "C:/msys64/mingw64/include/libmongoc-1.0" \
                "C:/msys64/mingw64/include/libbson-1.0"

LIBS += -L"C:/msys64/mingw64/lib"

LIBS += -lmongocxx -lbsoncxx -lmongoc-1.0 -lbson-1.0


SOURCES += \
    dialog.cpp \
    loginpage.cpp \
    main.cpp \
    mongodb.cpp \
    stylesforbuttons.cpp

HEADERS += \
    dialog.h \
    loginpage.h \
    mongodb.h \
    stylesforbuttons.h

FORMS += \
    dialog.ui \
    loginpage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    image.qrc
