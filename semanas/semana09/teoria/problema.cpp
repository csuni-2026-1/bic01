#include <iostream>
using namespace std;

int main(){
    // ESTO NO DEBEMOS HACER
    int nota1, nota2, nota3, nota4, nota5, nota6, nota7, nota8, nota9, nota10,
        nota11, nota12, nota13, nota14, nota15, nota16, nota17, nota18, nota19, nota20,
        nota21, nota22, nota23, nota24, nota25, nota26, nota27, nota28, nota29, nota30;

    // Inicializar??, Recorrer??, Imprimir ??

    // SOLUCIÓN USAR ARREGLOS
    int notas[30];

    cout << sizeof(notas) << " bytes" <<endl;

    int n;
    cout << "Cuantas notas desea ingresar: (max 30 notas): ";
    cin >> n;

    // INPUT
    for (int i = 0; i < n; ++i) {
        cout << "Ingrese nota " << i + 1 << ": ";
        cin >> notas[i];
    }

    // OUTPUT
    // cout << notas << endl;
    for (int i = 0; i < n; ++i) {
        cout << notas[i] << " ";
    }
    cout << endl;


    int notas2[3] = {12}; // 12, 0, 0
    int notas3[1000] = {0};

    int notas4[]  = {1,2,3,4,5};

    int tam = sizeof(notas)/sizeof(notas[0]);















    return 0;
}