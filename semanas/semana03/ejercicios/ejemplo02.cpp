// Escribir un algoritmo que pida ingresar un numero entre 1 y 7 y muestre el dia de la semana correspondiente

#include <iostream>
using namespace std;

int main() {

	// Datos
	int n; // Definir n Como Entero;
	
	cout << "Ingrese un entero entre 1 - 7: ";
	cin >> n;
	
	
	// Procesar datos y mostrar
	switch (n) {
		case 1:
			cout << "Lunes\n";
            break;
		case 2:
			cout << "Martes\n";
            break;
		case 3:
			cout << "Miércoles\n";
            break;
		case 4:
			cout << "Jueves\n";
            break;
		case 5:
			cout << "Viernes\n";
            break;
		case 6:
			cout << "Sábado\n";
            break;
		case 7:
			cout << "Domingo\n";
            break;
		default:
			cout << "El numero ingresado es incorrecto, debe estar entre 1 y 7\n";
    }
	
}