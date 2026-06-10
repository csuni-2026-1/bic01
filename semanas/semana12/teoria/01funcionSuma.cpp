#include <iostream>
using namespace std;

// 1. Prototipo — "contrato" con el compilador​

int sumar(int a, int b);


int main() {
  int num1 = 5, num2 = 3;

  // 2. Llamada: se pasan copias de num1 y num2​
  int resultado = sumar(num1, num2);
  cout << "Suma: " << resultado << endl;

  return 0;

}


// 3. Definición — aquí vive la lógica​
int sumar(int a, int b) {
  return a + b; 
}