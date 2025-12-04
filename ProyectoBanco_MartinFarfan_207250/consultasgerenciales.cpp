#include "consultasgerenciales.h"

consultasGerenciales::consultasGerenciales(){

}

void consultasGerenciales::accionesGerenciales(){
    cout << "BIENVENIDO GERENTE" << endl;
    cout << endl;
    cout << "Que desea hacer?" << endl;
    cout << "1. Ver usuarios." << endl;
    cout << "2. Ver estados de cuenta." << endl;
    cout << "3. Eliminar usuario." << endl;
    cout << "4. Salir" << endl;
    verUsuario v1;
    verCuenta vc1;
    int op;
    cout << "Opcion: ";
    cin >> op;
    cout << endl;
    switch (op) {
    case 1:
        int ac;
        cout << "Desea ver todos los usuarios o uno en particular?" << endl;
        cout << "1. Todos." << endl;
        cout << "2. Particular" << endl;
        cout << "Accion: ";
        cin >> ac;
        cout << endl;
        if(ac == 1){
            v1.todos();
        }
        else if(ac == 2){
            v1.particular();
        }
        break;
    case 2:
        int a;
        cout << "Desea ver todos los estados de cuenta, por tipos, o uno en particular?" << endl;
        cout << "1. Todos." << endl;
        cout << "2. Particular." << endl;
        cout << "3. Tipos." << endl;
        cout << "Accion: ";
        cin >> a;
        cout << endl;
        if(a == 1){
            vc1.todos();
        }
        else if(a == 2){
            vc1.particular();
        }
        else if (a == 3) {
            string tipo;
            cout << "Que tipo de cuenta busca? (Ahorros, Corriente o Poliza): " << endl;
            cin.ignore();
            getline(cin, tipo);
            cout << endl;
            vc1.tipo(tipo);
        }
        break;
    case 3:
        long ced_e;
        cout << "Ingrese la cedula del usuario buscado: ";
        cin >> ced_e;
        EliminarUC e(ced_e);
        e.e_usuario();
        e.e_datos();
        break;
    }
    if(op == 4){
        cout << "Hasta luego Gerente" << endl;
    }
    if (op >= 5){
        cout << "Opcion no existente." << endl;
    }
}
