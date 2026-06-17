/*
Escribir una función recursiva que permita calcular la suma
de los elementos de un arreglo

A = [1,2,3,4,5] 
n = 5;

suma = A[0] + A[1] + ..+ A[n-2] + A[n-1];
     = suma (A, n-1) + A[n-1]
// caso base
n == 0 --> 0


// caso recursivo
*/

#include <iostream>
using namespace std;

int sumaElementos(int arr[], int n) {
    // caso base
    if(n == 0) {
        return 0;
    }

    // caso recursivo
    return  arr[n-1] + sumaElementos(arr,n-1);
}


//Funcion recursiva para calcular el producto de los elementos de una arreglo
int productoElementos(int arr[], int n) {
    // caso base
    if(n == 0) {
        return 1;
    }

    // caso recursivo
    if (arr[n-1] % 2 == 0) {
        return  arr[n-1] * productoElementos(arr,n-1);
    }
    
    return productoElementos(arr,n-1);
}

int main(){

    int A[] = {1,2,3,4,5};
    cout << productoElementos(A,5) <<endl;

    return 0;
}

