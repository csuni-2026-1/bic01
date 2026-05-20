/*
¿Gemelos o diferentes? Escribe un programa que
determine si dos arreglos de enteros
son exactamente iguales (misma longitud y mismos
valores en las mismas posiciones)
*/
#include <iostream>
using namespace std;

int main(){
    // Datos
    int A[] = {2,2,3,5,5};
    int B[] = {2,2,3};

    int tamA = sizeof(A)/sizeof(A[0]);
    int tamB = sizeof(B)/sizeof(B[0]);


    // Procesamiento y salida
    if (tamA != tamB) {
        cout << "Los arreglos son diferentes" <<endl;
    }else { // tamA == tamB
        bool sonIguales = true; // variable bandera
        for(int i = 0; i < tamA; ++i) { // recorremos el arreglo
            if  (A[i] != B[i]){
                sonIguales = false;
                break; // termina el bucle
            }
        }

        if (sonIguales) {
            cout << "Son iguales" <<endl;
        } else {
            cout << "Son diferentes " << endl;
        }
    }


    

    return 0;
}