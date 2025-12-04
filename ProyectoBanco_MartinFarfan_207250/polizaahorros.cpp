#include "polizaahorros.h"

PolizaAhorros::PolizaAhorros(long id_x){
    Datos caux(id_x);
    c = caux;
    c.setDatos();
    saldo = c.getSaldo();
    interes = 0.00833333;
}

void PolizaAhorros::capitalizacionMensual(){
    cout << "Esta cuenta tiene un interes del 10% anual" << endl;
    int meses;
    cout << "A cuantos meses desea invertir su capital?: ";
    cin >> meses;
    for(int i = 1; i <= meses; i++){
        saldo = saldo*(1+interes);
    }
    cout << "Saldo al tiempo pactado es: " << saldo << endl;
}

void PolizaAhorros::interes_al_Vencimiento(){
    cout << "Esta cuenta tiene un interes del 10% anual" << endl;
    int meses;
    cout << "A cuantos meses desea invertir su capital?: ";
    cin >> meses;
    saldo = saldo*(1+(interes*meses));
    cout << "Saldo al tiempo pactado es: " << saldo << endl;
}

void PolizaAhorros::actualizarDatos(){
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
        if(id == c.getID()){
            aux << nc << " " << nom << " " << ap << " " << id << " " << saldo << " " << tipo << " " << endl;
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


void PolizaAhorros::estadoCuenta(){
    cout << "N.\t" << "Nombre\t\t" << "Cedula\t\t" << "Saldo\t" << "Tipo" << endl;
    cout << c.getN_Cuenta() << '\t' << c.getNombre() << '\t' << c.getID() << '\t' << c.getSaldo() << '\t' << c.getTipo() << endl;
}
