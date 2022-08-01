#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    // Declaracion del Arreglo
    int numeros [5];

    for (int i = 0; i < 5; i++)
    {
       numeros [i] = i;      
    }  
        
    for (int i = 0; i < 5; i++)
    {
       cout << numeros [i] << endl;
    }
    
    return 0;
}