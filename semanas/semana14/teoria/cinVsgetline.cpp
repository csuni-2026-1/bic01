#include <iostream>
using namespace std;

int main(){

    char nombres[20];

    cout << "Ingrese sus nombres: ";
    //cin >> nombres; // solo lee hasta el primer espacio
    cin.getline(nombres, 20); // lee toda la línea incluyendo espacios

   
    cout << "Su nombre es: " << nombres <<endl;
    
     


    return 0;
}