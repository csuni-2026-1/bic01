#include <iostream>
using namespace std;

const int COLS = 3;  // constante, no variable

void imprimir(int m[][COLS], int filas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < COLS; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int mat[3][COLS] = {{1,2,3},{4,5,6},{7,8,9}};
    imprimir(mat, 3);  // sin [], solo el nombre
    return 0;
}
