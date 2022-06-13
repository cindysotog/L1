#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

    /* int contador = 0;
    int opcion = 0;
     
    while (true)
    {
        cout<<" - ";

        if (contador == 100)
        {
            break;
        }

        contador++;
    } */

    
    int contador = 0;

//   while (true)  //Mientras
//    {
//        cout<<"Hola";
//   }

    do          //HACER
    {
        cout<<"Hola";
        break;
        contador++;
    }while (true);

    return 0;
}