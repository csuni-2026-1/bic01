#include <iostream>
using namespace std;

int main(){

    for(int i = 0; i <= 127; ++i) {
        cout << i << " le corresponde " << (char)i <<endl;
    }

    char  minuscula = tolower('A');
    cout  << minuscula  <<endl;

    return 0;
}