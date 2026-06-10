// Funcion sumar:
#include <iostream>
using namespace std;

// 1. Prototipo de la funcion
int sumar(int a, int b);

int main() {
    int num1 = 4;
    int num2 = 5;

    // 3 Llamar a la función
    cout << sumar(num1,num2) <<endl;
    

    return 0;
}

// 2. Definición
int sumar(int a, int b) {
    return a + b;
}