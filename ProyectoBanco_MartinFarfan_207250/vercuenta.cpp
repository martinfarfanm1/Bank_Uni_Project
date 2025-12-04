#include "vercuenta.h"

verCuenta::verCuenta(){
    datos = " ";
    n_cuenta = 0;
    nom_cliente = " ";
    cedula = 0;
    saldo_i = 0;
    tipo_cuenta = " ";
}
void verCuenta::todos(){
    ifstream Usuario_comp;
    string ap;
    Usuario_comp.open("C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\datosUsuario.txt", ios::in);
    if(!Usuario_comp){
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }
    cout << "N.\t" << "Nombre\t\t\t" << " Cedula\t\t" << "Saldo\t" << "Tipo" << endl;
    cout << endl;
    Usuario_comp >> n_cuenta >> nom_cliente >> ap >> cedula >> saldo_i >> tipo_cuenta;
    while (!Usuario_comp.eof()) {
        nom_cliente = nom_cliente + " " + ap;
        cout << n_cuenta << '\t' << nom_cliente << "\t\t" << cedula << '\t' << saldo_i << '\t' << tipo_cuenta <<endl;
        Usuario_comp >> n_cuenta >> nom_cliente >> ap >> cedula >> saldo_i >> tipo_cuenta;
    }
    Usuario_comp.close();
}

void verCuenta::particular(){
    ifstream Usuario_comp;
    Usuario_comp.open("C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\datosUsuario.txt", ios::in);
    if(!Usuario_comp){
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }
    long ced_b;
    bool comp;
    cout << "Ingrese la cedula del usuario buscado: ";
    cin >> ced_b;
    cout << endl;
    cout << "N.\t" << "Nombre\t\t" << " Cedula\t\t" << "Saldo\t" << "Tipo" << endl;
    string ap;
    cout << endl;
    Usuario_comp >> n_cuenta >> nom_cliente >> ap >> cedula >> saldo_i >> tipo_cuenta;
    while (!Usuario_comp.eof()) {
        if(ced_b == cedula){
            comp = true;
            break;
        }
        comp = false;
        Usuario_comp >> n_cuenta >> nom_cliente >> ap >> cedula >> saldo_i >> tipo_cuenta;
    }
    if (comp == true){
        nom_cliente = nom_cliente + " " + ap;
        cout << n_cuenta << '\t' << nom_cliente << '\t' << cedula << '\t' << saldo_i << '\t' << tipo_cuenta <<endl;
    }
    else if(comp == false) {
        cout << "Usuario no encontrado." << endl;
    }
    Usuario_comp.close();
}

void verCuenta::tipo(string t){
    ifstream Usuario_comp;
    Usuario_comp.open("C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\datosUsuario.txt", ios::in);
    if(!Usuario_comp){
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }
    cout << "N.\t" << "Nombre\t\t\t" << " Cedula\t\t" << "Saldo\t" << "Tipo" << endl;
    string ap;
    string datos;
    cout << endl;
    Usuario_comp >> n_cuenta >> nom_cliente >> ap >> cedula >> saldo_i >> tipo_cuenta;
    while (!Usuario_comp.eof()) {
        if(tipo_cuenta == t){
            nom_cliente = nom_cliente + " " + ap;
            cout << n_cuenta << '\t' << nom_cliente << "\t\t" << cedula << '\t' << saldo_i << '\t' << tipo_cuenta <<endl;
        }
        Usuario_comp >> n_cuenta >> nom_cliente >> ap >> cedula >> saldo_i >> tipo_cuenta;
    }
    Usuario_comp.close();
}
