/*
Escriba un algoritmo que solicite numeros positivos al usuario
hasta que decida terminar (ingresando -1):
Calcule y muestre la suma de los números ingresados por el usuario
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    int suma = 0; // variable para acumular la suma
    cout << "ingrese un numero positivo (-1 para terminar): ";
    cin >> n;

    while(n > 0) {

        suma = suma + n;
        cout << "ingrese un numero positivo (-1 para terminar): ";
        cin >> n;

    }

    cout << "La suma es: " << suma << endl;




    return 0;
}