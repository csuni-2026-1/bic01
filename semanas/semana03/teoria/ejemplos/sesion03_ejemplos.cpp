#include <iostream>
using namespace std;

int main(){

    // 1. Variables
    int edad = 19;
    double temperatura = 37.5;
    float velocidad = 15.7;
    char sexo = 'F';
    bool esPrimo = true; //false


    // Identificadores válidos
    int nota_1 = 12;

    int anios = 23;//años = 23;
    int year = 24;


    // 2. Tipos de datos




    // Modificadores y rangos de alcance
    // OJO: Los rangos pueden variar ligeramente según el compilador y la arquitectura (32 o 64 bits).

    signed int balance = -500;            // Range: -2,147,483,648 to 2,147,483,647
    unsigned int students = 120;          // Range: 0 to 4,294,967,295
    short marks = 95;                     // Range: -32,768 to 32,767
    long salary = 500000;                 // Depends on system (4 or 8 bytes)
    long long population = 1400000000;    // Range: -9e18 to +9e18
    float temperature = 36.6f;            // Range: ~1.2E-38 to 3.4E+38 (7 decimal digits precision) (4 bytes)
    double price = 99.99;                 // Range: ~2.3E-308 to 1.7E+308 (15 decimal digits precision) (8 bytes)
    long double pi = 3.141592653589793238L; // Range: ~3.4E-4932 to 1.1E+4932 (18+ decimal digits precision) (typically 10, 12, or 16 bytes)

    cout << sizeof(long double) <<endl;
    // Otros tipos básicos importantes
    char grade = 'A';                     // Range: -128 to 127 (1 byte) o 0 a 255 si es unsigned
    bool approved = true;                 // Range: true (1) or false (0)

    cout << "Balance: " << balance << endl;
    cout << "Students: " << students << endl;
    cout << "Marks: " << marks << endl;
    cout << "Salary: " << salary << endl;
    cout << "Population: " << population << endl;
    cout << "Temperature: " << temperature << endl;
    cout << "Price: " << price << endl;
    cout << "Pi: " << pi << endl;

    cout << "Grade: " << grade << endl;
    cout << "Approved: " << approved << endl;

 
    


    // 3. Operadores
    // Aritméticos

    // Relacionales


    // Lógicos

    if(2 > 3 and 5==5){ // && == and
                        // || == or
                        // ~ == not
    }


    // Inicialización de variables: por copia vs inicialización uniforme

    // Inicializacion por copia
    int y = 4;

    // Inicializacion uniforme C++11
    double x{1.5};
    int n{3 * x};

    cout << "El valor de n es: " << n <<endl;

    //4. Ingreso y salida de información 


    return 0;
}