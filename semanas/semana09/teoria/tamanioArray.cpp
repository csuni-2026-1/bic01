#include <iostream>
#include <vector>
using namespace std;

int main(){

    // FORMA INCORRECTA:
    // int n;
    // cout << "Ingrese el tamaño del arreglo: ";
    // cin >> n;
    // int incorrecto[n];

    // FORMA CORRECTA:
    const int TAM = 10;
    int correcto[TAM];


    
    // TAMBIÉN PODEMOS HACER
    int notas[100]; // tamaño suficiente
    
    // Luego pedimos ingreasar el número de notas (máximo 100)
    int n;
    cout << "Ingrese el número de notas (maximo 100): ";

    // y solo trabajamos con una porción (las primeras n posiciones) del arreglo notas

  

    return 0;
}