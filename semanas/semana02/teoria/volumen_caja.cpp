#include <iostream> // para std::cout <<
using namespace std; // para usar cout <<, cin>>

int main() {
    // Datos
	double largo, ancho, altura, volumen;
	
	cout << "Ingrese las dimensiones: (largo, ancho, altura): ";
	cin >> largo >> ancho >> altura;
	
	// Proceso
	volumen = largo * ancho * altura;
	
	// Salida
	cout << "El volumen es: " << volumen << "\n\n";

    return 0;
}