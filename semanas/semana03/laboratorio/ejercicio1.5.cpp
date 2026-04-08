/*
Dado un número de dos cifras, diseñe un algoritmo que permita obtener el número
invertido. Ejemplo, si se introduce 12 que muestre 21.
*/

#include <iostream>
using namespace std;

int main(){


    int numero = 21;

    //  IDEA BÁSICA: usar % y /
    int n1 = numero % 10;  // n1 = 1
    int n2 = numero/10;  // n2 = 2

    cout << n2 << n1 <<endl;



    // Caso general: suma de digitos

    int n = 1234;

    int temp = n;
    int suma = 0;
    while(n > 0) {
        suma += n%10;
        n /=10; 
    }

    cout << "La suma de digitos de " << temp << " es: " << suma <<endl;


    return 0;
}