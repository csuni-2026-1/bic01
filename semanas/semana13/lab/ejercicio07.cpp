/*
Implementa una función recursiva que calcule la potencia
de un número ab, donde a y b son enteros positivos.
Ejemplo: potencia(2, 5) = 32

2^5 = 2*2*2*2*2 = 2 * 2^4

potencia(a,b) = a* potencia(a,b-1);

// caso base:
b== 0 ---> 1

// caso recursivo
return a* potencia(a,b-1);

*/

#include <iostream>
using namespace std;

int potencia(int a, int b) {
    // caso base
    if(b == 0) {
        return 1;
    }

    //caso recursivo
    return a*potencia(a, b-1);
}

int main(){

    cout << "potencia(2,5) = " << potencia(-2,5) <<endl;

    return 0;
}

/*
Si a < 0 OK
Si b < 0 ?????????????
*/