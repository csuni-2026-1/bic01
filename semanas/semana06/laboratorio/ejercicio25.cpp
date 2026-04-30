/*
25. Escribir un programa
 que calcule el producto de los dígitos de un número dado.
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Ingrese un entero positivo: ";
    cin >> n;

    int prod_digitos = 1;
    
    while(n > 0) {
        prod_digitos = prod_digitos*(n%10); //acumula producto de digitos
        n = n /10; // actualizamos n
    }

    cout << "El producto de digitos es: " << prod_digitos <<endl;

    return 0;
}