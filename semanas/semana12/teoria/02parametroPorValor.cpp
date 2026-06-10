#include <iostream>
using namespace std;

void duplicarValor(int x) {  // x es una COPIA de numero
    x = x * 2;               // modifica solo la copia
    cout << "x = " << x << endl;
}

int main() {
    int numero = 5;
    duplicarValor(numero); // 2. llamada a la funcion duplicaValor
    cout <<"numero = " << numero << endl;  // sigue siendo 5
}

