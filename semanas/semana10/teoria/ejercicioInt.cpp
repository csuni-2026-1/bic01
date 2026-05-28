/*
Almacenar notas de 3 alumnos en 4 materias.
Calcular promedio por alumno, promedio por materia
y el mejor estudiante.
*/

#include <iostream>
using namespace std;

int main(){
    int notas[3][4]={
        {12,13,16,9}, // Alumno 1  --> 12 + 13 + 16 + 9
        {11,17,16,6}, // Alumno 2
        {7,9,18,19}   // Alumno 3
    };
    int filas = 3;
    int columnas = 4;

    double promedio = 0; // debe ser double

    double promMax = 0;
    int mejorAlumno = -1;
    
    for (int i = 0; i < filas; ++i) {
        int suma = 0; // para acumular suma de notas del i-esimo alumno
        for (int j = 0; j < columnas; ++j) {
            suma = suma + notas[i][j];
        }
        promedio = 1.0*suma/columnas;
        if(promedio > promMax) {
            promMax = promedio;
            mejorAlumno = i;
        }
        cout << "Promedio del Alumno " << i + 1 << ": " << promedio <<endl; 
    }
    cout << "Mejor Estudiante, Alumno " << mejorAlumno + 1 << endl;
    cout << "Con promedio " << promMax <<endl;


    for (int j = 0; j < columnas; ++j) {
        int suma = 0;  // para acumular la suma de  notas por curso
        for (int i = 0; i < filas; ++i) {
           suma = suma + notas[i][j];
        }
        promedio = 1.0*suma/filas;
        cout << "Promedio del Curso " << j + 1 << ": " << promedio <<endl; 
    }


    return 0;
}
