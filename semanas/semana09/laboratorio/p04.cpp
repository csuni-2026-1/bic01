/*
El jefe del arreglo. Dado un arreglo de N números, escribe un programa que
encuentre: El mayor valor del arreglo. 
La posición (índice) donde aparece por primera vez.

Imprimir además todos los índices donde aparece el maximo
*/

#include <iostream>
using namespace std;



int main(){
    // Datos
    const int N = 8;
    int arr[N] = {2,5,8,0,1,8,-7,1}; // Salida 8 2

    // Procesamiento
    int idx = 0;
    int maxElemento = arr[0]; 
    int minElemento = arr[0];
    for(int i = 1; i < N; ++i) {
        if(arr[i] > maxElemento){
            maxElemento = arr[i];
            idx = i;
        }

        if(arr[i] < minElemento) {
            minElemento = arr[i];
        }
    }

    for (int i = 0; i < N; ++i) {
        if(arr[i] == maxElemento) {
            cout << "Indice donde ocurre el maximo: " << i <<endl;
        }
    }


    // Salida
    cout << "El maximo elemento es: " << maxElemento <<endl;
    cout << "El indice donce ocurre por primera vez es :  " << idx <<endl;

    return 0;
}