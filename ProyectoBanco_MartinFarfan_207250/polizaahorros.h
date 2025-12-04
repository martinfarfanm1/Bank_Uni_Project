#ifndef POLIZAAHORROS_H
#define POLIZAAHORROS_H
#include "datos.h"

class PolizaAhorros
{
private:
    double saldo;
    Datos c;
    double interes;

public:
    PolizaAhorros(long id_x);
    void capitalizacionMensual();
    void interes_al_Vencimiento();
    void actualizarDatos();
    void estadoCuenta();
};

#endif // POLIZAAHORROS_H
