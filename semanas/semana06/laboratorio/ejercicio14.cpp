/*
La sucesión de Fibonacci, es una secuencia de números en la cual cada término
es la suma de los dos términos precedentes. La sucesión inicia con 0 y 1, 
utilizando la regla descrita, algunos de sus valores son:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, . . .
Realizar un programa que muestre los primeros n términos de la sucesión
de Fibonacci y la suma de ellos.
*/

#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Cuántos términos desea mostrar: ";
    cin >> n;

    int a = 0;
    int b = 1;
    cout << a << " ";
    cout << b << " ";

    for (int i = 3; i <= n ; ++i) {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;

    return 0;
}