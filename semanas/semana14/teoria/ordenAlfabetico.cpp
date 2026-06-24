#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char dias[7][10] = {"lunes","martes","miercoles",
                        "jueves","viernes","sabado","domingo"};
    char temp[10];

    // Bubble sort con strcmp
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6 - i; j++)
            if (strcmp(dias[j], dias[j+1]) > 0) {
                strcpy(temp, dias[j]);
                strcpy(dias[j], dias[j+1]);
                strcpy(dias[j+1], temp);
            }

    for (int i = 0; i < 7; i++)
        cout << dias[i] << endl;
    return 0;
}