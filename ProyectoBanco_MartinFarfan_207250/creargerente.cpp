#include "creargerente.h"

crearGerente::crearGerente(){
    usuarioG = " ";
    contraseniaG = " ";
    cedulaG = 0;
}

void crearGerente::definirGerente(){
    ofstream Usuario;
    Usuario.open("C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\Gerente.txt", ios::app);
    if(!Usuario){
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }
    cout << "Ingrese usuario: ";
    cin.ignore();
    getline(cin, usuarioG);
    cout << "Ingrese contrasenia: ";
    getline(cin, contraseniaG);
    cout << "Ingrese su cedula: ";
    cin >> cedulaG;
    Usuario << usuarioG << " " << contraseniaG << " " << cedulaG << endl;
    Usuario.close();
}
