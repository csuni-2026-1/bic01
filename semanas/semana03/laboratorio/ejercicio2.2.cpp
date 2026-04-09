/*
2. Escribir un programa que compruebe si un número
 dado es positivo o negativo.
*/

#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Ingrese el numero: ";
    cin >> n;

    if(n > 0) {
        cout << "El numero es positivo" <<endl;
    } else if (n < 0) {
        cout << "El numero es negativo " <<endl;
    } else {
        cout << "El numero es cero " << endl;
    }

    return 0;
}