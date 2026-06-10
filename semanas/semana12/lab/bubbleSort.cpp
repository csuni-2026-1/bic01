/*
Autor: Americo Ch

ENUNCIADO
Implemente la función bubbleSort y la función intercambio
*/
#include <iostream>
using namespace std;


void intercambio(int &a, int& b);
void bubbleSort(int arr[], int n);
void imprimir(int arr[], int n);

int main(){
    int A[] = {2,5,3,0,1};
    int n = 5;

    bubbleSort(A,n); 

    cout << "Arreglo ordenado\n";
    imprimir(A,n);    
    return 0;
}

// Detalles de la implementacion de funciones
void intercambio(int &a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Llamar a su funcion intercambio
                intercambio(arr[j],arr[j+1]);
            }
        }
    }
}


void imprimir(int arr[], int n) {
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl; 
}
