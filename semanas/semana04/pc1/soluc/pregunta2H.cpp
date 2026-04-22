#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    int usuario, computadora;

    // Inicializar semilla aleatoria
    srand(time(0));

    // Generar número aleatorio entre 1 y 3
    computadora = rand() % 3 + 1;

    // Mostrar menú
    cout << "Juego: Piedra, Papel o Tijera\n";
    cout << "1: Piedra\n2: Papel\n3: Tijera\n";
    cout << "Ingrese su opcion: ";
    cin >> usuario;

    // Mostrar elección de la computadora
    cout << "La computadora eligio: ";
    switch (computadora) {
        case 1: cout << "Piedra\n"; break;
        case 2: cout << "Papel\n"; break;
        case 3: cout << "Tijera\n"; break;
    }

    // Evaluar resultado
    switch (usuario) {
        case 1: // Piedra
            if (computadora == 1)
                cout << "Empate\n";
            else if (computadora == 2)
                cout << "Perdiste\n";
            else
                cout << "Ganaste\n";
            break;

        case 2: // Papel
            if (computadora == 1)
                cout << "Ganaste\n";
            else if (computadora == 2)
                cout << "Empate\n";
            else
                cout << "Perdiste\n";
            break;

        case 3: // Tijera
            if (computadora == 1)
                cout << "Perdiste\n";
            else if (computadora == 2)
                cout << "Ganaste\n";
            else
                cout << "Empate\n";
            break;

        default:
            cout << "Opcion invalida\n";
    }

    return 0;
}
