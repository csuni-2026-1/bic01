/*
Escribe una función recursiva que sume los dígitos de un número entero positivo.
Ejemplo: sumaDigitos(1234) = 10

*/

#include <iostream>
using namespace std;


int sumaDigitos(int n) {
    // caso base
    if (n == 0) {
        return 0;
    }

    // caso recursivo
    return n%10 + sumaDigitos(n/10);
}

int main(){

    cout << sumaDigitos(1234) <<endl; 

    return 0;
}