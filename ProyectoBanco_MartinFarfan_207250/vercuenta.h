#ifndef VERCUENTA_H
#define VERCUENTA_H
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

class verCuenta
{
private:
    string datos;
    long n_cuenta;
    string nom_cliente;
    long cedula;
    double saldo_i;
    string tipo_cuenta;

public:
    verCuenta();
    void todos();
    void particular();
    void tipo(string t);
};

#endif // VERCUENTA_H
