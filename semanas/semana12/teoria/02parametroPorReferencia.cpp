#include <iostream>
using namespace std;

void duplicarValor(int& x) {  // x ES numero, no una copia
    x = x * 2;                // modifica el original
}

int main() {
    int numero = 5;
    duplicarValor(numero);
    cout << numero << endl;   // ahora es 10
}