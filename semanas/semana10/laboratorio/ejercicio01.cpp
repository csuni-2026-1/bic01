/*
Escribir un programa que:
1.  Reciba como dato un arreglo bidimensional cuadrado de
tipo entero y dimensión 10, 

2. Imprima la diagonal de dicho arreglo y a continuación

3. ordene los elementos de dicha diagonal en forma ascendente.
*/

/*
Ejercicio 2: Mostrar el elemento max y min en la matriz y sus posiciones
*/
#include <iostream>
#include <cstdlib> //rand() srand()
#include <ctime> //time()
#include <iomanip> // setw()
using namespace std;


int main(){
    const int n = 10;

    int M[n][n];

    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            M[i][j] = rand() % 50 + 1;  // inicializa la matriz con elementos aleatorios entre 1 y 50
        }
    }

    // Mostrar la matriz
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout <<setw(3) <<M[i][j];
        }
        cout << endl;
    }

    cout << "\nLa diagonal de la matriz es:\n";
    for(int i = 0; i < n; ++i) {
        cout << M[i][i] << " ";
    }
    cout << endl;

    // Ordenamiento Burbuja
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (M[j][j] > M[j + 1][j+1]) {
                swap(M[j][j], M[j + 1][j+1]);
            }
        }
    }

    // 
    cout << "\nLa diagonal ordena de la matriz es:\n";
    for(int i = 0; i < n; ++i) {
        cout << M[i][i] << " ";
    }
    cout << endl;


    // Ejercicio 2:
    int maxMatriz = M[0][0], filMax, colMax;
    int minMatriz = M[0][0], filMin, colMin;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(M[i][j] > maxMatriz) {
                maxMatriz = M[i][j];
                filMax = i;
                colMax = j;
            }

            if(M[i][j] < minMatriz) {
                minMatriz = M[i][j];
                filMin = i;
                colMin = j;
            }
            
        }
    }

    cout << "EL max de la matriz es: " << maxMatriz << endl;
    cout << "Posicion: " << filMax << " " << colMax <<endl;

    cout << "EL min de la matriz es: " << minMatriz << endl;
    cout << "Posicion: " << filMin << " " << colMin <<endl;
    

    return 0;
}