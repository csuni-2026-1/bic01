#include <iostream>
using namespace std;

int main(){
    int arr1[]  = {1,3,5,7,9,11,17};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int indice = -1;
    int clave = 5;

    int L = 0;
    int R = n - 1;

    while(L <= R) {
        int medio = (L + R)/2;
        if(arr1[medio] == clave) {
            indice = medio;
            break;
        } else if(arr1[medio] < clave) {  
            L = medio +  1;
        } else {
            R = medio - 1;
        }
    }

    if(indice != -1) {
        cout << "Encontrado" <<endl;
    } else {
        cout << "No encontrado" <<endl;
    }






    
    int arr[]  = {3,6,5,1,-6,5, 10,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Busqueda lineal
    int indice = -1;
    int clave = 5;

    for(int i = 0; i < n; ++i) {
        if(arr[i] == clave) {
            indice = i; // actualizamos el indice
            break;
        }
    }

    if(indice != -1) {
        cout << "Encontrado en indice: " << indice <<endl; 
    } else {
        cout << "No encontrado" <<endl;
    }









    // // Declaracion de matriz
    // //const int n =3;
    // int imagen[3][3] = {
    //     {0,123,255},
    //     {122,11,235},
    //     {34,37,123}
    // };

    // int imagen1[2][3] = {0,123,255,122,11,235}; // LA memoria es lineal, y esto está ok

    // // Solicitando datos al usuario
    // int M[2][3];
    // int filas = 2;
    // int columnas = 3;

    // cout << "Ingrese los elementos de la matriz M: \n";
    // for (int i = 0; i < filas; ++i) {
    //     for (int j = 0; columnas < 3; ++j) {
    //         cout << "Ingrese el elemento M[" << i << "][" <<j << "]: ";
    //         cin >> M[i][j];
    //     }
    // }

    return 0;
}