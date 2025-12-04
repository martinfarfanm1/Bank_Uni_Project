#ifndef TIPOCUENTA_H
#define TIPOCUENTA_H
#include "datos.h"
#include "cuentacorriente.h"
#include "cuentaahorros.h"
#include "polizaahorros.h"

class TipoCuenta
{
private:
    Datos d;
    string tipo;
    long id_ex;

public:
    TipoCuenta(long id_ex);
    void cuentaAoC();
};

#endif // TIPOCUENTA_H
