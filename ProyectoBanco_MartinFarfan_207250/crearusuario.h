#ifndef CREARUSUARIO_H
#define CREARUSUARIO_H
#include<iostream>
#include<string>
#include <fstream>
#include <iomanip>
using namespace std;

class crearUsuario
{
private:
    long n_cuenta;
    string nom_cliente;
    long cedula;
    double saldo_i;
    string tipo_cuenta;

public:
    crearUsuario();
    crearUsuario(long nc, string n, long c, double s, string tc);
    bool definirUsuario();
    void definirDatosU();
    long getN_Cuenta();
    string getNombre();
    long getID();
    double getSaldo();
    string getTipo();
};

#endif // CREARUSUARIO_H
