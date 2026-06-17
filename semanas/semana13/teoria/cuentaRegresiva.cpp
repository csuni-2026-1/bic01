/*
simular una cuenta regresiva:

ENTRADA
n = 5;

SALIDA:
5
4
3
2
1
¡Despegue!
*/
#include <iostream>
using namespace std;


void despegueIterativo(int n) {
    for(int  i = n; i >=1; --i) {
        cout << i << endl;
    }
    cout << "¡Despegue!"<<endl;
}

void despegueRecursivo(int n) {
    // Caso Base - condición para detenerse
    if (n == 0) {
        cout << "¡Despegue!" <<endl;
        return;
    }

    // Caso recursivo - resuelve problema más pequeño y reconstruye la solución del problema original
    cout <<  n << endl;
    despegueRecursivo(n - 1);
}

/*
RECONSTRUIR LA PILA DE LLAMADAS RECURSIVAS PARA n = 3
despegueRecursivo(3);
    despegueRecursivo(2);
        despegarRecursivo(1);
            despegarRecursivo(0);

LIFO (Last Input First Output)
*/




int main(){
    cout << "\nFunción Iterativa\n";
    despegueIterativo(5);

    cout << "\nFunción Recursiva\n";
    despegueRecursivo(5);

    return 0;
}