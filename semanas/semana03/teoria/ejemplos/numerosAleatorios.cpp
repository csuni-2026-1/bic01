#include <iostream>
#include <cstdlib> //  srand() rand()
#include <ctime>  // time()
using namespace std;

int main(){

    srand(time(0)); // semilla que cambia con el tiempo de su PC

    int aleatorio = rand();  // rand() devuelve un numero entero aletorio entre 0 y RAND_MAX



    cout << aleatorio <<endl;
    cout << "El valor de RAND_MAX es: " << RAND_MAX <<endl;


    // ¿Cómo simulamos el resultado de lanzar un dado?
    int resultado_dado = 1 + rand() % 6;
    cout << "Resultado del dado: " << resultado_dado << endl;
    return 0;
}

