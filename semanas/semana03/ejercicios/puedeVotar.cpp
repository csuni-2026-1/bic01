// Implementar un algoritmo que determine (decidir) si una persona puede votar

#include <iostream> // para usar std::cout << , std::cin >>, std::endl;
using namespace std; // para usar cout << , cin >>,  endl;

int main() {
    
    // Datos
	int edad; // Definir edad Como Entero
    int tieneDNI; // Definir tieneDNI Como Entero // 1: si, 2: No
	
    cout << "Ingrese su edad: ";
	cin >> edad;
	cout << "¿Tiene DNI? (1: Si, 0: No): ";
	cin >> tieneDNI;
	
    // Procesar
	// Salida

    if (edad>=18 && tieneDNI==1 ) {
        cout << "Puede votar" <<endl; 
    } else {
        cout << "No puede votar" << endl;
    }

    return 0; // significa que su programa no tiene fallas


}



	