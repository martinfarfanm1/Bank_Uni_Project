#ifndef CUENTACORRIENTE_H
#define CUENTACORRIENTE_H
#include "cuenta.h"
#include "datos.h"

class CuentaCorriente : public Cuenta
{
private:
    Datos c;
    double Limite_sobregiro;
    double interes_sobregiro;
    long id_ex;

public:
    CuentaCorriente(long id_x);
    void Retiro();
    void actualizarDatos();
    void estadoCuenta();
};

#endif // CUENTACORRIENTE_H
