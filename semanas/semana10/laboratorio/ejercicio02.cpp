#include <iostream>
#include <cstdlib> //rand() srand()
#include <ctime> //time()
#include <iomanip> // setw()
using namespace std;


int main(){
    const int n = 5;

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

    
    // Cálculo max y min de un matriz
    int maxMatriz = M[0][0], filMax =0, colMax = 0;
    int minMatriz = M[0][0], filMin = 0, colMin = 0;
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