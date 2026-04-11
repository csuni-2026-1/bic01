/*
Escribe un programa que pida una temperatura en grados Celsius (número decimal).
Usa una cadena de if-else if para mostrar:
    Si es menor a 0 °C → "Temperatura muy baja - Riesgo de congelación"
    Si está entre 0 y 25 °C → "Temperatura normal"
    Si está entre 25 y 40 °C → "Temperatura alta - Verificar equipo"
    Si es mayor a 40 °C → "¡Peligro! Temperatura crítica

*/

#include <iostream>
using namespace std;

int main(){
    // Datos
    double temperatura;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> temperatura;

    if (temperatura < 0) {
        cout << "Temperatura muy baja - Riesgo de congelación\n";
    } else if ( temperatura < 25){     // 0 <= temperatura < 25
        cout << "Temperatura normal\n";
    } else if (temperatura < 40){     //25 <= temperatura < 40
        cout << "Temperatura alta - Verificar equipo\n";
    } else {
        cout << "¡Peligro! Temperatura crítica\n";
    }
    return 0;
}