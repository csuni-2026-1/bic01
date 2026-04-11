// Escribir un algoritmo que determine si un número es positivo negativo o cero

#include <iostream>  // para usar std::cout <<  std::cin >>
using namespace std;


int main() {
    // Datos
	int n;
	cout << "Ingrese un numero: " ;
	cin >> n;

    // Procesar , salida

    if (n > 0) {
        cout << "El numero es positivo" << endl;
    } else  {   //  aquí n es negativo o cero
        if (n < 0) {
            cout << "El numero es negativo" << endl;
        } else { // aquí n es cero
            cout << "El numero es cero" << endl;
        }
    }
		

    return 0; // indica que el programa funciono correctamente
}
	
	