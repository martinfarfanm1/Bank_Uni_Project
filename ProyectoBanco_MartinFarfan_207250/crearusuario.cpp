#include "crearusuario.h"

crearUsuario::crearUsuario(){
    n_cuenta = 0;
    nom_cliente = " ";
    cedula = 0;
    saldo_i = 0;
    tipo_cuenta = " ";
}

crearUsuario::crearUsuario(long nc, string n, long c, double s, string tc){
    n_cuenta = nc;
    nom_cliente = n;
    cedula = c;
    saldo_i = s;
    tipo_cuenta = tc;
}

bool crearUsuario::definirUsuario(){
    ofstream Usuario;
    Usuario.open("C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\Usuario.txt", ios::app);
    if(!Usuario){
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }
    ifstream repetidos;
    repetidos.open("C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\Usuario.txt", ios::in);
    if(!repetidos){
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }
    string user;
    string pas;
    string usuario;
    string pasword;
    long id;
    bool rep;
    cout << "Ingrese usuario: ";
    cin.ignore();
    getline(cin, user);
    cout << "Ingrese contrasenia: ";
    getline(cin, pas);
    cout << "Ingrese su cedula: ";
    cin >> cedula;
    repetidos >> usuario >> pasword >> id;
    while (!repetidos.eof()) {
        if(user == usuario || cedula == id){
            rep = true;
            break;
        }
        else {
            rep = false;
            repetidos >> usuario >> pasword >> id;
        }
    }
    if(rep == false){
        Usuario << user << " " << pas << " " << cedula << endl;
        return true;
    }
    else if(rep == true){
        cout << "Usuario repetido." << endl;
        return false;
    }
    Usuario.close();
}

void crearUsuario::definirDatosU(){
    ofstream Usuario;
    Usuario.open("C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\datosUsuario.txt", ios::app);
    if(!Usuario){
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }
    srand(static_cast<unsigned int>(time(0)));
    n_cuenta = 0 + rand()%10000;
    cout << "Su numero de cuenta es: " << n_cuenta << endl;
    cout << "Ingrese el nombre del cliente: ";
    cin.ignore();
    getline(cin, nom_cliente);
    cout << "Ingrese su saldo inicial (USD): ";
    cin >> saldo_i;
    cout << "Que tipo de cuenta quiere registrar? (Ahorros, Corriente o Poliza de ahorros): ";
    cin.ignore();
    getline(cin, tipo_cuenta);
    Usuario << n_cuenta << " " << nom_cliente << " " << cedula << " " << saldo_i << " " << tipo_cuenta << " " << endl;
    Usuario.close();
}

long crearUsuario::getN_Cuenta(){
    return n_cuenta;
}

string crearUsuario::getNombre(){
    return  nom_cliente;
}

long crearUsuario::getID(){
    return cedula;
}

double crearUsuario::getSaldo(){
    return saldo_i;
}

string crearUsuario::getTipo(){
    return tipo_cuenta;
}
