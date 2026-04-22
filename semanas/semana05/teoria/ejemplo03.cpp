/*
Escribir un programa que solicite al
usuario ingresar su contraseña hasta que
ingrese la correcta
*/

#include <iostream>
using namespace std;

int main(){

    int password = 123;
    int clave;
    int intentos = 0;
    do {
        cout << "Ingrese su clave: ";
        cin >> clave;
        if (clave == password) {
            cout << "Ingreso exitoso " <<endl;
        } else {
            cout << "Su clave es errónea" <<endl;
            intentos++; 
            if (intentos == 4) {
                cout << "Sistema bloaqueado" <<endl;
            }
        }
    } while (clave != password && intentos < 4);

    return 0;
}