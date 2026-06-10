/*
Autor: Americo Ch

ENUNCIADO
Implementar una función que en una pasada calcule y 
devuelva el min y el max valor de un arreglo.
*/
#include <iostream>
using namespace std;

void minmaxArreglo(int arr[], int size, int& max, int& min) {
    // recorremos el arreglo y actulizamos min y max (pasados por referencia)
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
         
    }
    
}

int main(){
    int A[] = {1,2,3,4,5};
    int n = 5;
    int minA = A[0];
    int maxA = A[0];

    minmaxArreglo(A,n,maxA,minA);

    cout << "El max del arreglo es: " << maxA <<endl;
    cout << "El min del arreglo es: " << minA << endl;

    return 0;
}