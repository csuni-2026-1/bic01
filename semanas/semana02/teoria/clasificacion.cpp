#include <iostream>
using namespace std;

int main(){

    // Datos
	int num, cantidad_pares, cantidad_impares;
	int suma_pares, producto_pares;
	

	// NO OLVIDAR INICIALIZAR LAS VARIABLES
	cantidad_pares = 0; // variable contadora
    cantidad_impares = 0;
	suma_pares = 0;    // variable acumula sumas
	producto_pares = 1; // variable acumula producto

	// Procesamiento de datos
    // i++ significa i+1
    
	for(int i = 1; i<=10; i++) {//Para i<-1 Hasta 10 Con Paso 1 Hacer
		cout << "Ingrese el numero " << i << ": ";
		cin >> num;
		 
		//1. num es par?
		if (num % 2 == 0) {
			cantidad_pares++;//cantidad_pares = cantidad_pares + 1;
			suma_pares += num;//suma_pares = suma_pares + num;
			producto_pares *= num;//producto_pares = producto_pares * num;
        } else {
			cantidad_impares++;//cantidad_impares = cantidad_impares + 1;
        }
		
    }
	
	// Mostrar 
	
	cout << "La cantidad de pares es: " << cantidad_pares <<endl;
	cout << "La suma de pares es: " << suma_pares <<endl;
	
	if (cantidad_pares==0){
		cout << "No se ingreso pares, no tenemos producto de pares" <<endl;
    } else {
		cout << "El producto de pares es: " << producto_pares <<endl;
    }
	

	cout << "Hay " << cantidad_impares  <<" impares" <<endl;
	
	

    return 0;
}