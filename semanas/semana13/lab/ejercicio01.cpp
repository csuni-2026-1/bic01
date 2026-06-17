/*
Autor: Americo Ch.

Escribe una función recursiva que calcule el factorial
de un número entero positivo n.
Ejemplo: 
factorial(5) = 120
factorial(20) = ....

*/

#include <iostream>
using namespace std;

long long factorial(int n) {
    // Caso base
    if(n <= 0) {
        return 1;
    }

    // caso recursivo
    return n * factorial(n-1);
}

int main(){

    cout << "factorial(12) = " << factorial(12) <<endl;
    cout << "factorial(20) = " << factorial(20) <<endl;



    return 0;
}