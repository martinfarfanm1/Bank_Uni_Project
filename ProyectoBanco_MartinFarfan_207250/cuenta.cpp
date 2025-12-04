#include "cuenta.h"

Cuenta::Cuenta(){
    saldo = 0.0;
    transfer = 0;
}
Cuenta::Cuenta(double s){
    saldo = s;
}
void Cuenta::Deposito(){
    float dep;
    cout << "Que cantidad desea depositar(USD)?: ";
    cin >> dep;
    saldo = saldo+dep;
    cout << "Su nuevo saldo es: " << saldo << endl;
}
void Cuenta::Retiro(){
    float ret;
    cout << "Que cantidad desea retirar (USD)?: ";
    cin >> ret;
    if (ret > saldo){
        cout << "No puede retirar esta cantidad de dinero." << endl;
        cout << "No tiene esta cantidad de dinero. " << endl;
    }
    else {
        saldo = saldo-ret;
        cout << "Su nuevo saldo es: " << saldo << endl;
    }
}

void Cuenta::transferencia(){
    ifstream Usuario;
    cout << "Cuanta plata quiere transferir (USD)?: ";
    Usuario.open("C:\\Users\\USER\\Documents\\martin\\universidad\\cuarto semestre\\programacion 2\\proyecto\\Archivos de texto\\datosUsuario.txt", ios::in);
    if(!Usuario){
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }
    cin >> transfer;
    if (transfer > saldo){
        cout << "No puede transferir esta cantidad de dinero." << endl;
        cout << "No tiene esta cantidad de dinero. " << endl;
    }
    else {
        cout << "Ingrese la cedula a la que se quiere acreditar: ";
        cin >> id_ac;
        long nc;
        string nom;
        string ap;
        long id;
        double sal;
        string tipo;
        Usuario >> nc >> nom >> ap >> id >> sal >> tipo;
        while (!Usuario.eof()){
            if(id == id_ac){
                try {
                    if (tipo == "Poliza") throw false;
                    saldo = saldo-transfer;
                    cout << "Su nuevo saldo es: " << saldo << " USD" << endl;
                } catch (bool comp) {
                    transfer = 0;
                    cout << "No puede depositar a una cuenta de tipo poliza." << endl;
                }
            }
            Usuario >> nc >> nom >> ap >> id >> sal >> tipo;
        }
    }
    Usuario.close();
}

void Cuenta::acreditacion(){
    ifstream Usuario;
    double sal_aux;
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
        if(id == id_ac){
            sal_aux = sal+transfer;
            aux << nc << " " << nom << " " << ap << " " << id << " " << sal_aux << " " << tipo << " " << endl;
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
