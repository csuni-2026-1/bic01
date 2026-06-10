#include <iostream>
using namespace std;

void imprimirArreglo(int arr[], int size) {
    cout << "sizeof(arr) = " << sizeof(arr)  << " bytes"<< endl;
    for(int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int A[] = {1,2,3,4,5};
    int n = 5;

    cout << "sizeof(A) = " << sizeof(A)  << " bytes"<< endl;
    imprimirArreglo(A,n);

    return 0;
}