#include "banco.h"

void Banco::interfaz(){
    bool repetir = true;
    char pregunta;
    crearUsuario c;
    crearGerente cG;
    while (repetir == true) {
        cout << "      BANCO DE MARTIN" << endl;
        int op;
        cout << endl;
        cout << "Acciones" << endl;
        cout << "1. Crear cuenta." << endl;
        cout << "2. Ingresar." << endl;
        cout << "3. Consultas gerenciales." << endl;
        cout << "Opcion: ";
        cin >> op;
        cout << endl;
        switch (op) {
        case 1:
            bool def;
            def = c.definirUsuario();
            if (def == true){
                c.definirDatosU();
            }
            system("pause");
            break;
        case 2:
            system("cls");
            bool comp;
            Seguridad s;
            comp = s.comprobarUsuario();
            long id_ex;
            if(comp == true){
                system("cls");
                bool rep = true;
                id_ex = s.getID_ex();
                cout << "Usuario correcto." << endl;
                TipoCuenta t(id_ex);
                while (rep == true) {
                    t.cuentaAoC();
                    cout << endl;
                    cout << "Desea realizar otra transaccion?" << endl;
                    cout << "(s) SI" << endl;
                    cout << "(n) NO" << endl;
                    cout << "Opcion: ";
                    cin >> pregunta;
                    switch (pregunta){
                    case 's':
                        rep = true;
                        system("pause");
                        system("cls");
                        break;
                    case 'n':
                        rep = false;
                        cout << endl;
                        cout << "Volviendo al menu principal" << endl;
                        system("pause");
                        break;
                    default:
                        rep = false;
                        break;
                    }
                }
            }
            else if(comp == false){
                system("color 74");
                cout << "Usuario incorrecto." << endl;
                system("pause");
                system("color 70");
            }
            break;
        }
        if(op == 3){
            int opG;
            cout << "1. Crear cuenta." << endl;
            cout << "2. Ingresar." << endl;
            cout << "Opcion: ";
            cin >> opG;
            cout << endl;
            switch (opG) {
            case 1:
                cG.definirGerente();
                break;
            case 2:
                system("cls");
                bool comp;
                seguridadGerente sG;
                comp = sG.comprobarUsuario();
                if(comp == true){
                    system("cls");
                    bool rep = true;
                    cout << "Usuario correcto." << endl;
                    consultasGerenciales cg;
                    while (rep == true) {
                        cg.accionesGerenciales();
                        cout << endl;
                        cout << "Desea realizar otra transaccion?" << endl;
                        cout << "(s) SI" << endl;
                        cout << "(n) NO" << endl;
                        cout << "Opcion: ";
                        cin >> pregunta;
                        switch (pregunta){
                        case 's':
                            rep = true;
                            system("pause");
                            system("cls");
                            break;
                        case 'n':
                            rep = false;
                            cout << endl;
                            cout << "Volviendo al menu principal" << endl;
                            system("pause");
                            break;
                        default:
                            rep = false;
                            break;
                        }
                    }
                }
                else if(comp == false){
                    system("color 74");
                    cout << "Usuario incorrecto." << endl;
                    system("pause");
                    system("color 70");
                }
            }
        }
        cout << endl;
        system("cls");
        cout << "Desea realizar otra operacion?" << endl;
        cout << "(s) SI" << endl;
        cout << "(n) NO" << endl;
        cout << "Opcion: ";
        cin >> pregunta;
        switch (pregunta){
        case 's':
            repetir = true;
            system("pause");
            system("cls");
            break;
        case 'n':
            repetir = false;
            cout << endl;
            cout << "Gracias por preferirnos!" << endl;
            break;
        default:
            repetir = false;
            break;
        }
    }
}
