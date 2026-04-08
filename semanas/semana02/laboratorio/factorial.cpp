
/*
Realice un algoritmo que pida un número y calcule su factorial. 
Recuerde que el factorial de un número es el producto
de todos los enteros entre 1 y el propio número
*/
#include <iostream>
using namespace std;

int main(){

    int n = 5;

    // factorial usando for
    int factorial = 1;
    for(int i = 1; i <= n; i++) {
        factorial *= i; 
    }
    // i = 1 --> factorial = 1*1
    // i = 2 --> factorial = 1*2
    // i = 3 --> factorial = 2*3
    // i = 4 --> factorial = 6*4;
    // i = 5 --> factorial = 24*5

    cout << "El factorial de " << n << " es: " << factorial <<endl;

    // while

    int factorial1 = 1;
    int j = 1;
    while (j <= n) {
        factorial1 *= j;
        j++; 
    }
   

    // do-while

    int k = 1;
    do {
        // Completar
    } while (k <= n);


    return 0;
}