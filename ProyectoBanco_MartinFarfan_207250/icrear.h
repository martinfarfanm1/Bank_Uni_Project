#ifndef ICREAR_H
#define ICREAR_H
#include <iostream>

class ICrear
{
public:
    virtual ~ICrear(void){};
    virtual void definirGerente() = 0;
    virtual bool definirUsuario() = 0;
};

#endif // ICREAR_H
