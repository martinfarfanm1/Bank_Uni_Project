#ifndef VERUSUARIO_H
#define VERUSUARIO_H
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

class verUsuario
{
private:
    string datos;
    string usuario;
    string password;
    long id;

public:
    verUsuario();
    void todos();
    void particular();
};

#endif // VERUSUARIO_H
