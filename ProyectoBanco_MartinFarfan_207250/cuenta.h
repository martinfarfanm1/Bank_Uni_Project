#ifndef CUENTA_H
#define CUENTA_H
#include<iostream>
#include<string>
#include <fstream>
#include <iomanip>
using namespace std;

class Cuenta
{
protected:
    double saldo;
    double transfer;
    long id_ac;

public:
    Cuenta();
    Cuenta(double s);
    void Deposito();
    void Retiro();
    void transferencia();
    void acreditacion();
};

#endif // CUENTA_H
