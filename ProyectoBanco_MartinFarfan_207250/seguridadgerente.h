#ifndef SEGURIDADGERENTE_H
#define SEGURIDADGERENTE_H
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <conio.h>
#include "iseguridad.h"
using namespace std;

class seguridadGerente : public ISeguridad
{
private:
    long id_ex;

public:
    seguridadGerente();
    bool comprobarUsuario();
};

#endif // SEGURIDADGERENTE_H
