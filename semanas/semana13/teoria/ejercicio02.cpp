/*
Autor: Americo Chulluncuy

Implementa una función recursiva que calcule el n-ésimo
término de la serie de Fibonacci.
Ejemplo: fibonacci(6) = 8

0 1 1 2 3 5 8

0 1 2 3 4 5 6  <-- (0 representa el primer termino)



// Caso base
n = 0 ---> return 0
n = 1 ---> return 1


// Caso recursvivo
n = 2
fibo(2) = fibo(1) + fibo(0)

n = 3
fibo(3) = fibo(2) + fibo(1)

...
fibo(n) = fibo(n-1) + fibo(n-2);
*/


#include <iostream>
using namespace std;

int fibo(int n) {
    // caso base
    if(n == 0 || n == 1)
        return n;
    
    // Caso recursivo
    return fibo(n-1) + fibo(n-2);
}

int main(){

    cout << fibo(6) <<endl;

    return 0;
}