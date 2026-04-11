/*
    Un cajero ofrece opciones:
    1 → Consultar saldo
    2 → Retirar dinero
    3 → Depositar dinero
    Reglas:
    • Si elige retirar y el monto supera el saldo → "Fondos insuficientes"
    • Si elige depositar un monto negativo → "Monto inválido"
    • Si elige opción inválida → "Opción no válida"
    Entrada:
    2
    Saldo: 500
    Retiro: 600
    Salida:
    Fondos insuficientes
*/

#include <iostream>
using namespace std;

int main(){

    int opcion;
    cout << "Elija una opcion\n";
    cout << "1. Consultar saldo\n";
    cout << "2. Retirar dinero\n";
    cout << "3. Depositar dinero\n";

    cin >> opcion;

    float saldo = 500, monto;

    switch (opcion) {
        case 1:
            cout << "Saldo actual: " << saldo << endl;
            break;

        case 2:
            cout << "Ingrese el monto a retirar: ";
            cin >> monto;
            if(monto > saldo) {
                cout << "Saldo insuficiente\n";
            } else {
                cout << "Retiro exitoso\n";
                saldo = saldo - monto;
                cout << "Saldo actual: " << saldo <<endl;
            }

            break;
        case 3:
            cout << "Ingrese el monto a depositar: ";
            cin >> monto;
            if(monto < 0) {
                cout << "Monto inválido\n";
            } else {
                cout << "Depósito exitoso\n";
                saldo = saldo + monto;
                cout << "Saldo actual: " << saldo <<endl;
            }

            break;

        default:
            cout << "Opcion invalida\n";

            break;
    }


    return 0;
}