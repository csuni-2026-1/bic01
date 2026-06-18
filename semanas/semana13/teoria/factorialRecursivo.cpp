#include <iostream>
using namespace std;

// Función que calcula el factorial de n
int factorial(int n) {
    int facto = 1;
    for(int i = 1; i <= n; ++i) {
        facto = facto*i;
    }

    return facto;
}

// Funcion recursiva que calcula el facorial e n
/*
n! = 1*2*3.....*n
   = 1*2*3...*n-1 * n
   = n*(n-1)!   <--------- naturaleza recursiva
   = n * n-1 * (n-2)!
   = n * n-1 * n-2 *......0!
   =                       3*2*1*1

CASO BASE
n == 0 ----> return 1


CASO RECURSIVO
return n*(n-1)!


PILA DE LLAMADAS RECURSIVAS
n = 3
factorialRecursivo(3);
--> 3 * factorialRecursivo(2); ----------> 6
  -----> 2 * factorialRecursivo(1);  -----> 2
     ------> 1 * factorialRecursivo(0); ---> 1 

*/

int factorialRecursivo(int n) {
    // Caso Base
    if(n == 0) {
        return 1;
    }

    // Caso recursivo
    cout << "Llamando a factorialRecursivo( " << n-1 << ")" <<endl;
    int fact = n * factorialRecursivo(n - 1);
    cout << "Retorno de factorialRecursivo(" << n-1 << ")" << endl;
    return fact;
    cout << "Hola";
}

int main(){
    cout << factorial(5);
    cout << endl;
    cout << factorialRecursivo(3);

    return 0;
}