/*
Escribe una función que elimine los elementos duplicados de un arreglo y devuelva
el nuevo tamaño del arreglo. 
Debe generar un arreglo de tamaño 15 con elementos aleatorios entre 0 y 10. OK
Además debe mostrar el arreglo original y el arreglo luego de
eliminar los elementos repetidos   OK
*/

#include <iostream>
#include <cstdlib>
using namespace std;

/*
{1,2,3,1,2} -------------> {1,2,3}
{1,2,3,2}
*/

int eliminarDuplicados(int arr[], int size) {
    for (size_t i = 0; i < size; i++) {
        for (size_t j = i + 1; j < size; j++) {
            // Si encuentro coincidencia dezplazo elementos a la izquierda y actualizo el tamaño
            if(arr[i] == arr[j]) {
                // eliminar arr[j]
                for(int k = j; k < size - 1; ++k) {
                    arr[k] = arr[k+1];
                }
                size--;
                j--;
            }
        }
        
    }

    return size;
    
}

void generarArreglo(int arr[], int size) {
    for (size_t i = 0; i < size; i++){
        arr[i] = rand() % 11;
    }
}

void mostrarArreglo(int arr[], int size) {
    for (size_t i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[15];
    generarArreglo(arr,15);

    mostrarArreglo(arr,15);

    int tam = eliminarDuplicados(arr,15);

    mostrarArreglo(arr, tam);

    return 0;
}