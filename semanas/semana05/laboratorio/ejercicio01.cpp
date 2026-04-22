/*
Escriba un programa que lea tres números reales positivos. Primero, verifique si pueden
formar un triángulo (la suma de dos lados siempre debe ser mayor al tercero). Si es
posible, clasifíquelo en Equilátero, Isósceles o Escaleno, y adicionalmente indique si es
un triángulo rectángulo (usando el teorema de Pitágoras)
*/

#include <iostream>
#include <cmath> // pow(a,b)
using namespace std;




int main(){

    double a, b, c;

    // Validamos que a > 0 , b > 0 y c > 0
    do {
        cout << "Ingrese 3 numeros positivos: ";
        cin >> a >> b >> c;
    } while (a <= 0 or b <= 0 or c <= 0);

    // Validamos que las medidas a, b y c formen un triángulo
    if (a < b + c and b < a + c and c < a + b) {
        if (a == b and b == c) {  // clasificamos segun sus medidas
            cout << "Triangulo equilatero" <<endl;
        } else if (a == b or b == c or a == c) {
            cout << "Triangulo isosceles" <<endl;
        } else {
            cout << "Triangulo escaleno" <<endl;
        }

        // verificamos si es un triangulo rectangulo
        bool ha = (pow(a,2) == pow(b,2) + pow(c,2));
        bool hb = (pow(b,2) == pow(a,2) + pow(c,2));
        bool hc = (pow(c,2) == pow(b,2) + pow(a,2));

        if (ha || hb || hc) { // ||  es equivalente a colocar or
            cout << "El triángulo es rectángulo" <<endl;
        } else {
            cout << "El triángulo no es rentángulo " <<endl;
        }

    } else {
        cout << "El triangulo no existe" <<endl;
    }








   
    return 0;
}