#ifndef ISEGURIDAD_H
#define ISEGURIDAD_H
#include <iostream>

class ISeguridad
{
public:
    virtual ~ISeguridad(void){};
    virtual bool comprobarUsuario() = 0;
};

#endif // ISEGURIDAD_H
