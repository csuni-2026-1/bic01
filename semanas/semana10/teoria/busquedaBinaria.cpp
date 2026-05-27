#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,5,8,12,16,23,38,56,72,91}; // arreglo ordenado

    int n = sizeof(arr)/sizeof(arr[0]);

    int indice = -1; // no encontrado
    int clave = 23;

    int inicio = 0;
    int fin = n-1;
    while(inicio <= fin) {
        int medio = (inicio + fin)/2;
        if(arr[medio] == clave) {
            indice = medio;
            break;
        } else if (arr[medio] < clave) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }
    if (indice!= -1) {
        cout << "Elemento encontrado posicion = " << indice <<endl;
    } else {
        cout << "Elemento no encontrado" << endl;
    }


    return 0;
}