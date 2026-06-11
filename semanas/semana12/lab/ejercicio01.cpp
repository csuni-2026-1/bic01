/*
Autor: Americo Ch

ENUNCIADO
Escribir una función que tenga un argumento de tipo entero y
que devuelva la letra P si el número es positivo,
y la letra N si es cero o negativo.
*/

#include <iostream>
using namespace std;

char positivoNegativo(int n);

int main() {
    int n = 3;
    char resultado = positivoNegativo(n);
    cout << "Resultado : " << resultado << endl;

    return 0;
}


// Definiciones de funciones
char positivoNegativo(int n) {
    if (n > 0) {
        return 'P';
    } else {
        return 'N';
    }
    
}
