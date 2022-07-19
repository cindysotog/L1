// Tarea  de jugar con dados

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main (int argc, char const *argv[])
{
    int dado1;
    int i;
    int dado2;
    int tiroDado;

    string lanzar;

    tiroDado = dado1 + dado2;

    while (true)
    {
        cout << " ****************************************** " << endl;
        cout << "             Bienvenido al juego            " << endl;
        cout << " ****************************************** " << endl << endl;

        cout << " Presione cualquier tecla para lanzar los dados: " << endl;
        cin >> lanzar;

        system ("cls");
        for (int i = 0; i <= 3; i++)
        {
            srand (time (NULL) );
            dado1 = rand ()% 6 + 1;
            dado2 = rand ()% 6 + 1;
        }

        cout << " Dado 1: " << dado1 << endl;
        cout << " Dado 2: " << dado2 << endl;

        cout <<" La suma de los dados es: " << tiroDado << endl << endl;

        if ( tiroDado == 4 || tiroDado == 6 || tiroDado == 8)
        {
            cout << endl << " **************************************************** " << endl;
            cout << endl << "         Felicidades, HAZ GANADO        " << endl;
            cout << endl << " **************************************************** " << endl;

            break;
        }

        if (tiroDado == 2 || tiroDado == 12)
        {
            cout << endl << " **************************************************** " << endl;
            cout << endl << "         Lo siento, haz perdido, siguelo intentandolo       " << endl;
            cout << endl << " **************************************************** " << endl;

            break;
        }

        system("pause");
        system ("cls");
    }
    return 0;
}