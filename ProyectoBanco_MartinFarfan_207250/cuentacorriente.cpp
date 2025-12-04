#include "cuentacorriente.h"

CuentaCorriente::CuentaCorriente(long id_x){
    Datos caux(id_x);
    id_ex = id_x;
    c = caux;
    c.setDatos();
    saldo = c.getSaldo();
    interes_sobregiro = 0.00416666667;
}

void CuentaCorriente::Retiro(){
    Limite_sobregiro = -1000;
    float ret;
    float aux;
    int t_sobreponer;
    float dinero_pagar;
    cout << "Que cantidad desea retirar? ";
    cin >> ret;
    saldo = saldo - ret;
    if (saldo >= 0){
        cout << "Su saldo es de: " << saldo << endl;
    }
    else{
        cout << "SOBREGIRO" << endl;
        aux = abs(saldo);
        if (saldo < Limite_sobregiro){
            saldo = saldo + ret;
            cout << "Imposible realizar esta transaccion." << endl;
            cout << "Has sobrepasado el limite del sobregiro." << endl;
        }
        else{
          cout << "Se sobregiro: " << aux << endl;
          cout << "En cuanto tiempo (meses) va a cubrir el sobregiro?: ";
          cin >> t_sobreponer;
          cout << "El interes por sobregiro es del 5% anual." << endl;
          dinero_pagar = aux*(1+(interes_sobregiro*t_sobreponer));
          cout << "El valor a pagar es de: " << dinero_pagar << endl;
        }
    }
}

void CuentaCorriente::actualizarDatos(){
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

void CuentaCorriente::estadoCuenta(){
    cout << "N.\t" << "Nombre\t\t" << "Cedula\t\t" << "Saldo\t" << "Tipo" << endl;
    cout << c.getN_Cuenta() << '\t' << c.getNombre() << '\t' << c.getID() << '\t' << c.getSaldo() << '\t' << c.getTipo() << endl;
}
