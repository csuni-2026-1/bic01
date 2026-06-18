/*
4. Diseña una función recursiva que imprima los números del 1 al n en orden ascendente
y descendente.
Ejemplo: imprimir(3) → 1 2 3 2 1

*/

#include <iostream>
using namespace std;


void imprimirDescendente(int n) {
    // caso base
    if(n == 1) {
        return;
    }
    
    // caso recursivo
    cout << n - 1 << " ";
    imprimirDescendente(n-1); // se llama asi misma
    
}


void imprimirAscendente(int n) {
    // caso base
    if(n == 0) {
        return;
    }
    
    // caso recursivo

    imprimirAscendente(n-1);
    cout << n << " ";
   
}




int main(){
    imprimirAscendente(5);
    imprimirDescendente(5);

    return 0;
}