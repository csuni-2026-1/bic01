/*
10. Implemente una calculadora con las cuatro operaciones básicas. Después de realizar
una operación y mostrar el resultado, el programa debe preguntar al usuario: "¿Desea
realizar otra operación? (S/N)". Si el usuario presiona ’S’ o ’s’, el programa debe
limpiar (o simplemente repetir) el proceso; si presiona ’N’ o ’n’, el programa termina
*/

#include <iostream>
using namespace std;

int main(){

    char operador;
    double a, b;
    cout << "ingrese dos numeros: ";
    cin >> a >> b;

    do {
        cout << "Elija una operación: (+, - , *, /): ";
        cin >> operador;

    }while(operador != '+' && operador != '-' && operador != '*' && operador != '/');

    // completar utilizando estructuras repetitivas anidadas





    return 0;
}