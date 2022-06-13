#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

/* Primero crea una variable
        int i = 0;
    
    Segundo crear una expresion Logica
        i < 10;
    
    Tercero se hace un incremento
        i++;
 */


//    .          donde               como
//     Para ||  inicia||  termina || incrementa
//      for ( int i = 0;  i < 10;   i++)
//      {
//        cout<<"Hola"<<endl;
//      }

//***********************************************************************************************
    /*   for ( int i = 0;  i < 10;  i++)
         {
            cout<<"i"<<endl;
         } 
    */
//*********************************************************************************************

    /*  for ( int i = 10;  i < 1;  i--)
        {
            cout<<"1"<<endl;
        } 
    */
//*******************************************************************************************
    /* 
        for ( int i = 5;  i <= 100;  +=5)
        {
            cout<<"i"<<endl;
        }
    */
//***********************************************************************************************
    
     for ( int i = 0;  i < 10;  i++)
      {
        cout<<" i "<<endl;
        if ( i == 5 )
        {
            break;
        }
      }

     
    return 0;
}