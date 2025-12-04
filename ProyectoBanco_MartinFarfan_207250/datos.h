#ifndef DATOS_H
#define DATOS_H
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

class Datos
{
private:
    long n_cuenta;
    string nom_cliente;
    long cedula;
    double saldo_i;
    string tipo_cuenta;
    long id_ex;

public:
    Datos();
    Datos(long id);
    void setDatos();
    long getN_Cuenta();
    string getNombre();
    long getID();
    double getSaldo();
    string getTipo();
    long getID_ex();
};

#endif // DATOS_H
