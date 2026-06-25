/*

ENUNCIADO:
Implementar un programa que genere 25 caracteres del alfabeto de forma aleatoria
y cuente su frecuencia

Ejemplo
"abbcbeee"

a --> 1 vez
b --> 3 veces
c --> 1 vez
e --> 3 veces
*/

#include <iostream>
#include <cstdlib> // srand(), rand()
#include <ctime> // time()
using namespace std;

int main(){

    char s[50];
    
    srand(time(0));
    int i;
    // generar caracteres aleatorios
    for(i = 0; i < 25; i++) {
        char c = 'a' + rand() % 26; // aritmetica de caracteres
        s[i] = c;
    }
    s[i] = '\0'; // obligatorio que el programador ponga el caracter nulo

    cout << s <<endl;


    // recorremos el alfabeto y para cada uno comparamos con todos los caracteres aleatorios generados
    for(char c = 'a'; c <='z'; c++) {
        int contador = 0;
        for(int i = 0; i < 25; ++i){
            if (c == s[i]) {
                contador++;
            }
        }

        if (contador > 0){
            cout << c << "-->" << contador;
            if(contador > 1) {
                cout << " veces" <<endl;
            } else {
                cout << " vez" <<endl;
            }
        }
        
    }

    return 0;
}