#ifndef CUENTAAHORROS_H
#define CUENTAAHORROS_H
#include "cuenta.h"
#include "datos.h"

class CuentaAhorros : public Cuenta
{
private:
    Datos c;
    double interes;
    long id_ex;

public:
    CuentaAhorros(long id_x);
    void nuevoSaldo();
    void actualizarDatos();
    void estadoCuenta();
};

#endif // CUENTAAHORROS_H
