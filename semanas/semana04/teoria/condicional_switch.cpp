// Algoritmo que imprime los nombres de los meses
// a partir de numeros entre 1 y 12 ingresados

#include<iostream>
using namespace std;
 
int main() {
	int mes;
	cout << "Ingrese un numero entre 1 y 12: " << endl;
	cin >> mes;
	switch (mes) {
	case 1:
		cout << "Enero" << endl;
		break;
	case 2:
		cout << "Febrero" << endl;
		break;
	case 3:
		cout << "Marzo" << endl;
		break;
	case 4:
		cout << "Abril" << endl;
		break;
	case 5:
		cout << "Mayo" << endl;
		break;
	case 6:
		cout << "Junio" << endl;
		break;
	case 7:
		cout << "Julio" << endl;
		break;
	case 8:
		cout << "Agosto" << endl;
		break;
	case 9:
		cout << "Setiembre" << endl;
		break;
	case 10:
		cout << "octubre" << endl;
		break;
	case 11:
		cout << "Noviembre" << endl;
		break;
	case 12:
		cout << "Diciembre" << endl;
		break;
	default:
		cout << "Error, numero fuera del rango" << endl;
	}
	return 0;
}

