/*
Una universidad otorga becas basadas en el promedio y la edad del estudiante. Imple-
mente la siguiente lógica:
Si es mayor de 18 años y promedio ≥ 18: Beca de S/. 2000.
Si es mayor de 18 años y promedio ≥ 15: Beca de S/. 1000.
Si tiene 18 años o menos y promedio ≥ 18: Beca de S/. 3000.
Si tiene 18 años o menos y promedio ≥ 16: Beca de S/. 2000.
En cualquier otro caso: “Enviar carta de motivació”.
*/

#include <iostream>
using namespace std;

int main(){

    // Datos
    int edad;
    double promedio;

    cout << "ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su promedio: ";
    cin >> promedio;


    if (edad > 18) {
        if (promedio >= 18) {
            cout << "Beca de S/. 2000." <<endl;
        } else if (promedio >= 15) { // promedio < 18
            cout << "Beca de S/. 1000." <<endl;
        } else {
            cout << "Enviar carta de recomendación" <<endl;
        }
    } else { // edad <= 18
        if (promedio >= 18) {
            cout << "Beca de S/. 3000." <<endl;
        } else if (promedio >= 16){
            cout << "Beca de S/. 2000." <<endl;
        } else {
            cout << "Enviar carta de recomendación" <<endl;
        }
    }

    return 0;
}