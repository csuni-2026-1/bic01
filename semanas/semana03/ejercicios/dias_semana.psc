// Escribir un algoritmo que pida ingresar un numero entre 1 y 7 y muestre el dia de la semana correspondiente

Algoritmo dias_semana
	// Datos
	Definir n Como Entero;
	
	Escribir "Ingrese un entero entre 1 - 7: ";
	Leer n;
	
	
	// Procesar datos y mostrar
	Segun n Hacer
		1:
			Escribir "Lunes";
		2:
			Escribir "Martes";
		3:
			Escribir "Miércoles";
		4:
			Escribir "Jueves";
		5:
			Escribir "Viernes";
		6:
			Escribir "Sábado";
		7:
			Escribir "Domingo";
		De Otro Modo:
			Escribir "el numero ingresado es incorrecto, debe estar entre 1 y 7";
	Fin Segun
	
	
FinAlgoritmo
