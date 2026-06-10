#include <iostream>
using namespace std;

int main(){
    const int n = 3;
    int A[n][n] = {
        {1,0,0},
        {0,5,0},
        {0,0,9}
    };

    // A == A^T  <->  A[i][j] == A[j][i]
    bool esSimetrica = true;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(A[i][j] != A[j][i]) {
                esSimetrica = false;
            }
        }
    }

    if(esSimetrica) {
        cout << "ES IGUAL A SU TRANSPUESTA\n";
    } else{
        cout << " NO ES IGUAL A SU TRANSPUESTA\n";
    }


    return 0;
}