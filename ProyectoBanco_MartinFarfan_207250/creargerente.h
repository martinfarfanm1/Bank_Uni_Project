#ifndef CREARGERENTE_H
#define CREARGERENTE_H
#include<iostream>
#include<string>
#include <fstream>
#include <iomanip>
using namespace std;

class crearGerente
{
private:
    string usuarioG;
    string contraseniaG;
    long cedulaG;

public:
    crearGerente();
    void definirGerente();
};

#endif // CREARGERENTE_H
