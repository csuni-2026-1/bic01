// Implementar una calculadora que dados 2 numeros, realice las 4 operaciones básicas (+, -. * y /)

Algoritmo calculadora
	// datos
	Definir n1, n2 Como Real
	Definir opcion, resultado Como Entero;
	
	Escribir "Ingrese 2 numeros: ";
	Leer n1, n2;
	
	Escribir "seleccione una operacion: ";
	Escribir "1: Suma";
	Escribir "2: Resta";
	Escribir "3: Multiplicacion";
	Escribir "4: Division";
	Leer opcion;
	
	Segun opcion Hacer
		1:
			resultado = n1 + n2;
			Escribir "El resultado es: ", resultado;
		2:
			resultado = n1 - n2;
			Escribir "El resultado es: ", resultado;
		3:
			resultado = n1 * n2;
			Escribir "El resultado es: ", resultado;
		4: 
			Si n2 <> 0 Entonces
				resultado = n1 / n2;
				Escribir "El resultado es: ", resultado;
			SiNo
				Escribir "Error ! Division por cero";
			FinSi
			
		De Otro Modo:
			Escribir "Opcion invalida";
	Fin Segun
	
FinAlgoritmo
