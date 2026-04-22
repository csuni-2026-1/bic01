/*
Escribir un programa que solicite al usuario 2 numeros enteros
diferentes y permita determinar cuál es el mayor
*/

#include <iostream>
using namespace std;

int main() {
    // Datos
    int num1, num2;
    cout << "Ingrese 2 enteros diferentes: ";
    cin >> num1 >> num2;

    // Procesar datos
    // Salida
    if (num1 > num2) {
        cout << "El mayor es: " << num1 << endl;
    } else {
        cout << "El mayor es: " << num2 << endl;
    }

    // Utilizando el operador ternario

    int numMaximo = (num1 > num2)? numMaximo=num1 : numMaximo = num2; 
    cout << "EL mayor es (utilizando el operador ternario): " << numMaximo <<endl;
    
    return 0;
}