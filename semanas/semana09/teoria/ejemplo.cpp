#include <iostream>
using namespace std;

int main(){

    // // ESTO NO SE HACE
    // int nota1, nota2, nota3, nota4, nota5, nota6, nota7, nota8, nota9, nota10,
    //     nota11, nota12, nota13, nota14, nota15, nota16, nota17, nota18, nota19, nota20,
    //     nota21, nota22, nota23, nota24, nota25, nota26, nota27, nota28, nota29, nota30;

    // Solución: USAR ARREGLOS
    int notas[5];

    // INPUT
    cout << "Ingrese las 5 notas\n";
    for (int i = 0; i < 8; ++i) {
        cout << "Ingre la nota " << i + 1 << ": ";
        cin >> notas[i];
    }
    cout << endl;

    //OUTPUT
    cout << "Notas ingresadas" <<endl;
    for (int i = 0; i < 5; ++i) {
        cout << notas[i] << " ";
    }
    cout << endl;



    cout << "Tamaño del arreglo notas: " <<sizeof(notas)  << " bytes"<<endl;
    
    return 0;
}