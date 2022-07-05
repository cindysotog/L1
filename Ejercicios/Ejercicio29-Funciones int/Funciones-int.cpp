#include <iostream>

using namespace std;

    int sumar(int a, int b) {
        int resultado = 0;

        return a + b;
}

   

int main (int argc, char const *argv[])
{
    system ("cls");

    cout << sumar(5,7);
    cout << endl;
    cout << sumar(15,7);
    cout << endl;
    cout << sumar(5,71);
    cout << endl;
    cout << sumar(5,7);
    cout << endl;

    return 0;
}