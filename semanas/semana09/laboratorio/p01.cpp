/*
1. Espejo. Escribe un programa que llene un arreglo A con los primeros 5 números pares
positivos. Luego, crea una copia exacta de ese arreglo en B y muestra ambos en
pantalla.
*/

#include <iostream>
using namespace std;

int main(){

    // Datos 
    int A[5] = {0, 2, 4, 6 ,8};
    int B[5];

    // Procesamiento
    // Copiar A en B
    for (int i = 0; i < 5; ++i) {
        B[i] = A[i];// aqui está la parte principal
    }

    // Salida
    cout << "\nArreglo A\n";
    for (int i = 0; i < 5; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "\nArreglo copia B\n";
    for (int i = 0; i < 5; ++i) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}