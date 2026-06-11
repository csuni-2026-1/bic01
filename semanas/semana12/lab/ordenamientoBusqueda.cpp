#include <iostream>
using namespace std;


void intercambio(int &a, int &b);
void burbuja(int arr[], int size);

int busquedaLineal(int arr[], int size, int valor); // completar la implementacion
int busquedaBinaria(int arr[], int size, int valor); // compeltar la implementacion

void imprimir(int arr[], int size);


int main(){
    int A[] = {2,6,9,4,1};
    int n = 5;

    cout << "Arrreglo original:\n";
    imprimir(A,n);

    burbuja(A,n);

    cout << "Arreglo ordenado:\n";
    imprimir(A,n);



    return 0;
}

void intercambio(int &a, int &b) {  // Paso por referencia
    int temp = a;
    a = b;
    b = temp;
}

void burbuja(int arr[], int size) {
    for (size_t i = 0; i < size - 1; i++) {
        for (size_t j = 0; j < size - 1 - i; j++) {
            if(arr[j] > arr[j+1]) {
                // intercambiar
                intercambio(arr[j], arr[j+1]);
            }
        }       
    }   
}


void imprimir(int arr[], int size) {
    for (size_t i = 0; i < size; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;
}