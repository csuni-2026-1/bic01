/*
1. Realizar un programa que pida al usuario dos números y 
muestre la “distancia” entre ellos
*/

#include <iostream>
#include <cmath> // abs()
using namespace std;

int main(){

    int numero1, numero2;

    cout << "Ingrese 2 numeros: ";
    cin >> numero1 >> numero2;

    int distancia = abs(numero1- numero2);

    cout << "La distancia entre " << numero1 << " y " << numero2 << " es: " << distancia <<endl;

    return 0;
}