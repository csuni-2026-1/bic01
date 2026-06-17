/*
Implementa una función recursiva que calcule el n-ésimo
término de la serie de Fibonacci.
Ejemplo: fibonacci(6) = 8

0 1 1 2 3 5 8
0 1 2 3 4 5 6    ----> n  (los indices comienzan en 0)


// caso base;
n = 0  ----------> return 0
n = 1  ----------> return 1

// caso recursivo
return  fibonacci(n-1) + fibonacci(n-2);

*/

#include <iostream>
using namespace std;

int fibonacci(int n) {
    // caso base
    if( n == 0 || n == 1) {
        return n;
    }

    // caso recursivo
    return  fibonacci(n-1) + fibonacci(n-2);
}

int main(){

    cout << "fibonacci(6) = " <<fibonacci(6) <<endl;
     cout << "fibonacci(20) = " <<fibonacci(20) <<endl;

    return 0;
}