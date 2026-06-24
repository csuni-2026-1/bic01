#include <iostream>
using namespace std;


int main(){
    char c = 'A';
    cout << (char)(c + 32) <<endl;   // 
    cout << (char)('Z' + 32) <<endl; //
    cout << (char)('M' + 32) <<endl; //

    // Comparación de caracteres (usa su valor numérico)
    char x = 'b';
    if (x >= 'a' && x <= 'z')
        cout << "es minúscula";

    // Convertir dígito carácter a entero
    char digito = '7';
    int numero = digito - '0';  // resultado: 7

    return 0;
}