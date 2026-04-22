#include <iostream>
using namespace std;

int main() {
    float monto, descuento = 0, montoFinal;
    int tipoCliente, dia, pago;
    cout << "Monto de compra (S/): "; cin >> monto;
    cout << "Tipo cliente (1=Regular,2=Corporativo,3=VIP): "; cin >> tipoCliente;
    cout << "Día (1-7): "; cin >> dia;
    cout << "Método pago (1=Efectivo,2=Tarjeta,3=Transfer): "; cin >> pago;

    switch (tipoCliente) {
        case 1: // Regular
            descuento = 5;
            if (dia == 6 || dia == 7) descuento += 8;
            break;
        case 2: // Corporativo
            descuento = 12;
            if (pago == 1) descuento += 5;
            break;
        case 3: // VIP
            descuento = 20;
            if (dia == 1 || dia == 2) descuento += 10;
            break;
    }

    if (monto > 500) descuento += 7;

    montoFinal = monto * (1 - descuento / 100);

    cout << "\nDescuento aplicado: " << descuento << " %" << endl;
    cout << "Monto final a pagar: S/ " << montoFinal << endl;
    return 0;
}
