Algoritmo  pregunta1
	
	Definir logica, codigo, presentacion Como Entero;
	Definir promedio Como Real;
	
	// 1. DECLARAR VARIABLES
	logica = 0
	codigo = 0
	presentacion = 0
	promedio = 0
	
	// 2. SOLICITAR LAS CALIFICACIONES
	ESCRIBIR "Ingrese la calificación de Lógica (0-100): "
	LEER logica
	ESCRIBIR "Ingrese la calificación de Código (0-100): "
	LEER codigo
	ESCRIBIR "Ingrese la calificación de Presentación (0-100): "
	LEER presentacion
	
	// 3. CALCULAR EL PROMEDIO
	promedio = (logica + codigo + presentacion) / 3;

	// 4. EVALUAR LAS CONDICIONES
	// Primero, verificar los fallos críticos, que tienen la máxima prioridad
	SI logica < 60 O codigo < 50 ENTONCES
		ESCRIBIR "Resultado: Reprobado"
		ESCRIBIR "Motivo: Fallo crítico. La calificación en Lógica es menor a 60 o en Código es menor a 50."
		// Si no hay fallos críticos, evaluar los demás criterios
	SINO
		// Evaluar la distinción
		SI promedio >= 85 Y logica >= 80 Y codigo >= 80 Y presentacion >= 80 ENTONCES
			ESCRIBIR "Resultado: Aprobado con Distinción"
			ESCRIBIR "Motivo: Promedio superior a 85 y ninguna calificación individual por debajo de 80."
			// Evaluar el aprobado básico
		SINO SI promedio >= 70 ENTONCES
				ESCRIBIR "Resultado: Aprobado"
				ESCRIBIR "Motivo: Promedio superior a 70."
				// Si no cumple ninguna de las condiciones anteriores, está reprobado
			SINO
				ESCRIBIR "Resultado: Reprobado"
				ESCRIBIR "Motivo: Promedio menor a 70."
			FINSI
		FINSI
	FINSI
				
FinAlgoritmo
