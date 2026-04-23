/*
Implementar una calculadora básica
que se ejecute hasta que el usuario decida
salir
*/


#include <iostream>
using namespace std;

int main(){
    int opcion;
    
    do {
        cout << "----- Menú de opciones----\n";   // \n es equivalente a endl
        cout << "1. Sumar\n";
        cout << "2. Restar\n";
        cout << "3. Multiplicar\n";
        cout << "4. Dividir\n";
        cout << "0. Salir\n";
        cout << "Elija una opción: ";
        cin >> opcion;
        
    } while (opcion != 0);

    


    return 0;
}