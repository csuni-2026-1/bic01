#include <iostream>
using namespace std;

int main(){
    const int filas = 3, columnas = 3;

    int M[filas][columnas] = {
        1, 2, 4,
        4, 5, 6,
        3, 4, 5
    };

    
    int N[filas][columnas] = {
        1, 2, 4,
        4, 5, 6,
        3, 4, 5
    };

    // Suma de matrices
    cout << "La suma es: \n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << M[i][j] + N[i][j] << " ";
        }
        cout << endl;
    }


    // Producto de matrices
    int P[filas][columnas];

     for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            int Pij = 0;
            for(int k = 0; k < filas; ++k){
                Pij += M[i][k]*N[k][j];
            }
            P[i][j] = Pij;
        }
    }

    
    cout << "El producto es: \n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << P[i][j] << " ";
        }
        cout << endl;
    }




    return 0;
}