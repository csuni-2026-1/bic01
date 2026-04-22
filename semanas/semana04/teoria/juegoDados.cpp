/*
Implementar un algoritmo que simule un juego de dados
La computadora debe generar un numero aleatorio entre 1 y 6
El usuario debe ingresar un numero entre 1 y 6

REGLAS DEL JUEGO
Si ambos numeros son iguales --> EMPATE
Si el usuario obtiene un numero mayor --> GANASTE
En caso contrario --> PERDISTE

REGLAS ESPECIALES
Si el usuario saca 6 --> GANA AUTOMATICAMENTE  
Si lacomputadora saca 1 --> PIERDE AUTOMATICAMENTE 
Si el usuario ingresa un numero fuera del rango --> ENTRADA INVALIDA  

SALIDA
EL algoritmo debe Mostrar 
El valor del dado del usuario
El valor del dado generado por la computadora
El resultado del juego
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	// Datos
	int usuario, compu;
	
    srand(time(0));
	// Generamos numero aleatorio entre 1 y 6
	compu = rand()%6 + 1;
	
	cout << "Ingrese un numero entre 1 y 6: ";
	cin >>  usuario;
	
	
	// Procesamiento // Salida  
	if (usuario < 1 || usuario > 6) { // validamos la entrada del usuario
		cout << "ENTRADA INVALIDA" << endl;
    } else {
		cout << "Numero del usuario: " << usuario << endl;
		cout << "Numero de la computadora: " << compu << endl;
		// Si el usuario saca 6 --> GANA AUTOMATICAMENTE
		if (usuario == 6) {
			cout << "GANA AUTOMATICAMENTE" << endl;
        }
		
		// Si lacomputadora saca 1 --> PIERDE AUTOMATICAMENTE
		if (compu == 1){
			cout << "PIERDE AUTOMATICAMENTE" << endl;
        }
		
		// Si ambos numeros son iguales --> EMPATE
		// Si el usuario obtiene un numero mayor --> GANASTE
		// En caso contrario --> PERDISTE
		if (usuario == compu){
			cout << "Empate" << endl;
        } else{ 
			if (usuario > compu)
				cout << "GANASTE" <<endl;
			else
				cout << "PERDISTE" << endl;
        }
		
    }
    
    return 0;
}