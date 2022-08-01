//                                Tarea 11
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero [5][5];
    int aleatorio;

    numero [0][0] = aleatorio;
    numero [0][1] = aleatorio;

    numero [1][0] = aleatorio;
    numero [1][1] = aleatorio;

    numero [2][0] = aleatorio;
    numero [2][1] = aleatorio;
    
    srand (time (NULL));// Inicializa el numero random

    for (int i = 0; i < 5; i++)
    {
        // Genera un numero entre 1 y 25
        aleatorio = rand () % 25 + 1;

        cout << numero [i][0] << "  "<< numero [i][1] << endl;
    }

    suma = numero;
    cout << "Total suma: " << suma << endl;

    return 0;
}