/*
Escribir un programa que solicite al usuario 3 numeros enteros
diferentes y permita determinar cuál es el mayor
*/

#include <iostream>
using namespace std;

int main(){
    // Datos
    int a, b, c;
    cout << "Ingrese 3 enteros diferentes: ";
    cin >> a >> b >> c;

    // Procesar y mostrar
    if (a > b) {    
        if (a > c) {
            cout << "El mayor es: " << a <<endl;
        } else { // a < c
            cout << "El mayor es: " << c << endl;
        }
    } else { // a < b
        if (b > c) {
            cout << "El mayor es: " << b <<endl;
        } else { // b < c
            cout << "El mayor es: " << c << endl;
        }

    }


    return 0;
}
