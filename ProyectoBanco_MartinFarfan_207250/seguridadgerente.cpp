#include "seguridadgerente.h"

seguridadGerente::seguridadGerente(){
    id_ex = 0;
}

bool seguridadGerente::comprobarUsuario(){
    ifstream Usuario_comp;
    Usuario_comp.open("C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\Gerente.txt", ios::in);
    if(!Usuario_comp){
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }
    string usuario;
    string pasword;
    long cedula;
    string usu;
    cout << "Ingrese usuario: ";
    cin.ignore();
    getline(cin, usu);
    string pas;
    cout << "Ingrese contrasenia: ";
    char caracter;
    caracter = getch();
    while (caracter != 13) {    //13 es el codigo aski de enter
        pas.push_back(caracter);
        cout << "*";
        caracter = getch();
    }
    cout << endl;
    cout << "Ingrese su cedula: ";
    cin >> id_ex;
    Usuario_comp >> usuario >> pasword >> cedula;
    while(!Usuario_comp.eof()){
        if(usu == usuario){
            if(pas == pasword){
                if(id_ex == cedula){
                    return true;
                    break;
                }
            }
        }
        Usuario_comp >> usuario >> pasword >> cedula;
    }
    Usuario_comp.close();
    return false;
}
