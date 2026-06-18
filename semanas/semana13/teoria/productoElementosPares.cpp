/*
Implementar una funcion recursiva para calcular el producto de los elementos
pares de un arreglo


*/
#include <iostream>
using namespace std;

int productoElementos(int arr[], int n) {
    // caso base
    if (n == 0) {
        return 1; // neutro multiplicativo
    }

    // caso recursivo
    if(arr[n-1]%2 == 0) {
        return arr[n-1] * productoElementos(arr,n-1);
    }

    return productoElementos(arr,n-1);

    
}




int main(){

    int A[] = {1,2,3,4,5};
    int n = 5;

    cout << productoElementos(A,n) << endl;

    return 0;
}