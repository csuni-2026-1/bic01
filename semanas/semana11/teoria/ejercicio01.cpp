/*
Dada una matriz M
buscar en elemento en la matriz
mostrar las posiciones donde se encuentra el elemento
*/
#include <iostream>
using namespace std;


int main(){
    int M[2][3] = {
        {-3,0,3},
        {4,3,6}
    };
    int filas = 2;
    int columnas = 3;

    for (int i = 0; i < filas; ++i) {
       for (int j = 0; j < columnas; ++j) {
            cout << M[i][j] << " "; 
       }
       cout << endl;
    }

    int buscado = 7;

    /*
    IDEA:
    1. recorrer la matriz OK
    2. comparar cada elemento con el elemento buscado 
    */
   bool encontrado = false;
   cout << "Elemento encontrado en:\n";
   for (int i = 0; i < filas; ++i) {
       for (int j = 0; j < columnas; ++j) {
           if(M[i][j] == buscado) {
            cout << "("<< i << " " << j << ")"  <<endl;
            encontrado = true;
           }
       }
   }

   if(!encontrado) {
    cout << "NO ENCONTRADO" <<endl;
   }

    return 0;
}