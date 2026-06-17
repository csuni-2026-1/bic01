/*
Diseña una función recursiva que imprima los números
del 1 al n en orden ascendente y descendente.
Ejemplo: imprimir(3) → 1 2 3 2 1

// caso base
n = 4 --> 1 2 3 4 3 2 1
n = 2 --> 1 2 1
n = 1 --> 1
*/

#include <iostream>
using namespace std;



void ascendenteDescendente(int n) {
    // caso base
    if (n == 1) {
        cout << n << " ";
        return;
    }else {

    // caso recursivo   LIFO
    ascendenteDescendente(n - 1);
    cout << n << " "; 
    }

    // TAREA: COMPLETAR
    if (n > 1) {
        cout << n;
    }

}

/*
ad(3) ---------> 3
--> ad(2)  ---->   2
    --> ad(1) ----> 1

*/







int main(){

    ascendenteDescendente(3);

    return 0;
}