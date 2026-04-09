/*
Imprementar un programa que reciba dos números enteros 
y compruebe si son iguales o no.
*/


#include <iostream> // para cout cin
using namespace std;

int main () {
    // Datos
    int n1, n2; // Declaro 2 variables enteras
    cout << "Ingrese el  primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;


    // Procesar  
    // Salida
    if (n1 == n2) {
        cout << "Los numeros son iguales" <<endl;
    } else {
        cout << "Los numeros son diferentes " <<endl;
    }
    





    return 0;
}