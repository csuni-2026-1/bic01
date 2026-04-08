#include <iostream>
using namespace std;

int main(){

	// Datos
	double largo, ancho, area;
	
	cout << "Ingrese el largo y el ancho respectivamente: ";
	cin >> largo >> ancho;
	
	// Procesar datos
	area = largo * ancho;
	
	// Mostrar resultados
	cout << "El area es: " << area <<endl;

	return 0;
}

