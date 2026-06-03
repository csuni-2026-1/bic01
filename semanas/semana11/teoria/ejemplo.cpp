#include <iostream>
#include <cmath> // abs(-4) == 2
#include <cstdlib> // rand()
using namespace std;

/*
Elementos de una funcion:
1. int: valor de retorno
   void, en caso la funcion no retorne ningun valor
2. main: NOMBRE de la función
3. (): PARAMETROS de la función
4. return: valor que devuelve la función
*/

// PROTOTIPOS
int suma(int a, int b);
void imprimirArreglo(int arr[], int tamanio);

int main(){
    int A[] = {1,2,3,4,5};
    int n = 5;

    // LLAMADA A LA FUNCION
    imprimirArreglo(A,n);

    A[0] = 25;

    imprimirArreglo(A,n);

    return 0;
}


// DEFINICIÓN DE FUNCIONES
int suma(int a, int b) {
    return a + b;
}

imprimirArreglo(int arr[], int tamanio) {
    for (int i = 0; i < tamanio; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}