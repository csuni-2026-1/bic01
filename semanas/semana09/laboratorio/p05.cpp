/*
TAREA 1

Ficha de estudiantes. Pide el nombre, promedio final y sección de 5
estudiantes, y almacénalos en arreglos paralelos. Luego, muestra un
ranking de alumnos de acuerdo a su promedio (mayor a menor)

ENTRADA
Ingrese nombre, promedio y seccion 1: Juan 15.6 A
Ingrese nombre, promedio y seccion 2: Pedro 11 B
Ingrese nombre, promedio y seccion 3: Luis 13 C
Ingrese nombre, promedio y seccion 4: Anibal 17 A
Ingrese nombre, promedio y seccion 5: Carlos 13 D

SALIDA
Puesto 1: A Anibal 17 A
Puesto 2: Juan 15.6
Puesto 3: Luis 13 C
Puesto 4: Carlos 13
Puesto 5: D Pedro 11 B
*/

#include <iostream>
using namespace std;

int main(){
    // Datos
    const int N = 5;

    string nombres[N]; // arreglo de nombres      nombres[0]
    float promedios[N]; // arreglo de promedios   promedios[0]
    char secciones[N+1]; // arreglo de secciones  secciones[0]

    for(int i = 0; i < N; ++i) {
        cout << "Ingrese nombre, promedio y seccion " << i+1 << ": ";
        cin >> nombres[i] >>promedios[i] >> secciones[i];
    }

    return 0;
}