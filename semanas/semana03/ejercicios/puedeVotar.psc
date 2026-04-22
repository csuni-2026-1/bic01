// Implementar un algoritmo que determine (decidir) si una persona puede votar
Algoritmo puedeVotar
	// Datos
	Definir edad Como Entero
	Definir tieneDNI Como Entero // 1: si, 2: No
	Escribir 'Ingrese su edad: '
	Leer edad
	Escribir '¿Tiene DNI? (1: Si, 0: No): '
	Leer tieneDNI
	// Procesar
	// Salida
	Si edad>=18 Y tieneDNI==1 Entonces
		Escribir 'Puede votar'
	SiNo
		Escribir 'No puede votar'
	FinSi
FinAlgoritmo
