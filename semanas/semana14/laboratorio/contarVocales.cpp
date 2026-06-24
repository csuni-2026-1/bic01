/*
Autor: Americo Ch.

ENUNCIADO: Implementar una función que cuente vocales en una
cadena de caracteres

Su programa debe:
* Leer una frase y
* Mostrar cuántas vocales contiene


Ejemplo:
Ingrese una frase:
Hola mundo

Vocales: 4
*/

#include <iostream>
using namespace std;


// Funcion contar vocales
int contarVocales(char frase[]){
    int contador = 0;
    
    for(int i = 0;frase[i] != '\0' ;++i) {
        char ch = tolower(frase[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            contador++;
        }
    }

    return contador;

}

// funcion contar vocales usando string
int contarVocales(string s) {
    int contador  = 0;
    for(int i = 0; i < s.size(); ++i) { // no tenemos el caracter nulo, usamos la longitud de la cadena
        char ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            contador++;
        }
        
    }

    return contador;

}

int main(){
    char frase[50];
    cout << "Ingrese una frase: " <<endl;
    cin.getline(frase,50);

    cout << "Vocales: " << contarVocales(frase) <<endl;

    string str;
    cout << "Ingrese una frase: " <<endl;
    getline(cin,str);

    cout << "Vocales: " << contarVocales(str) <<endl;



    return 0;
}