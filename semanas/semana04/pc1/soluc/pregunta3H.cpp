#include <iostream>

using namespace std;

int main() {
    char nota;
    cin >> nota;
    
    switch(nota) {
        case 'A':
            cout << "Excelente Aprobado" << endl;
            break;
        case 'B':
            cout << "Bueno Aprobado" << endl;
            break;
        case 'C':
            cout << "Satisfactorio Aprobado" << endl;
            break;
        case 'D':
            cout << "Insuficiente Desaprobado" << endl;
            break;
        default:
            cout << "Nota no válida" << endl;
    }
    
    return 0;
}
