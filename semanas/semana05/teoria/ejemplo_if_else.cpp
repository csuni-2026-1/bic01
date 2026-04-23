/*
Escribir un programa que diga si
un estudiante es mayor de edad o no.

Tipos de variables:
int edad = 19;
double pi = 3.14;
char categoria = 'A';
string cad = "Es mayor de edad";
*/
#include <iostream>
using namespace std;

int main(){
    // Datos
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;

    // Procesar datos
    // Salida
    if (edad >= 18) {
        cout << "Es mayor de edad" <<endl;
    } else { // en este bloque se cumple que edad < 18
        cout << "Es menor de edad" << endl; 
    }

    // uso del operador ternario de C++
    string resultado = (edad >= 18) ? "Es mayor de edad" : "Es menor de edad"; 
    cout << resultado <<endl;
    

    return 0;
}