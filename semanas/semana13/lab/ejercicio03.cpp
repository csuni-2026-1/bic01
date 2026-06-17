/*
Escribir una función recursiva que permita calcular la
suma de los n primeros números naturales.

suma = 1 + 2 + 3 + ... + n  = 1 + 2 + ... + n-1 + n
suma = n + suma(n-1);

// caso base
n == 0 ---> return 0


// caso recursivo
n + suma(n-1);
*/

#include <iostream>
using namespace std;

int suma(int n) {
    // caso base
    if(n == 0) {
        return 0;
    }

    // caso recursivo
    return n + suma(n-1);
}

int main(){

    cout << "suma(15)= " << suma(15) <<endl;

    return 0;
}