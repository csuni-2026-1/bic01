#include <iostream>
#include <cstring> // para strlen()
using namespace std;

int main(){
    char s1[] = "Cadenas en C, C++ ";
    char s2[50];

    cout << "La longitud de s1 es: " << strlen(s1) <<endl;

    strcpy(s2,s1);

    cout << "s2 = "<< s2 <<endl;

    strcat(s2,s1);

    cout << "s2 = "<< s2 <<endl;

    char s3[] = "Hola";
    char s4[] = "Hola";

    cout << "s3 > s4: " << strcmp(s3,s4) << endl;
    cout << "s3 < s4: " << strcmp(s3,s4) << endl;






    return 0;
}