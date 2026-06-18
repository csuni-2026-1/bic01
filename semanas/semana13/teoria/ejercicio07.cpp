/*

Implementa una función recursiva que calcule la potencia de un número a
b , donde a y b son enteros positivos.
Ejemplo: potencia(2, 5) = 32


a^5 = a*a*a*a*a
    = a* a^4
    = a*a*a*a*a*a^0

// caso base
b == 0 ---> return 1

// caso recursivo

return a*a^{b-1}

*/

#include <iostream>
using namespace std;

int potencia(int a, int b) {
    // caso base 
    if (b == 0)
        return 1;
    
    // caso recursivo
    return a * potencia(a,b-1);
}

int main(){

    cout << potencia(2,5) <<endl;
    cout << potencia(-2,5) << endl;

    return 0;
}

