/*
Ejemplo: Escribir un programa que calculo
el promedio final de alumnos del curso 
BIC01-H
*/
#include <iostream>
using namespace std;

// Prototipo de funciones
// Funcion saludar
 void saludar();
// // Funcion calcular promedios
 double calcularPromedio(double pp, double ep, double ef);

int main(){

    // Llamar a la función saludar
    saludar();

    double pp1 = 10, ep1 = 12, ef1 = 14;
    double resultado = calcularPromedio(pp1,ep1,ef1);
    cout << "Promedio del Alumno 1: " << resultado <<endl;

    double pp2 = 10, ep2 = 11, ef2 = 12;
    resultado = calcularPromedio(pp2,ep2,ef2);
    cout << "Promedio del Alumno 2: " << resultado << endl;

    double pp3 = 10, ep3 = 12, ef3 = 14;
    resultado = calcularPromedio(pp3,ep3,ef3);
    cout << "Promedio del Alumno 3: " << resultado << endl;

    return 0;
}


// Funcion saludar
void saludar() {
    cout << "Bienvenidos a tema de Funciones en C++" <<endl;
}



// Funcion calcular promedios
double calcularPromedio(double pp, double ep, double ef){
    return (pp + ep + 2*ef)/4;
}

/*
x Estamos repitiendo código

¿Qué sucede si cambia la fórmula para calcular promedios?
Debemos buscar la línea exacta y modificar cada uno de las fórmular 
para calcular promedios

*/

