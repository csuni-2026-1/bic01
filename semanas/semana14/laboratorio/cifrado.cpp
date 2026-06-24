/*
Implementar el método de cifrado de sustitución de texto usando funciones. Este
programa implementa un cifrado por sustitución mono-alfabético, donde cada letra del
alfabeto se reemplaza por otra letra según una clave proporcionada. Asuma todo
minúsculas.
Alfabeto = "abcdefghijklmnopqrstuvwxyz"
Llave = "qwertyuiopasdfghjklzxcvbnm"
*/

#include <iostream>
using namespace std;

string Alfabeto = "abcdefghijklmnopqrstuvwxyz";
string Llave = "qwertyuiopasdfghjklzxcvbnm";

string fraseVariasLineas = "Caminante, son tus huellas el"
"camino y nada más; caminante, no hay camino, se hace camino al andar. Al andar se"
"hace el camino, y al volver la vista atrás se ve la senda que nunca se ha de volver a"
"pisar. Caminante no hay camino sino estelas en la mar";

char cifrar(char c) {

    size_t  posicion = Alfabeto.find(c);

    if (posicion != string::npos) {
        return Llave[posicion];
    } else {
        return c;
    }

    
}


string cifrarTexto(string  texto) {
    string resultado = "";
    for (int i = 0; i < texto.size(); ++i) {
        resultado = resultado + cifrar(texto[i]);
    }

    return resultado;
}



int main(){

    cout << fraseVariasLineas <<endl;
    


    string frase = "hola mundo @@@ fin del curso BIC01 - H";

    cout << cifrarTexto(frase) <<endl;

    return 0;
}