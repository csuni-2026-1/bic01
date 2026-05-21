/*
Termómetro de números Crea un programa que pida al usuario N números enteros y
los almacene en un arreglo. Calcule la suma total, el promedio y luego indique: Qué
elementos están por encima del promedio. Qué elementos están por debajo del
promedio.
*/

#include <iostream>
using namespace std;

int main(){
    int temperaturas[100];

    int N;
    cout << "Ingrese N: ";
    cin >> N;
    cout << "Ingrese las temperaturas:\n";

    int suma = 0;
    double promedio;
    for(int i = 0; i < N; ++i) {
        cout << "Temperatura " << i +1  << ": ";
        cin >> temperaturas[i];
        suma +=temperaturas[i];  // acumular la suma de temperraturas
    }

    // Promedio
    promedio = 1.0 * suma/N;  // 10/3 == 3
    cout << "Promedio: " << promedio <<endl;

    // Elementos por encima y por debajo del promedio
    cout <<"\nTemperaturas por encima del promedio\n";
    for (int i = 0; i < N; ++i) {
        if(temperaturas[i] > promedio) {
            cout << temperaturas[i] << " ";
        }
    }
    cout << endl;

    // Temperaturas por debajo


    return 0;
}