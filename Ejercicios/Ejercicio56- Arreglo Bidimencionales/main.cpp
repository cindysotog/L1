#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{       
    string Nombres [3] [2];

    Nombres [0] [0] = "Juan";
    Nombres [0] [1] = "Perez";

    Nombres [1] [0] = "Maria";
    Nombres [1] [1] = "Martinez";

    Nombres [2] [0] = "Pedro";
    Nombres [2] [1] = "Gimenez";

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << Nombres [i] [j] << endl;
        }    
    }
      cout << endl;
}