#include <iostream>
using namespace std;

int main(){
    int i = 2;

    while (i < 10) {
        cout << i << endl;
        cout << "Bucle infinito " << endl;
        i = i + 2;
    }
    
    cout << "Fin de programa " << endl;
    return 0;  
}