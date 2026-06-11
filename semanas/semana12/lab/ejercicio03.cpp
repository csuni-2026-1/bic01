/*
Autor: Americo Ch.

Escribir una función que convierta una temperatura dada en grados Celsius
a grados Fahrenheit. La fórmula de conversión es: 
F = 9/5 * C + 32
*/

#include <iostream>
using namespace std;

double celsiusFarenheit(double celsius) {
    return (9.0/5 * celsius + 32);
}


int main(){
    double gradosCelsius;
    cout << "Ingrese la temperatura (en grados Celsius): ";
    cin >> gradosCelsius;

    double resultado = celsiusFarenheit(gradosCelsius);

    cout << "La temperatura en grados Farenheit es: " << resultado << endl;

    return 0;
}