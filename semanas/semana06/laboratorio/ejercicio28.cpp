/*
Escribe un programa que imprima la siguiente forma.
 Modifique su programa de forma que ahora le pida un
número (impar) entre 1 -21 que especifique el
número de filas de la figura  y muestre la figura de
tamaño adecuado

BBB*
BB***
B*****
*******
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Ingrese un entero: ";
    cin >> n;

    for(int fila = 1; fila <= n; ++fila){

        for(int i = 1; i<= n -fila; ++i) {
            cout << " ";
        }

        for (int j = 1; j <= 2*fila -1; ++j) {
            // if (fila ==1 || fila==n || j == 1)
                cout << "*";

            // completar para imprimir el triangulo
        }
        cout << endl;
    }

    return 0;
}