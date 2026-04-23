/*
Implemente una calculadora con las cuatro operaciones básicas. Después de realizar
una operación y mostrar el resultado, el programa debe preguntar al usuario: "¿Desea
realizar otra operación? (S/N)". Si el usuario presiona ’S’ o ’s’, el programa debe
limpiar (o simplemente repetir) el proceso; si presiona ’N’ o ’n’, el programa termina
*/


#include <iostream>
using namespace std;

int main(){
    int opcion;
    char respuesta;

    int a, b;
    
    do {
        cout << "----- Menú de opciones----\n";   // \n es equivalente a endl
        cout << "1. Sumar\n";
        cout << "2. Restar\n";
        cout << "3. Multiplicar\n";
        cout << "4. Dividir\n";
        cout << "Elija una opción: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese 2 numeros enteros: ";
            cin >> a >> b;
        }

        switch (opcion) {
            case 1:
                cout << "Realizando la suma\n";
                cout <<"La suma es: " << a + b <<endl;
                break;
            case 2:
                cout << "Realizando la resta\n";
                cout <<"La resta es: " << a - b <<endl;
                break;
            case 3:
                cout << "Realizando el producto\n";
                cout << "El producto es: " << a * b <<endl;
                break;
            case 4:
                cout << "Realizando la división\n";
                if (b == 0) {
                    cout << "El denominador es cero\n";
                }else {
                    cout << "La division es: " << 1.0 * a/b << endl;
                }
                break;
            default:
                cout << "Opcion inválida\n";
                break;
        }

        cout << "¿Desea realizar otra operación? (S/N): ";
        cin >> respuesta;
        
    } while (respuesta == 'S' || respuesta == 's');

    


    return 0;
}