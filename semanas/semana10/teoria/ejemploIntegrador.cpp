/*
Almacenar notas de 3 alumnos en 4 materias.
Calcular promedio por alumno, promedio por materia
 y el mejor estudiante.
 Alumno 1 = 13 17 11 8
 Alumno 2 = 11 15 12 13
 Alumno 3 = 11 7 13 17
*/
#include <iostream>
using namespace std;

int main(){

    //Almacenar notas de 3 alumnos en 4 materias.
    const int A = 3, M = 4; // CONSTANTES
    int notas[A][M] = {
        {13,17,11,8},
        {11,15,12,13},
        {11,7,13,17}
    };

    
    // Promedio por alumno
    double promedio;
    double promedioMax = 0; // Asumo que es el minimo posible
    int alumno = 0;
    for (int i = 0; i < A; ++i) {
        int suma = 0;
        for (int j = 0; j < M; ++j) {
            suma = suma + notas[i][j]; // suma las notas del alumno i
        }
        promedio = 1.0*suma/M;
        cout << "Promedio del alumno " << i +1 <<": " << promedio <<endl; 

        if(promedio > promedioMax) {
            promedioMax = promedio;
            alumno = i;
        }
        
    }

    // Mejor alumno
    cout << "\nMejor alumno: " <<endl;
    cout << "Alumno " << alumno + 1 << " Promedio: " << promedioMax <<endl;


    // Promedio por materia ????
    string materias[M] = {"Fisica", "BIC", "Quimica", "Algebra"};
    

    

    return 0;
}