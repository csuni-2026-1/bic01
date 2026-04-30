#include <iostream>
using namespace std;

int main(){
    int n;

    do{
        cout << "Ingrese un entero positivo: ";
        cin >> n;
    }while( n<=0 );

    long long factorial = 1;
    for(int i = n; i>=1; i = i - 2) {
        factorial = factorial* i; 
    }

    cout << "El factorial doble de " << n << " es: " << factorial <<endl;

    return 0;
}