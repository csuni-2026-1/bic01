/*
4. Realice un programa que pida como dato un arreglo bidimensional cuadrado A y de-
termine si el mismo es simétrico. Recuerda que se considera simétrico si cumple la
siguiente condición: A[i][j] = A[j][i]. Ejemplo:
*/

#include <iostream>
using namespace std;

int main(){
    int A[3][3] = {
        {1, 5, -1},
        {5, 0, 2},
        {-1, 2, 7}
    };
    int n = 3;

    bool esSimetrica = true;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(A[i][j] != A[j][i]) {
                esSimetrica = false;
            }
        }
    }

    if(esSimetrica) {
        cout << "ES SIMETRICA" <<endl;
    } else {
        cout << "NO ES SIMETRICA " << endl;
    }


    return 0;
}