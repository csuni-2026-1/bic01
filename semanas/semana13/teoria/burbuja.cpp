#include <iostream>
using namespace std;


/*
1,5,4,2,3

1,4,2,3,5
*/

void burbuja(int arr[], int n) {
    if (n == 0){
        return;
    }

    // Recursiva
    for (int j = 0; j < n - 1; ++j) {
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j + 1]);
        }
    }
       
    burbuja(arr,n-1);
}

int main(){
    int A[] = {2,7,1,0,-2,3};
    int n = 6;
    burbuja(A,n);

    for(int i = 0; i <6; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}