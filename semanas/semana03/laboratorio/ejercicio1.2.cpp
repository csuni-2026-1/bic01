/*
Dados dos puntos en el plano realizar un programa que permita determinar la pendiente
de la recta que pasa por esos puntos.
*/

#include <iostream>
using namespace std;

int main(){
    double x1, y1, x2, y2;

    cout << "Ingrese las coordenadas del primer punto (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Ingrese las coordenadas del segundo punto (x2, y2): ";
    cin >> x2 >> y2;

    double pendiente;
    
    if (x2 == x1) {
        cout << "No existe pendiente" <<endl;
    } else {
        pendiente = (y2 - y1)/ (x2 - x1);
        cout << "La pendiente de la recta que pasa por "
             << "(" << x1 << ", " << y1 <<")" << " y "
             << "(" << x2 << ", " << y2 <<")" << " es: " << pendiente <<endl; 

    }
    
    
    

         

    return 0;
}