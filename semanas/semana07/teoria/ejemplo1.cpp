/*
Mostrar la tabla de factoriales
desde 0 hasta 10
*/

#include <iostream>
using namespace std;

int main(){

    for(int n = 0; n <= 10; ++n) { // recorrer numeros desde 0 hasta 10
        int factorial = 1;
        for(int i = 1; i <= n; ++i){// Para cada n calculamos su factorial
            factorial *=i; 
        }
        cout << n << "! = " << factorial << endl; 
    }

    

    return 0;
}