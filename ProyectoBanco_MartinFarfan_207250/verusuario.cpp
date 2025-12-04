#include "verusuario.h"

verUsuario::verUsuario(){
    datos = " ";
    usuario = " ";
    password = " ";
    id = 0;
}

void verUsuario::todos(){
    ifstream Usuario_comp;
    Usuario_comp.open("C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\Usuario.txt", ios::in);
    if(!Usuario_comp){
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }
    cout << "Usuario\t\t" << "Contrasenia\t" << "Cedula" << endl;
    cout << endl;
    Usuario_comp >> usuario >> password >> id;
    while (!Usuario_comp.eof()) {
        cout << usuario << "\t\t" << password << "\t\t" << id << endl;
        Usuario_comp >> usuario >> password >> id;
    }
}

void verUsuario::particular(){
    ifstream Usuario_comp;
    Usuario_comp.open("C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\Usuario.txt", ios::in);
    if(!Usuario_comp){
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }
    long ced_b;
    bool comp;
    cout << "Ingrese la cedula del usuario buscado: ";
    cin >> ced_b;
    cout << endl;
    cout << "Usuario\t" << "Contrasenia\t" << "Cedula" << endl;
    cout << endl;
    Usuario_comp >> usuario >> password >> id;
    while (!Usuario_comp.eof()) {
        if(ced_b == id){
            comp = true;
            break;
        }
        comp = false;
        Usuario_comp >> usuario >> password >> id;
    }
    if (comp == true){
        cout << usuario << "\t\t" << password << '\t' << id << endl;
    }
    else if(comp == false) {
        cout << "Usuario no encontrado." << endl;
    }
    Usuario_comp.close();
}
