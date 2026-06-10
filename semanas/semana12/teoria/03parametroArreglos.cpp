#include <iostream>
using namespace std;


// [] vacíos: no necesita saber el tamaño en compilación
// size: el tamaño llega como parámetro aparte
void duplicar(int arr[], int size) {
    for (int i = 0; i < size; i++)
        arr[i] *= 2;  // modifica el original directamente
}

int main() {
    int v[] = {1, 2, 3, 4, 5};
    int n = sizeof(v) / sizeof(v[0]);  // truco estándar

    duplicar(v, n);  // sin [], sin índices

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";  // 2 4 6 8 10

    
}
