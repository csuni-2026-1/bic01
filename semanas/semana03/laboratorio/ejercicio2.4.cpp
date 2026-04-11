/*
Escribir un programa que, al recibir como dato el precio de un producto importado,
incremente 11 % el mismo si es inferior a 1500 soles y en 8 % si fuera mayor o igual
a dicho precio; además, debe escribir el nuevo precio del producto. 
*/

#include <iostream>
using namespace std;

int main(){

    double precio, nuevo_precio;
    cout << "Ingrese el precio: ";
    cin >> precio;

    if (precio < 1500) {
        nuevo_precio = precio + 0.11*precio;  // (1.11)*precio
    } else {
        nuevo_precio = precio + 0.08*precio;
    }

    cout << "EL nuevo precio del producto es: " << nuevo_precio <<endl;


    return 0;
}