#include <iostream>
using namespace std;

int main(){
	
	float celsius, farenheit;
	
	cout << "ingrese la temperatura en Celsius: ";
	cin >> celsius;
	
	farenheit = celsius*9/5 + 32;
	
	cout << "La temperatura en Farenheit es: " << farenheit <<endl;

	return 0;
}

