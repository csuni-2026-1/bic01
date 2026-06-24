/*
ENUNCIADO Escribir un programa que almanene 5 nombres
y buscar uno ingresado por teclado

"Ana"
"Luis"
"Juan"
"Maria"
"Pedro"

Ingrese un nombre a buscar
Juan

Nombre encontrado en la posicion  2

*/

#include <iostream>
#include <cstring>
using namespace std;

int buscarNombre(char nombres[][20], char buscar[]) {
    for(int i = 0; i < 5; ++i) {
        if(strcmp(nombres[i], buscar) == 0) {
            return i;
            break;
        }
    }

    return -1;
}


// funcion buscarNombre usando string
int buscarNombre(string cad[], string nombre) {
    for(int i = 0; i < 5; ++i) {
        if(cad[i] == nombre) {
            return i;
            break;
        }
    }

    return -1;
}

int main(){
    char nombres[][20] = {
        "Ana",
        "Luis",
        "Juan",
        "Maria",
        "Pedro"
    };

    char buscar[20];
    cout << "Ingrese el nombre a buscar: ";
    cin >> buscar;

    int res = buscarNombre(nombres, buscar);

    if(res == -1) {
        cout << "El nombre no se encuentra" <<endl;
    } else {
        cout << "El nombre se encuentra en la posicicon " << res <<endl;
    }


    // Implementacion usando string

    string cad[] = {
        "Ana",
        "Luis",
        "Juan",
        "Maria",
        "Pedro"
    };

    string nombre;
    cout << "Ingrese el nombre a buscar: ";
    cin >> nombre;

    int resultado = buscarNombre(cad, nombre);

    if(resultado == -1) {
        cout << "El nombre no se encuentra" <<endl;
    } else {
        cout << "El nombre se encuentra en la posicicon " << resultado <<endl;
    }


    return 0;
}