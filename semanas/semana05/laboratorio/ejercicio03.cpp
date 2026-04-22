/*
Solicite al usuario el día, mes y año de una fecha. El programa debe determinar si la
fecha es válida, considerando años bisiestos (un año es bisiesto si es divisible por 4 y
no por 100, o si es divisible por 400)
*/

#include <iostream>
using namespace std;

int main(){

    int dia, mes, anio, diasMes;
    cout << "ingrese el dia, mes y año respectivamente: ";
    cin >> dia >> mes >> anio;


    bool esBisiesto = ((anio % 4 == 0 && anio % 100 != 0) ||(anio %400 == 0));

    // inicializamos diasMes de acuerdo al mes
    switch(mes) { 
        case 4: case 6: case 9: case 11: diasMes = 30; break;
        case 1: case 3: case 5: case 7: case 8: case 10: diasMes = 31; break;
        case 2: diasMes = (esBisiesto) ? 29 : 28; break;
        default: cout << "mes invalido"; break;
    }


    if (1 <= mes &&  mes <= 12 && 1 <= dia && dia <= diasMes) {
        cout << "Fecha valida" <<endl;
    } else {
        cout << "Fecha invalida" <<endl;
    }

    return 0;
}