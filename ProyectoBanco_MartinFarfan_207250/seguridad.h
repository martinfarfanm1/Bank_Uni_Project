#ifndef SEGURIDAD_H
#define SEGURIDAD_H
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <conio.h>
#include "iseguridad.h"
using namespace std;

class Seguridad : public ISeguridad
{
private:
    long id_ex;

public:
    Seguridad();
    Seguridad(long id);
    bool comprobarUsuario();
    long getID_ex();
};

#endif // SEGURIDAD_H
