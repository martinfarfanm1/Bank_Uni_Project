#include "tipocuenta.h"

TipoCuenta::TipoCuenta(long id_x){
    Datos daux(id_x);
    d = daux;
    d.setDatos();
    tipo = d.getTipo();
    id_ex = d.getID_ex();
}

void TipoCuenta::cuentaAoC(){
    if(tipo == "Corriente"){
        cout << "BIENVENIDO/A " << d.getNombre() << endl;
        cout << "TIPO: " << tipo << endl;
        int opcion;
        CuentaCorriente cc1(id_ex);
        cout << "Que desea realizar? " << endl;
        cout << "1. Deposito." << endl;
        cout << "2. Retiro." << endl;
        cout << "3. Transferencia." << endl;
        cout << "4. Revisar estado de cuenta." << endl;
        cout << "5. Salir." << endl;
        cout << "Opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1: //Deposito
            cc1.Cuenta::Deposito();
            cc1.actualizarDatos();
            break;
        case 2: //Retiro
            cc1.Retiro();
            cc1.actualizarDatos();
            break;
        case 3: //Transferencia
            cc1.Cuenta::transferencia();
            cc1.actualizarDatos();
            cc1.Cuenta::acreditacion();
            break;
        case 4: //Estado de cuenta
            cc1.actualizarDatos();
            cc1.estadoCuenta();
            break;
        case 5: //Salida del programa
            break;
        default:
            cout << "Opcion no existente." << endl;
            break;
        }
    }
    else if (tipo == "Ahorros"){
        cout << "BIENVENIDO/A " << d.getNombre() << endl;
        cout << "TIPO: " << tipo << endl;
        CuentaAhorros ca1(id_ex);
        int opcion;
        cout << "Que desea realizar? " << endl;
        cout << "1. Deposito." << endl;
        cout << "2. Retiro." << endl;
        cout << "3. Saldo para el siguiente mes (actualizar)." << endl;
        cout << "4. Transferencia." << endl;
        cout << "5. Revisar estado de cuenta." << endl;
        cout << "6. Salir." << endl;
        cout << "Opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1: //Deposito
            ca1.Cuenta::Deposito();
            ca1.actualizarDatos();
            break;
        case 2:
            ca1.Cuenta::Retiro();
            ca1.actualizarDatos();
            break;
        case 3:
            ca1.nuevoSaldo();
            ca1.actualizarDatos();
            break;
        case 4:
            ca1.Cuenta::transferencia();
            ca1.actualizarDatos();
            ca1.Cuenta::acreditacion();
            break;
        case 5:
            ca1.actualizarDatos();
            ca1.estadoCuenta();
            break;
        case 6:
            break;
        default:
            cout << "Opcion no existente." << endl;
            break;
        }
    }
    else if (tipo == "Poliza de ahorros" || tipo == "Poliza"){
        cout << "BIENVENIDO/A " << d.getNombre() << endl;
        cout << "TIPO: " << tipo << endl;
        PolizaAhorros pa1(id_ex);
        int opcion;
        cout << "Que tipo de poliza de ahorros desea?" << endl;
        cout << "1. Capitalizacion mensual." << endl;
        cout << "2. Interes al vencimiento." << endl;
        cout << "3. Revisar estado de cuenta." << endl;
        cout << "4. Salir." << endl;
        cout << "Opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            pa1.capitalizacionMensual();
            pa1.actualizarDatos();
            break;
        case 2:
            pa1.interes_al_Vencimiento();
            pa1.actualizarDatos();
            break;
        case 3:
            pa1.actualizarDatos();
            pa1.estadoCuenta();
            break;
        case 4:
            break;
        default:
            cout << "Opcion no existente." << endl;
            break;
        }
    }
    else{
        cout << "Tipo de cuenta no existe" << endl;
    }
}
