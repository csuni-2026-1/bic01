#include <iostream>
using namespace std;

int main(){
    int arr[] = {10,1,2,3,4,5,6,7,8,9};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout <<"Arreglo original" <<endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout <<endl;

    for(int i = 0; i < n - 1; ++i) {
        cout << "\nPasada " << i + 1 << ":\n";
        bool hayIntercambios = false;
        for(int j = 0; j < n - 1 - i ; ++j) {
            if(arr[j] > arr[j+1]) {
                // intercambio swap(arr[j], arr[j+1]);
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                hayIntercambios = true;
            }
        }
        cout <<"\nArreglo resultante:" <<endl;
        for (int i = 0; i < n; ++i) {
            cout << arr[i] << " ";
        }
        cout <<endl;

        if(!hayIntercambios){
            break;
        }


    }

    // cout <<"Arreglo ordenado en forma creciente" <<endl;
    // for (int i = 0; i < n; ++i) {
    //     cout << arr[i] << " ";
    // }
    // cout <<endl;


    return 0;
}