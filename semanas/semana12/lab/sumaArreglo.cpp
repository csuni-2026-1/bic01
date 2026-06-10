/*
Autor: Americo Ch.

ENUNCIADO
Escribe una función que tome como argumento un arreglo y
calcule la suma de todos sus elementos. 
*/
#include <iostream>
using namespace std;

int sumaElementos(int arr[], int size);





int main() {

    int A[] = {1,2,3,4,5};
    int n = 5;

    int resultado = sumaElementos(A,n);

    cout << "La suma de elementos es: " << resultado <<endl;

    return 0;
}


int sumaElementos(int arr[], int size) {
    // recorrer el arreglo y acumular la suma de sus elementos
    int sumaElementos = 0;
    for(int i = 0; i < size; ++i) {
        sumaElementos = sumaElementos + arr[i];
    }

    return sumaElementos;
}




