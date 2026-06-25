/*
Autor: Americo Ch

ENUNCIADO:
Implementar un programa que lea una cadena, a continuación
cuente cuántas vocales tiene

Ejemplo: 
Ingrese una cadena:
Cadenas en C++

Vocales: 4
*/

#include <iostream>
#include <cctype> // tolower()
#include <cstring> // strlen()
using namespace std;

int contarVocales(char cad[]) {
    int contador  = 0;
    for(int i = 0; i < strlen(cad); ++i ) { // recorremos la cadena
        char c = tolower(cad[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' ||c == 'u') {
            contador++;
        }
    }

    return contador;
}

int main(){
    // datos
    char cad[50];
    cout << "Ingrese una cadena: " << endl;
    cin.getline(cad,50); 


    // procesar
    // salida
    cout << "Vocales: " << contarVocales(cad) <<endl;

    return 0;
}