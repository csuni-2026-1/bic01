#include <iostream>
using namespace std;

int main(){

    char nombres[50];

    cout << "Ingrese sus nombres: ";
    // cin >> nombres; // solo lee hasta el primer espacio
    cin.getline(nombres, 50); // lee toda la línea incluyendo espacios

   
    cout << "Su nombre es: " << nombres <<endl;
    
     


    return 0;
}