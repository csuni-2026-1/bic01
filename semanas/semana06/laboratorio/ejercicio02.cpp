/*
Escribir un programa que sume los 20 primeros números pares
suma = 0 + 2 + 4 + 6 + ... +38
*/

#include <iostream>
using namespace std;

int main(){

    // variable acumuladora
    int suma = 0;
    for (int i = 0; i < 20; ++i) {
        suma = suma + 2*i; // suma += 2*i;
    }

    cout << "La suma de los  20 primeros pares es: " << suma << endl;

    // Factorial de n
    // n = 5;  factorial = 1*2*3*4*5
    int n = 20;
    long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial = factorial*i; // factorial += 2*i;
    }
    cout << "El factorial de " << n << " es: " << factorial <<endl;

    return 0;
}