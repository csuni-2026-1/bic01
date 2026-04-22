#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
int numeroSecreto = rand() % 101; // Número aleatorio entre 0 y 100
int adivinanza;

// Intento 1
cout << "Intento 1: ";
cin >> adivinanza;
if (adivinanza == numeroSecreto) {
    cout << "Adivinaste.El número ingresado es igual al número generado." << endl;
    return 0;
} else if (adivinanza < numeroSecreto) {
    cout << "El número ingresado es menor. Intente nuevamente." << endl;
} else {
    cout << "El número ingresado es mayor. Intente nuevamente" << endl;
}

// Intento 2
cout << "Intento 2: ";
cin >> adivinanza;
if (adivinanza == numeroSecreto) {
    cout << "Adivinaste.El número ingresado es igual al número generado." << endl;
    return 0;
} else if (adivinanza < numeroSecreto) {
    cout << "El número ingresado es menor. Intente nuevamente." << endl;
} else {
    cout << "El número ingresado es mayor. Intente nuevamente" << endl;
}

// Intento 3
cout << "Intento 3: ";
cin >> adivinanza;
if (adivinanza == numeroSecreto) {
    cout << "Adivinaste.El número ingresado es igual al número generado." << endl;
    return 0;
} else {
    cout << "Intento 3. No adivinaste";
}


return 0;
}