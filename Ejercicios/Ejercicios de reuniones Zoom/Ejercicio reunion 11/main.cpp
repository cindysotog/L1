#include <iostream>

using namespace std;

//              10          5            '+'
int calcular(int num1, int num2, char operador)
{
   int resultado = 0;
   
   switch (operador)
   {
        case '-':
        resultado = num1 - num2;
        break;

        case '*':
        resultado = num1 * num2;
        break;

        case '/':
        resultado = num1 / num2;
        break;

        default:
        resultado = num1 + num2;
   }

    
}

int main (int argc, char const *argv[])
{
  

  /*  cout << calcular ( 10, 5, '+');
   cout << endl;

   cout << calcular (10, 5, '-');
   cout << endl;
   
   cout << calcular (10, 5, '*');
   cout << endl;

   cout << calcular (10, 5, '/');
   cout << endl; */

   int r = 0;

//                      50                  5
    r = calcular(10, 5, '*') + calcular(15, 10, '-');
    

//                      50                          5
    r = calcular(calcular (10, 5, '*') + calcular (15, 10, '-'), '/');

    int a = calcular(10, 5, '*'); // <--- 50
    int b = calcular(15, 10, '-'); // <--- 5
    r = calcular(a, b, '/');     // <--- 10

    cout <<r;


    return 0;
}