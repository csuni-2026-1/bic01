/*
1. Escribir un programa que imprima números de 1 al 100.
Reescriba una versión para imprimir números desde 100 a 1
*/

#include <iostream>
using namespace std;

int main(){

    // Numeros del 1 al 100 con for
    cout << "\n\nNumeros del 1 al 100 con for:\n";
    for(int i = 1; i <= 100; ++i) {
        cout << i << " ";
        if(i % 10 == 0) {
            cout << endl;
        }
    }

    // Numeros del a al 100 con while
    cout << "\n\nNumeros del 1 al 100 con while:\n";
    int i = 1;
    while(i <= 100) {
        cout << 101 - i << " "; // del 100 al 1
        if(i % 10 == 0) {
            cout << endl;
        }
        i++;
    }

    return 0;
}