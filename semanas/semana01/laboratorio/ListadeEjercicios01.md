# Laboratorio 1: Introducción al Pensamiento Computacional y Algorítmico en  PSeInt y C++

> Cada ejercicio debe resolverse primero en **PSeInt** (pseudocódigo), y luego implementarse en **C++**.  Analiza el problema antes de escribir código: identifica las **entradas**, el **proceso** y las **salidas**.

---

### Ejemplos

a) Mostrar un saludo de bienvenida al curso.

b) Implementar un algoritmo para sumar 2 números enteros

c) Implementar un algoritmo que calcule el área de un rectángulo

d) Implementar un algoritmo para convertir grados Celsius en Fahrenheit:  $F = C*9/5 + 32$

e) Escribir un algoritmo para determinar si un numero es par o impar



### Ejercicio 1 — Tu primera conversación con la computadora 
**Tema:** Entrada / Salida básica, variables de tipo texto y entero

Escribe un programa que le pida al usuario su **nombre** y su **edad** y luego muestre un mensaje personalizado como:

```
¡Hola, María! Tienes 20 años.
En 10 años tendrás 30 años.
```


---

### Ejercicio 2 — La caja registradora 
**Tema:** Operaciones aritméticas. Variables reales.

Un cliente compra **3 productos**. El programa debe pedir el precio de cada uno, calcular el **subtotal**, aplicar un **IGV del 18%** y mostrar el **total a pagar**.

```
Precio producto 1: S/ 25.50
Precio producto 2: S/ 12.00
Precio producto 3: S/ 8.75
-----------------------------
Subtotal:  S/ 46.25
IGV (18%): S/ 8.33
TOTAL:     S/ 54.58
```

---

### Ejercicio 3 — ¿Aprobado o reprobado? 
**Tema:** Condicional simple `Si...Entonces...SiNo`, comparaciones

Ingresa la **nota final** de un estudiante (0–20). El programa debe indicar si **aprobó** (nota ≥ 10) o **reprobó**, y mostrar un mensaje motivador en cada caso.


---

### Ejercicio 4 — La calculadora de IMC 
**Tema:** Condicionales encadenados `Si...Sino Si`. , operaciones con decimales, con

Pide el **peso** (kg) y la **altura** (metros) de una persona. Calcula el **Índice de Masa Corporal** (IMC = peso / altura²) y clasifícalo:

| IMC | Clasificación |
|-----|--------------|
| < 18.5 | Bajo peso |
| 18.5 – 24.9 | Normal |
| 25 – 29.9 | Sobrepeso |
| ≥ 30 | Obesidad |

---

### Ejercicio 5 — Contador de vocales 
**Tema:** Condicionales con caracteres, operador `o` en condicionales, condicionales anidados

Pide al usuario que ingrese **una letra**. El programa debe decir si es una **vocal** o una **consonante**, y si es **mayúscula o minúscula**.

---


### Ejercicio 6 — La tabla de multiplicar interactiva 
**Tema:** Bucle `Para...hasta`

Pide un número al usuario y muestra su **tabla de multiplicar** del 1 al 12 

```
Tabla del 7:
7  x  1  =   7
7  x  2  =  14
...
7  x 12  =  84
```

---
### Ejercicio 7 — Adivina el número 
**Tema:** `Bucle Mientras (while)` + condicionales, contador de intentos, lógica de juego

La computadora tiene un número **secreto fijo** (ej: 42). El usuario debe adivinarlo. En cada intento, el programa responde `"Muy alto"`, `"Muy bajo"` o `"¡Correcto!"`. Cuenta cuántos intentos necesitó.

```
Intento 1: 70 → Muy alto
Intento 2: 30 → Muy bajo
Intento 3: 42 → ¡Correcto! Lo lograste en 3 intentos.
```


---

### Ejercicio 8 — Sumador inteligente
**Tema:** `Repetir...hasta que (do - while)` + acumuladores, actualización de máximo y mínimo

Pide números al usuario **uno por uno** hasta que ingrese el **0** como señal de parada. Al finalizar muestra:
- La **suma** de todos los números
- El **promedio**
- El número **mayor** y el **menor**


---

