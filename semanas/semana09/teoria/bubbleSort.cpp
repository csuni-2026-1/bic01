#include <iostream>
using namespace std;

int main(){
    int arr1[] = {10, 1,2,3,4,5,6,7,8,9}
    int arr[] = {23,17,5,11,12};
    int n = sizeof(arr)/sizeof(arr[0]); // recuperamos el tamaño del arreglo arr

    cout << "\nArreglo Original\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Recorremos el arreglo n-1 veces
    for(int i = 0; i < n - 1; ++i) {
        for(int j = 0; j < n - 1 - i; ++j ) {
            if(arr[j] > arr[j+1]) {
                // Intercambio
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }

    
    cout << "\nArreglo Ordenado en forma creciente:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ",";
    }
    cout << endl;



    return 0;
}