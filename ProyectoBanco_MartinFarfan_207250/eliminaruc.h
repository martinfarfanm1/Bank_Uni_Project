#ifndef ELIMINARUC_H
#define ELIMINARUC_H
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

class EliminarUC
{
private:
    long id_eliminar;

public:
    EliminarUC();
    EliminarUC(long id_e);
    void e_usuario();
    void e_datos();
};

#endif // ELIMINARUC_H
