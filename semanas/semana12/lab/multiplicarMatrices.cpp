/*
Autor: Americo Ch

ENUNCIADO
Crea una función que tome como argumentos dos matrices
y devuelva el resultado de multiplicarlas.

Validar las dimensiones de las matrices antes
de realizar el cálculo.
*/

#include <iostream>
using namespace std;

const int COLS = 3;

/*
M[0][0] =  mA[0][0]*mB[0][0] +  mA[0][1]*mB[1][0] +  mA[0][2]*mB[2][0]
M[i][j] =  mA[i][0]*mB[0][j] +  mA[i][1]*mB[1][j] +  mA[i][2]*mB[2][j]
*/

void multiplicarMatrices(int A[][COLS], int B[][COLS], int M[][COLS], int filas) {    
    for (size_t i = 0; i < filas; i++) {
        for (size_t j = 0; j < COLS; j++) {
            int sumaij = 0;
            for (size_t k = 0; k < filas; k++){
                sumaij = sumaij + A[i][k]*B[k][j];
            }
            M[i][j] = sumaij;   
        }
        
    }
   
}

void imprimir(int A[][COLS], int filas) {

    for (size_t i = 0; i < filas; i++) {
        for (size_t j = 0; j < COLS; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
        
    }
    
    
}
int main(){

    int mA[3][COLS] = {
        {1,0,0},
        {0,1,0},
        {0,0,1}
    };
    int mB[3][COLS] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int resultado[3][COLS] = {0};

    multiplicarMatrices(mA,mB,resultado,3);

    imprimir(resultado,3);





    return 0;
}