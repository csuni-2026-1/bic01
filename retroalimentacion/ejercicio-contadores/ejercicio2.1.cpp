//Crea un programa que reciba un arreglo de números enteros y determine cuántos son
//positivos, cuántos negativos y cuántos son nulos. Muestra también el porcentaje de
//cada tipo respecto al total.
#include <iostream>
using namespace std;
int main (){
    int tam;
	int arr[tam]={};
	int contadorn=0;
	int contadorp=0;
	int contadornull=0;
	int contadort=0;
	
	//tamaño del arreglo
	cout<<"Ingrese el tamano del arreglo: ";
	cin>>tam;
	
	cout<<"Ingrese los numeros enteros de su arreglo: ";
	for (int i=0;i<tam; i++){
		cin>>arr[i];
		contadort++;
		
		//condicionales
		if (arr[i]<0){
			contadorn++;
		}
		else if (arr[i]>0){
			contadorp++;
		}
		else{
			contadornull++;
		}
	}
	
	//porcentaje
	double porcentajen=(contadorn*1.0/contadort)*100;
	double porcentajep=(contadorp*1.0/contadort)*100;
	double porcentajenull=(contadornull*1.0/contadort)*100;
	
	cout<<"Hay "<<contadorn<<" numeros negativos con un porcentaje de "<<porcentajen<<endl;
	cout<<"Hay "<<contadorp<<" numeros positivos con un porcentaje de "<<porcentajep<<endl;
	cout<<"Hay "<<contadornull<<" numeros nulos con un porcentaje de "<<porcentajenull;
	
	return 0;
}
