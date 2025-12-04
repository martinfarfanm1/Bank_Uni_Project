#include "datos.h"

Datos::Datos(){
    n_cuenta = 0;
    nom_cliente = " ";
    cedula = 0;
    saldo_i = 0;
    tipo_cuenta = " ";
}

Datos::Datos(long id){
    id_ex = id;
}

void Datos::setDatos(){
    ifstream Usuario;
    Usuario.open("C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\datosUsuario.txt", ios::in);
    if(!Usuario){
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }
    string Apellido;
    Usuario >> n_cuenta >> nom_cliente >> Apellido >> cedula >> saldo_i >> tipo_cuenta;
    while (!Usuario.eof()) {
        if(id_ex == cedula){
            break;
        }
        Usuario >> n_cuenta >> nom_cliente >> Apellido >> cedula >> saldo_i >> tipo_cuenta;
    }
    nom_cliente = nom_cliente+" "+Apellido;
    Usuario.close();

}

long Datos::getN_Cuenta(){
    return n_cuenta;
}

string Datos::getNombre(){
    return  nom_cliente;
}

long Datos::getID(){
    return cedula;
}

double Datos::getSaldo(){
    return saldo_i;
}

string Datos::getTipo(){
    return tipo_cuenta;
}

long Datos::getID_ex(){
    return id_ex;
}
