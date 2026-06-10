#include <iostream>
using namespace std;

/*
Elementos de una funcion en C++
1. int : valor de retorno
   void: si la funcion no retorno valor alguno
2. main: nombre de la funcion
3. (): agrupan los parametros de la funcion, separados por comas
4. return: valor que devuelve la función
*/

// funcion para multiplicar 2 enteros
int multiplicar(int a, int b) {
    int producto = a * b;
    return producto;
}

// funcion para imprimir arreglo
void imprimirArreglo(int arr[], int n) {
    // imprimir arreglo
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Funcion burbuja
void burbuja(int arr[], int n) {
    for (int i = 0; i < n -1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}





int main(){

    int arr[5] = {2,-2,0,4,6};
    int n = 5;

    cout << "\nArreglo original\n";
    imprimirArreglo(arr,n);

    // ordenar en forma creciente
    burbuja(arr,n);
    
    cout << "\nArreglo ordenado\n";
    imprimirArreglo(arr,n);


    


    return 0;
}