#include <iostream>
#include <cmath> // pow(a,b), sqrt(), abs()
using namespace std;

int main(){



    int a, b, c;
    cout << "Ingrese la medida de los lados del triangulo: ";
    cin >> a >> b >> c;

    // Ejercicio: Validar  que las longitudes defina un triangulo

    // Si se cumple Pitágoras entonces es triángulo rectángulo
    if (c*c == a*a + b*b || a*a == b*b + c*c || b*b == a*a + c*c) {
        cout << "El triangulo es rectangulo" <<endl;
    }

    // Si sólo dos lados del triángulo son iguales entonces es isósceles.
    // and  &&
    // or   ||
    // not  ~
    if ((a == b && a != c) || (a==c && a != b) || (b == c && b != a)  ) {
        cout << "El triangulo es isosceles" <<endl;
    }

    // Si los 3 lados son iguales entonces es equilátero
    if (a == b && b == c) {
        cout << "El triangulo es equilatero" <<endl;
    }

    // Si no se cumple ninguna de las condiciones anteriores, es escaleno.
    if (a != b && b !=c && c!=a) {
        cout << "El triangulo es escaleno" <<endl;
    }

    return 0;
}