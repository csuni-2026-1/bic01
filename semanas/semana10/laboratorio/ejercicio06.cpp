#include <iostream>
using namespace std;

int main(){

    char M[8][8] = {0};

    int n = 8;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if( i > j && i + j != n-1){ // debajo de la diagonal
                M[i][j] = '*';
            }

            if(i < j && i + j != n-1) { // encima de la diagonal
                M[i][j] = '@';
            }
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