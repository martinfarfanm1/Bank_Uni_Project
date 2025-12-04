#include "eliminaruc.h"

EliminarUC::EliminarUC(){
    id_eliminar = 0;
}

EliminarUC::EliminarUC(long id_e){
    id_eliminar = id_e;
}

void EliminarUC::e_usuario(){
    ifstream Usuario;
    Usuario.open("C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\Usuario.txt", ios::in);
    if(!Usuario){
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }
    ofstream aux;
    aux.open("C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\auxiliar.txt", ios::out);
    string user;
    string pasword;
    long cedula;
    Usuario >> user >> pasword >> cedula;
    while (!Usuario.eof()) {
        if(cedula == id_eliminar){
            cout << "Usuario eliminado satisfactoriamente." << endl;
        }
        else {
            aux << user << " " << pasword << " " << cedula << endl;
        }
        Usuario >> user >> pasword >> cedula;
    }
    Usuario.close();
    aux.close();
    remove("C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\Usuario.txt");
    rename("C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\auxiliar.txt", "C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\Usuario.txt");
}

void EliminarUC::e_datos(){
    ifstream Usuario;
    Usuario.open("C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\datosUsuario.txt", ios::in);
    if(!Usuario){
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }
    ofstream aux;
    aux.open("C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\auxiliar.txt", ios::out);
    long nc;
    string nom;
    string ap;
    long id;
    double sal;
    string tipo;
    Usuario >> nc >> nom >> ap >> id >> sal >> tipo;
    while (!Usuario.eof()) {
        if(id == id_eliminar){
            cout << "Datos del usuario eliminados satisfactoriamente." << endl;
        }
        else {
            aux << nc << " " << nom << " " << ap << " " << id << " " << sal << " " << tipo << " " << endl;
        }
        Usuario >> nc >> nom >> ap >> id >> sal >> tipo;
    }
    Usuario.close();
    aux.close();
    remove("C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\datosUsuario.txt");
    rename("C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\auxiliar.txt", "C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\datosUsuario.txt");
}
