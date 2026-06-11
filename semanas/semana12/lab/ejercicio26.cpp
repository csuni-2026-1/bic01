/*
Implementar una función que determine si una matriz dada es diagonal.
Una matriz es diagonal si sus elementos fuera de la diagonal principal
son todos cero.
*/

#include <iostream>
using namespace std;

bool esMatrizDiagonal(int m[3][3], int filas) {
    // Recorrer la matriz
    bool esDiagonal = true;
    for (size_t i = 0; i < filas; ++i) {
        for (size_t j = 0; j < 3; ++j){
            if(i != j && m[i][j] != 0) {
                esDiagonal = false;
            }
        }
        
    }
    
    return esDiagonal;
}

int main(){
    const int FILAS = 3;
    const int COLS = 3; // variable local

    int matriz[FILAS][COLS] = {
        {1,0,-1},
        {0,4,0},
        {0,0,1}
    };

    if(esMatrizDiagonal(matriz,FILAS)) {
        cout << "La matriz es diagonal" <<endl;
    } else {
        cout << "La matriz no es diagonal" << endl;
    }



    return 0;
}