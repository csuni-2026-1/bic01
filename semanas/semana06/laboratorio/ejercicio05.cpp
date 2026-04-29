/*
5. Escribir un programa que lea 10 números enteros
y calcule la suma y el promedio de ellos
*/

#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;
    for(int i = 1; i <= 10; ++i){ // para leer los 10 numeros
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;
        suma = suma + numero; // vamos acumulando la suma
    }

    double promedio = 1.0*suma/10; // calculamos el promedio, FUERA DEL BUCLE

    cout << "La suma es: " << suma << endl;
    cout << "El promedio es: " << promedio <<endl;


    return 0;
}