#include <iostream>
using namespace std;

int main(){
    int A[3][3] = {
        1,2,3,
        4,5,6,
        5,8,9
    };
    int B[3][3] = {
        1,2,3,
        4,5,6,
        5,8,9
    };
    int P[3][3]={0};

    // P = A * B
    // P[0][0] = 1*1 + 2*4 + 3*5
    // P[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + A[i][2]*B[2][j]

    int n = 3;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int suma = 0;
            for(int k = 0; k < n; ++k) {
               suma = suma + A[i][k]*B[k][j]; 
            } 
            P[i][j] = suma;
        }
    }

    //Imprimir
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << P[i][j] <<" ";
        }
        cout << endl;
    }

    return 0;
}