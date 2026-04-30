/*
Realice un programa que reciba como dato un número entero n 
y calcule el factorial de dicho número. 
Recuerda que 0! = 1, 1! = 1 y n! = n × (n − 1)!.
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Ingrese un entero positivo: ";
    cin >> n;

    // Usando do-while
    int factorial3 = 1; 
    int j = 1;

    do {
        factorial3 = factorial3 * j;
        j++;
    } while(j <= n);
    cout << "Factorial con do-while: " << factorial3 <<endl;

    // Usando while
    int factorial2 = 1; // NO OLVIDAR INICIALIZAR VARIABLES
    int i = 1;
    while(i <= n) {
        factorial2 = factorial2 * i;
        i++;
    }
    cout << "Factorial con while: " << factorial2 <<endl;


    // Usando for
    int factorial1 = 1; // variable que acumula el producto 
    
    for (int i = 1; i <= n ; ++i) {
        factorial1 = factorial1 * i; // factorial1 *=i;
    }
    cout << "Factorial con for: " << factorial1 <<endl;


    return 0;
}