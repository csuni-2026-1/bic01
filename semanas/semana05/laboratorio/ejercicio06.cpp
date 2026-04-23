/*
Escriba un programa que solicite una nota entre 0 y 20. El programa debe seguir
pidiendo la nota repetidamente mediante un bloque do-while hasta que el usuario
ingrese un valor válido. Al finalizar, mostrar la nota aceptada.

Validar 3 notas
calcular el promedio
Clasificar al estudiante
Aprobado (promedio >= 10)
    Si promedio <= 14 "Bueno"
    Si promedio <=16 "Regular"
    Si promedio <= 20 "Excelente"
Desabrobado (promedio < 10)
*/
#include <iostream>
using namespace std;

int main(){
    int nota1, nota2, nota3;

    double promedio;

 

    do {
        cout << "Ingrese sus 3 notas: ";
        cin >> nota1 >> nota2 >> nota3;

        if (nota1 < 0 || nota1 > 20 || nota2 < 0 || nota2 > 20 || nota3 < 0 || nota3 > 20) {
            cout << "Al menos una nota es incorrecta:\n";
            cout << "Vuelva a ingresar las 3 notas: ";
            cin >> nota1 >> nota2 >> nota3;
        }

    } while (nota1 < 0 || nota1 > 20 || nota2 < 0 || nota2 > 20 || nota3 < 0 || nota3 > 20);

    
    promedio = 1.0*(nota1 + nota2 + nota3)/3;

    cout << "Su promedio es: " << promedio <<endl;

    if (promedio >= 10) {
        cout << "APROBADO\n";
        if (promedio <= 14) {
            cout << "BUENO\n";
        }else if (promedio <= 16) {
            cout << "REGULAR\n";
        } else {
            cout << "EXCELENTE\n";
        }
    } else {
        cout << "DESAPROBADO\n";
    }


    return 0;
}