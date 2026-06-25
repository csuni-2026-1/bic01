/*
4. Implementar el método de cifrado de sustitución de texto usando funciones. Este
programa implementa un cifrado por sustitución mono-alfabético, donde cada letra del
alfabeto se reemplaza por otra letra según una clave proporcionada. Asuma todo
minúsculas.
Alfabeto = "abcdefghijklmnopqrstuvwxyz"
Llave =    "qwertyuiopasdfghjklzxcvbnm"

Ejemplo
cadena = "Hola"

cifrado = "Hgsq" 

*/




#include <iostream>
using namespace std;

string Alfabeto = "abcdefghijklmnopqrstuvwxyz";
string Llave  =   "qwertyuiopasdfghjklzxcvbnm";

int main(){
    string cad = "Hola Mundo @@ BIC01 - H";


    cout << "Cifrado: ";
    for (int i = 0; i < cad.size(); ++i) { // recorre la cadena
        bool esAlfabeto = false;
        for(int j = 0; j < 26; j++) { // verifica si un elemento de cad es alfabeto minuscula
            if (cad[i] == Alfabeto[j]) {
                cout << Llave[j];
                esAlfabeto = true;
            } 
        }
        if(!esAlfabeto) {
            cout << cad[i];
        }
    }

    cout << endl;

/*
Ejericio, implemente usando funciones:

char cifrarCaracter(char c);

cifrarFrase

*/

    return 0;
}