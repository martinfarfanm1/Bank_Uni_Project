#ifndef ICUENTA_H
#define ICUENTA_H
#include <iostream>

class ICuenta
{
public:
    virtual ~ICuenta(void){};
    virtual void Deposito() = 0;
    virtual void Retiro() = 0;
    virtual void transferencia() = 0;
    virtual void acreditacion() = 0;
};

#endif // ICUENTA_H
