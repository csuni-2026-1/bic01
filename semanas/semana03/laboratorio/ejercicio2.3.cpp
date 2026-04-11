/*
Escribir un programa que, al recibir como dato el promedio de un alumno del curso,
escriba aprobado en caso de que el promedio sea mayor o igual a 10 y reprobado en
caso contrario
*/

#include <iostream>
using namespace std;

int main(){

    double promedio;

    cout << "Ingrese su promedio: ";
    cin >> promedio;


    if (promedio >= 10) {
        cout << "Aprobado" <<endl;
    } else {
        cout << "Reprobado" <<endl;
    }
    

    return 0;
}