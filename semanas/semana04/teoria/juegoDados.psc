// Implementar un algoritmo que simule un juego de dados
// La computadora debe generar un numero aleatorio entre 1 y 6
// El usuario debe ingresar un nunmero entre 1 y 6

// REGLAS DEL JUEGO
// Si ambos numeros son iguales --> EMPATE
// Si el usuario obtiene un numero mayor --> GANASTE
// En caso contrario --> PERDISTE

// REGLAS ESPECIALES
// Si el usuario saca 6 --> GANA AUTOMATICAMENTE  ok
// Si lacomputadora saca 1 --> PIERDE AUTOMATICAMENTE ok
// Si el usuario ingresa un numero fuera del rango --> ENTRADA INVALIDA  OK

// SALIDA
// EL algoritmo debe Mostrar 
// El valor del dado del usuario
// El valor del dado generado por la computadora
// El resultado del juego

Algoritmo juegoDados
	// Datos
	Definir usuario, compu Como Entero;
	
	// Generamos numero aleatorio entre 1 y 6
	compu <- Azar(6) + 1;
	
	Escribir "Ingrese un numero entre 1 y 6: ";
	Leer usuario;
	
	
	// Procesamiento // Salida
	Si usuario < 1 O usuario > 6 Entonces
		Escribir "ENTRADA INVALIDA";
	SiNo
		Escribir "Numero del usuario: ", usuario;
		Escribir "Nunmro de la computadora: ", compu;
		// Si el usuario saca 6 --> GANA AUTOMATICAMENTE
		Si usuario == 6 Entonces
			Escribir "GANA AUTOMATICAMENTE";
		FinSi
		
		// Si lacomputadora saca 1 --> PIERDE AUTOMATICAMENTE
		Si compu == 1 Entonces
			Escribir "PIERDE AUTOMATICAMENTE";
		FinSi
		
		// Si ambos numeros son iguales --> EMPATE
		// Si el usuario obtiene un numero mayor --> GANASTE
		// En caso contrario --> PERDISTE
		Si usuario == compu Entonces
			Escribir "Empate";
		SiNo
			Si usuario > compu Entonces
				Escribir "GANASTE";
			SiNo
				Escribir "PERDISTE";
			FinSi
		FinSi
		
	FinSi
FinAlgoritmo
