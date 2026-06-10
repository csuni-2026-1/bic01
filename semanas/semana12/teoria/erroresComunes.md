# Errores comunes en el tema de Funciones

## 1. No inicializar variables

```cpp
int suma;  // suma puede tomar cualquier valor 
```

## 2. Usar void como tipo de retorno, si la función no devuelve ningún valor

```cpp
void saludo();  
```

## 3. No podemos anidar funciones

```cpp
int main() {

    int sumar(int a, int b); // ERROR

    return 0;
} 
```

