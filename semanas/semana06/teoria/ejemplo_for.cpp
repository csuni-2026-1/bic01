/*
Implementar la tabla de multiplicar del 5
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
.
.
.
5 x 12 = 60
*/
#include <iostream>
using namespace std;

int main() {

   

    for (int n = 6; n <= 9; ++n) {
        cout << "\nTabla del " << n << "\n";
        for(int i = 1; i <= 12; i++) {
            cout << n << " x " << i << " = " << n * i << endl;
        }
    }

    

    
    
    return 0;
}