/*
Imprimir
n = 4

   *    ---> 3 espacios y 1 *   
  ***   ---> 2 espacios y 3 *
 *****  ---> 1 espacio  y 5 *
*******


M[i][j]
*/

#include <iostream>
using namespace std;

int main(){
    int n  = 4;

    for(int i=1; i <= n; ++i) { // recorre las filas
        // Para cada fila imprimimos espacios y
        // espacios
        for(int j =1; j<= n - i; ++j) {
            cout << " ";
        }

        // Asteriscos
        for(int j=1; j <= 2*i - 1; ++j) {
            cout << "*";
        }
        cout << endl;

    }

    return 0;
}