### Ejercicio 9 — Pirámide de estrellas 
**Tema:** Bucles anidados `Para (for)`, espacios y caracteres

Pide un número `n` al usuario y dibuja una **pirámide de estrellas** de `n` filas:

```
    *
   ***
  *****
 *******
*********
```

---

### Ejercicio 10 — Números primos en rango
**Tema:** Bucles anidados + lógica matemática, variable bandera, optimización básica.

Pide dos números al usuario (inicio y fin) y lista todos los **números primos** dentro de ese rango.

```
Primos entre 10 y 50:
11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47
Total encontrados: 11
```

<!--


### Ejercicio 11 — Conversor de bases numéricas 
**Tema:** División entera , módulo `mod`, lógica algorítmica, `segun`, lógica de conversión

Crea un programa que convierta un número **decimal** (base 10) a su equivalente en:
- **Binario** (base 2)
- **Octal** (base 8)
- **Hexadecimal** (base 16) — usando letras A–F para 10–15

El usuario elige qué conversión realizar desde un **menú**.

**Pista:** Usa divisiones sucesivas y guarda los residuos en orden inverso.

---


### Ejercicio 12 — Validador de contraseñas seguras 
**Tema:** Análisis de cadenas + bucles, funciones de comparación, contadores por categoría

Pide al usuario que ingrese una contraseña y evalúa su **nivel de seguridad** analizando si contiene:
- Al menos 8 caracteres
- Al menos una mayúscula
- Al menos un número
- Al menos un símbolo especial (`@`, `#`, `!`, `$`)

Clasifica la contraseña como: `Débil`, `Moderada` o `Fuerte` según cuántos criterios cumple.

---

### Ejercicio 13 — La espiral de Fibonacci y la proporción áurea
**Tema:** Sucesiones iterativas + análisis matemático, variables auxiliares de "anterior" y "actual", formato de decimales.

Genera los primeros **N términos** de la sucesión de Fibonacci (donde el usuario elige N). Luego calcula y muestra el **cociente entre términos consecutivos** (Fib[i+1] / Fib[i]) para mostrar cómo converge a la **proporción áurea** (≈ 1.6180...).

```
F(1)  =   1
F(2)  =   1
F(3)  =   2  | Razón: 2.000000
F(4)  =   3  | Razón: 1.500000
F(5)  =   5  | Razón: 1.666667
...
F(15) = 610  | Razón: 1.618182  ≈ φ
```


---

### Ejercicio 14 — Simulador de cajero automático 
**Tema:** Integración de conceptos — menú con bucle externo, condicionales, saldo, validaciones múltiples, arreglos básicos para historial *(string en C++)*

Simula un **cajero automático** con las siguientes operaciones en un menú repetitivo:

1. Consultar saldo
2. Depositar dinero
3. Retirar dinero (validar que haya saldo suficiente y que sea múltiplo de S/10)
4. Ver historial de últimas 5 operaciones
5. Salir

El saldo inicial es **S/ 500.00**. Cada operación debe mostrar el **saldo actualizado** y un **comprobante**.

**Lo que practicas:** menú con bucle externo, validaciones múltiples, arreglos básicos para historial *(en C++ puedes usar un arreglo de strings)*.

---

### Ejercicio 15 — El cifrado César 
**Tema:** Desafío algorítmico — manipulación de texto, operaciones con caracteres ASCII (`ord`/`chr` en PSeInt, casting en C++), aritmética modular, lógica de encriptación real.

Implementa el famoso **cifrado César**: un método de encriptación que desplaza cada letra del alfabeto un número fijo de posiciones.

El programa debe:
1. Pedir un **mensaje** al usuario (solo letras y espacios)
2. Pedir la **clave de desplazamiento** (número del 1 al 25)
3. Mostrar el **mensaje cifrado**
4. Ofrecer también **descifrar** un mensaje con la misma clave
5. *(Bonus)* Intentar **descifrar por fuerza bruta**: probar las 25 claves posibles y mostrarlas todas

```
Mensaje:  HOLA MUNDO
Clave:    3
Cifrado:  KROD PXQGR

Descifrado con clave 3: HOLA MUNDO 
```

-->

