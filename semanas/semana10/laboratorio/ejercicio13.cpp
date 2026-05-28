/*
Matriz de 2x2
1 2
4 3

1 2
3 4
Matriz de 3x3
1 2 3
8 9 4
7 6 5

Matriz 4x4
1  2  3   4
12 13 14  5
11 16 15  6
10  9  8  7
*/
#include <iostream>
using namespace std;

int main(){

    int M[4][4] = {0};
    int n=4;

    int filaInicio = 0;
    int filaFinal = n-1;
    int colInicio = 0;
    int colFinal = n-1;
    int elem = 1;
    for (int num = 0; num <=0 ; ++num) {
        for(int j = colInicio; j <= colFinal; ++j) { // recorrido izq --> derecha
            M[filaInicio][j] = elem;
            elem++;
        }

        for(int i = filaInicio+1 ; i <= filaFinal; ++i) { // recorrido arriba --> abajo
            M[i][colFinal] = elem;
            elem++;
        }

        for(int j = colFinal-1 ; j >= colInicio; --j) { // recorrido derecha --> izq
            M[filaFinal][j] = elem;
            elem++;
        }

        for(int i = filaFinal-1 ; i >= filaInicio+1; --i) { // recorrido abajo --> arriba
            M[i][colInicio] = elem;
            elem++;
        }


    }


    //Imprimir
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << M[i][j] <<" ";
        }
        cout << endl;
    }



    return 0;
}