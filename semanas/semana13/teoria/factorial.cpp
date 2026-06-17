#include <iostream>
using namespace std;


int factorialIterativo(int n) {
    int factorial = 1;
    for(int i = 1; i <= n; ++i) {
        factorial *= i; 
    }

    return factorial;
}



/*
3! = 3*2*1 = 3 * 2!
n! = n * (n-1)!
--> caso base  n == 0 ---> return 1
---> caso recursivo return n*(n-1)! 
*/
int factorialRecursivo(int n) {
    // Caso base
    if(n == 0) {
        return 1;
    }

    // Caso recursivo
    return n * factorialRecursivo(n-1);
}

/*
PILA DE LLAMADAS RECURSIVAS n = 3
factorialRecursivo(3)
    3 * factorialRecursivo(2) ---> 6
        2*factorialRecursivo(1) --> 2
            1*factorialRecursivo(0) --> 1

*/



int main(){

    factorialIterativo(5);
    factorialRecursivo(5);

    return 0;
}