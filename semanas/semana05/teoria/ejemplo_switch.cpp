/*
Implementar un menu de opciones para realizar 
4 operaciones básicas (+, - * y /)
*/

#include <iostream>
using namespace std;

int main(){

    int opcion;

    cout << "----- Menú de opciones----\n";   // \n es equivalente a endl
    cout << "1. Sumar\n";
    cout << "2. Restar\n";
    cout << "3. Multiplicar\n";
    cout << "4. Dividir\n";
    cout << "Elija una opción: ";
    cin >> opcion;


    if (opcion == 1) {
        cout << "REalizando la suma\n";
    } else if (opcion == 2){
        cout << "Realizando la resta\n";
    } else if (opcion == 3){
        cout << "Realizando el producto\n";
    } else if (opcion == 4){
        cout << "Realizando la división\n";
    } else {
        cout << "Opcion inválida\n";
    }

    // Usando switch (funciona cuando opcion es de tipo int, char)
    switch (opcion) {
        case 1:
            cout << "Realizando la suma\n";
            break;
        case 2:
            cout << "Realizando la resta\n";
            break;
        case 3:
            cout << "Realizando el producto\n";
            break;
        case 4:
            cout << "Realizando la división\n";
            break;
        default:
            cout << "Opcion inválida\n";
            break;
    }
    return 0;
}