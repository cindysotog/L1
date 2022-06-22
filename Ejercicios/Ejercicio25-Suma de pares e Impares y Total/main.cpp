#include <iostream>


using namespace std;

int main(int argc, char const *argv[])
{
    int pares = 0;
    int impares = 0;
    int SumaTotal = 0;

    cout << endl;

    for (int i = 1; i <= 10; i++)
        
        {if (i % 2 == 0)
        	{
				pares = pares + i;
			}
        		else
        			{
            			impares += i;
        			}

        SumaTotal = pares + impares;

        
        cout << i << "  ";
    }

    cout << endl;
    cout << endl;
    cout << "Total de los pares: " << pares << endl;
    cout << "Total de los impares: " << impares << endl;
    cout << "\n Suma total de PARES + IMPARES=  " << SumaTotal;


    return 0;
}