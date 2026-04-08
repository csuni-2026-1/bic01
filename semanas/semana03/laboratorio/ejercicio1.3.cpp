/*
 Realizar un programa que pida al usuario dos pares de números x1, y1, x2, y2, que
representen dos puntos en el plano. Calcula y muestre la distancia entre ellos.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    // Datos
    double x1, y1, x2, y2;

    cout << "Ingrese x1, y1: ";
    cin >> x1 >> y1;

    cout << "Ingrese x2, y2: ";
    cin >> x2 >> y2;

    // Procesamiento

    double distancia = sqrt(pow(x1 - x2,2) + pow((y1-y2),2));


    //salida

    cout << "La distancia es: " <<distancia <<endl;


    return 0;
}