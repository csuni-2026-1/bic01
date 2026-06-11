/*
Autor : Americo Ch.

Escribir una función que tome una matriz de enteros como parámetro
y devuelva la suma de todos sus elementos.
*/

#include <iostream>
using namespace std;

const int COLS = 3;
int sumaElementos(int m[][COLS], int filas);
void imprimir(int m[][COLS], int filas);

int main(){

    int matriz[3][COLS] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    cout << "Matriz inicial:\n";

    imprimir(matriz,3);

    cout << "La suma de elementos es: " << sumaElementos(matriz,3) <<endl;


    return 0;
}



int sumaElementos(int m[][COLS], int filas) {
    // IDEA: recorrer la matriz y acumular la suma de sus elementos

    int suma = 0;
    for (size_t i = 0; i < filas; i++) {
        for (size_t j = 0; j < COLS; j++) {
            suma = suma + m[i][j];
        }
        
    }

    return suma;
}

void imprimir(int m[][COLS], int filas) {
    for (size_t i = 0; i < filas; i++) {
        for (size_t j = 0; j < COLS; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

}