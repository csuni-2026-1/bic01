// Algoritmo que imprime los nombres de los meses
// a partir de numeros entre 1 y 12 ingresados 

Proceso condicionalSegun
	Definir mes Como Entero;
	
	Escribir "Ingrese un numero entre 1 y 12: "
	Leer mes;
	
	Segun mes Hacer
		1:
			Escribir "Enero";
		2:
			Escribir "Febrero";
		3:
			Escribir "Marzo";
		4:
			Escribir "Abril";
		5:
			Escribir "Mayo";
		6:
			Escribir "Junio";
		7:
			Escribir "Julio";
		8:
			Escribir "Agosto";
		9:
			Escribir "Setiembre";
		10:
			Escribir "octubre";
		11:
			Escribir "Noviembre";
		12:
			Escribir "Diciembre";
		De Otro Modo:
			Escribir "Error, numero fuera del rango";
	FinSegun
	
FinProceso
