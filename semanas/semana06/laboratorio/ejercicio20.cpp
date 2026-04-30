/*
20. Escriba un programa que reciba un número y
 determine si es primo o no.

5 es primo divisores = 1, 5
6 no es primo divisores = 1, 6, 2, 3
*/

#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Ingrese un entero positivo: ";
    cin >> n;

    if(n == 1) {
        cout << "NO ES PRIMO" <<endl;
        return 0;
    }

    bool esPrimo = true;

    for(int i = 2; i < n; ++i) {
        if (n % i == 0){
            esPrimo = false;
            break;
        }
    }

    if(esPrimo){
        cout << "ES PRIMO" <<endl;
    } else {
        cout << "NO ES PRIMO" <<endl;
    }

    /*
    n = 4
    it 1---> i = 2
             4 % 2 == 0 (V)
             esPrimo == false;
             break ---Termina el for 

    */


    return 0;
}