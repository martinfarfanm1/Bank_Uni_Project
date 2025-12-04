TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        banco.cpp \
        consultasgerenciales.cpp \
        creargerente.cpp \
        crearusuario.cpp \
        cuenta.cpp \
        cuentaahorros.cpp \
        cuentacorriente.cpp \
        datos.cpp \
        eliminaruc.cpp \
        main.cpp \
        polizaahorros.cpp \
        seguridad.cpp \
        seguridadgerente.cpp \
        tipocuenta.cpp \
        vercuenta.cpp \
        verusuario.cpp

HEADERS += \
    banco.h \
    consultasgerenciales.h \
    creargerente.h \
    crearusuario.h \
    cuenta.h \
    cuentaahorros.h \
    cuentacorriente.h \
    datos.h \
    eliminaruc.h \
    iseguridad.h \
    polizaahorros.h \
    seguridad.h \
    seguridadgerente.h \
    tipocuenta.h \
    vercuenta.h \
    verusuario.h
