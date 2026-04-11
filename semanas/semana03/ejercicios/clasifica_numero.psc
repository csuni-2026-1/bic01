// Escribir un algoritmo que determine si un número es positivo negativo o cero

Algoritmo clasifica_numeros
	// Datos
	Definir n Como Entero;
	
	Escribir "Ingrese un numero: ";
	Leer n;
	
	// Procesar
	Si n > 0 Entonces
		Escribir "El numero es positivo";
	SiNo    // n es <= 0
		Si n < 0 Entonces
			Escribir "El numero es negativo"; 
		SiNo   // n == 0
			Escribir "El numero es cero";
		Fin Si
	Fin Si
	
	// Salida
	
FinAlgoritmo
