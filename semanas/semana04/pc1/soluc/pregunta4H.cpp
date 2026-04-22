#include <iostream>

using namespace std;

int main() {
    int hora;
    cout << "Ingrese la hora en formato 24 horas (0-23): ";
    cin >> hora;

    if (hora == 0) {
        cout << "12 AM" << endl;
    } else if (hora >= 1 && hora <= 11) {
        cout << hora << " AM" << endl;
    } else if (hora == 12) {
        cout << "12 PM" << endl;
    } else if (hora >= 13 && hora <= 23) {
        cout << (hora - 12) << " PM" << endl;
    } else {
        cout << "Hora invalida. Debe estar entre 0 y 23." << endl;
    }

    return 0;
}
