/*
1. Calcular la suma de los n primeros numeros
   suma(n) = 1+2+3+4+5+ ... +n
     = 1 + 2 + ...+ n-1 + n
     = suma(n-1) + n

2. Escribir una función recursiva que permita calcular
   la suma de los elementos de un arreglo.

A = {1,2,3,4,5}

suma = A[0] + A[1] + .. + A[4]

3. calcular el producto de los elementos pares, en el ejercicio 2
*/
#include <iostream>
using namespace std;

int sumaElementos(int arr[], int n) {
    // caso base
    if (n == 0) {
        return 0;
    }

    // caso recursivo
    return arr[n-1] + sumaElementos(arr,n-1);
}




int main(){

    int A[] = {1,2,3,4,5};
    int n = 5;

    cout << sumaElementos(A,n) << endl;

    return 0;
}