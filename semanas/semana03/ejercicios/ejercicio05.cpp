/*
Un administrador tiene un presupuesto de 5000 soles.
El programa pide:
    El monto del gasto (decimal)
    El tipo de gasto (entero): 1 = Compra de materiales, 2 = Servicios, 3 = Sueldos, 4 =
Otros
Usa switch para mostrar un mensaje específico según el tipo de gasto y luego un if para
verificar si el gasto excede el presupuesto:
    Si el total supera 5000 → "¡Presupuesto excedido!"
    Si no → "Gasto registrado correctamente
*/
#include <iostream>
using namespace std;

int main(){

    // Datos
    float presupuesto = 5000;
    float gasto;
    int tipo;

    cout << "Ingrese el monto del gasto: ";
    cin  >> gasto;

    cout << "Ingrese el tipo de gasto (entero): 1 = Compra de materiales, 2 = Servicios, 3 = Sueldos, 4 = Otros: ";
    cin >> tipo;

    // Procesar
    switch (tipo) {
        case 1:
            cout << "Registrando  gastos en compra de materiales\n";
            break;
        case 2:
            cout << "Registrando  gastos en servicios\n";
            break;
         case 3:
            cout << "Registrando  sueldos\n";
            break;
        case 4:
            cout << "Registrando otros gastos\n";
            break;
        default:
            cout << "Gasto inválido\n";
            break;
    }

    if (gasto > presupuesto) {
        cout << "Presupuesto excedido\n";
    }
    else {
        cout << "Gasto registrado correctamente\n";
    }


    return 0;
}