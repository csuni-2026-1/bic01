#include <iostream>
using namespace std;

int main(){
    // Búsqueda Lineal
    int arr[] = {2,8,7,5,3,-2,4,7,11};
    int n = sizeof(arr)/sizeof(arr[0]);

    int indice = -1; // no encontrado
    int clave = 7;
    for (int i = 0; i < n; ++i) {
        if(arr[i] == clave) {
            indice = i;
            break;
        }
    }
    if(indice != -1) {
        cout << "Elemento encontrado en la posiscion: " <<  indice <<endl;
    } else {
        cout << "Elemento no encontrado" <<endl;
    }

    return 0;
}