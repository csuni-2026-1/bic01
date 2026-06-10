#include <iostream>
using namespace std;

void duplicarValor(int x) {  // x es una COPIA de numero
    x = x * 2;               // modifica solo la copia
}

int main() {
    int numero = 5;
    duplicarValor(numero);
    cout << numero << endl;  // sigue siendo 5
}

