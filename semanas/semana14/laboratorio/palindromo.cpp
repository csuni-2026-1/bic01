/*

ENUNCIADO. Implementar un programa 
para determinar si una palabra es palindroma
(se leer igual de izquierda a derecha y viceversa)

Ejemplo

reconocer --> es palindromo

*/

#include <iostream>
# include <string>
using namespace std;

bool esPalindromo(string palabra) {
    int i = 0; // indice al inicio
    int j = palabra.size() - 1; // indice del ultimo caracter

    while (i < j) {
        if (palabra[i] != palabra[j]) {
            return false;
        }

        i++;
        j--;
    }
    return true;
}


int main(){
    string palabra;
    cin >> palabra;


    if(esPalindromo(palabra)) {
        cout << " --> es palindromo" <<endl;
    } else {
        cout << " --> no es palindromo" <<endl;
    }



    return 0;
}