/*
Escribir un programa que pida al usuario que ingrese una secuencia de números enteros
positivos, terminada por un número negativo. El programa debe determinar el número
más grande y el más pequeño de la secuencia, así como su promedio.
*/

#include <iostream>
using namespace std;

int main(){
    int numero;
    int suma = 0; // variable acumulador

    int minimo  = 999; 
    int maximo = 0;

    int contador = 0; // variable contador

 

    do {
        cout << "Ingrese un entero positivo: (negativo para terminar): ";
        cin >> numero;
        if (numero > 0) {
            contador++;
            suma = suma + numero;
            if (numero < minimo){ // actualizamos el minimo
                minimo = numero;
            }

            if(numero > maximo) { // actualizamos el maximo
                maximo = numero;
            }

        }

    } while(numero > 0);

    
    if(contador > 0 ) {
        cout << "EL minimo es: " << minimo <<endl;
        cout << "El maximo es: " << maximo <<endl;
        cout << "El promedio es: " << 1.0*suma/contador << endl;
    } else {
        cout << "No ingreso ningun numero positivo" <<endl;
    }





    return 0;
}