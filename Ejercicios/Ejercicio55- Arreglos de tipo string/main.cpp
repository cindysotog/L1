#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    // Declaracion del Arreglo
    int numeros [] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++)
    {  
       cout << endl;
       cout << numeros [i] << endl;;      
    }  

    string Nombres [] = {"Juan", "Maria", "Pedro", "Jose", "Pablo"};

    for (int i = 0; i < 5; i++)
    {
       cout << endl;
       cout << Nombres [i] << endl;
    }

       cout << endl;
}