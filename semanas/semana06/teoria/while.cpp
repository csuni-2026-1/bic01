/*
Genere un numero aleatorio entre 1 y 100
Luego implemente un programa que adivine el numero generado
En cada intento el programa debe dar como pista
si el numero ingresado es mayor o menor
*/

#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    srand(time(0));
    int clave = rand() % 100 + 1;// genero numero aletorio entre 1 y 100

    int intento;
    int contador = 0;

    cout << "Intento numero: " << ++contador <<endl;
    cout << "Ingrese un entero: ";
    cin >> intento;

    while (intento != clave) {
        if (intento > clave) {
            cout << "Ingrese un numero menor: ";
        } else {
            cout << "Ingrese un numero mayor: ";
        }

        cout << "\n\nIntento numero: " << ++contador <<endl;
        cout << " Ingrese un numero: ";
        cin >>intento;
    }

    return 0;
}

/*
OPERADORES DE INCREMENTO Y DECREMENTO
i++;    significa i = i + 1;
j--;    significa j = j - 1;

++i;
*/