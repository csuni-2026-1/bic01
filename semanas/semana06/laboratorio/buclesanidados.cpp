/*
Escribe un programa que imprima la siguiente forma. ​
Modifique su programa de forma que ahora le pida un ​
número (impar) entre 1 -21 que especifique el​
número de filas de la figura  y muestre la figura de​
 tamaño adecuado​

n = 3;

BB*
B***
*****

5* 1 = 5
5* 2 = 10
.
.
.
5*12 = 60

*/


#include <iostream>
using namespace std;

int main(){

    int n = 3;

    for (int filas = 1; filas <= n; ++filas) {
        for (int j = 1; j <= n - filas ; ++j) {
            cout << " ";
        }

        for(int k = 1; k <= 2*filas - 1; ++k) {
            cout <<"*";
        }
        cout  <<endl;
    }



    //int n = 5; // 6, 7, ,8

    // for (int j = 5; j <= 8; ++j) {
    //     cout << "Tabla del  " << j << ":\n";
    //     for (int i = 1; i <= 12; ++i) {
    //         cout << j << " x " << i << " = " << j * i <<endl;
    //     }
    // }



    

    return 0;
}