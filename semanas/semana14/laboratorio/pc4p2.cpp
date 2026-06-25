/*
Autor:  Americo Ch


Escriba una función que halle recursivamente el reverso de un string.
string reverse(string s).

Ejemplo

Hola --> aloH
*/


#include <iostream>
using namespace std;

void invertir(string& s) {
    int i = 0;
    int j = s.size() - 1;
    while (i < j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
}

/*
Hola      i = 0   j = 3
aolH      i = 1    j = 2
aloH      i = 2   j = 1
          i = 3   j = 0 
          
a + l + o + H
*/
void invertirRecursivo(string& s, int i, int j) {
    // caso
    if (i >= j){
        return;
    }

    // caso recursivo
    cout << "llamando invertirRecursivo" <<endl;
    swap(s[i],s[j]);
    invertirRecursivo(s, i+1, j-1);
    
}


/*
s = "a"
s = ""
*/
string reverse(string s){
    // caso base
    if (s.size() <= 1){
        return s;
    }

    // caso recursivo
    return s.back() + reverse(s.substr(0, s.size()-1));
}

int main(){

    string cad = "Hola mundo";


    cout << reverse(cad) << endl;

    return 0;
}