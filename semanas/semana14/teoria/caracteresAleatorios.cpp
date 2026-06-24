#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int conteo[26] = {0};   // indice 0='a', 1='b', ..., 25='z'
    char c;
    
    cout << "Caracteres generados: ";
    for (int i = 0; i < 25; i++) {
        c = 'a' + rand() % 26;
        cout << c << " ";
        conteo[c - 'a']++;  // aritmética ASCII como índice
    }
    cout << endl;
    
    cout << "Ocurrencias:" << endl;
    for (int i = 0; i < 26; i++)
        if (conteo[i] > 0)
            cout << (char)('a' + i) << ": " << conteo[i] << endl;
    return 0;
}