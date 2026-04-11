// Implementar una calculadora que dados 2 numeros, realice las 4 operaciones básicas (+, -. * y /)

#include <iostream>
using namespace std;

int main(){

	// datos
	double n1, n2, resultado;
	int opcion;
	
	cout << "Ingrese 2 numeros: ";
	cin >> n1 >> n2;
	
	cout << "seleccione una operacion: " << endl;
	cout << "1: Suma" << endl;
	cout << "2: Resta" << endl;
	cout << "3: Multiplicacion" << endl;
	cout << "4: Division" << endl;
	cin >> opcion;

    switch (opcion) {
        case 1:
            resultado = n1 + n2;
			cout << "El resultado es: " << resultado << endl;
            break;
        case 2:
            resultado = n1 - n2;
			cout << "El resultado es: " << resultado << endl;
            break;
        case 3:
            resultado = n1 * n2;
			cout << "El resultado es: " << resultado <<endl;
            break;
        case 4:
            if (n2 != 0) {
				resultado = n1 / n2;
				cout << "El resultado es: " << resultado <<endl;
            } else {
				cout << "Error ! Division por cero" <<endl;
            }
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }
	

    return 0;
}
