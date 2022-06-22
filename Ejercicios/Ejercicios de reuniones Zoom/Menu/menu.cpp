
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    
    /* while (true)
    {
        system ("cls");

        int desde = 0;

        cout << " MENU " << endl;
        cout << "------" << endl;
        cout << "1. Capuchino" << endl;
        cout << "2. Expresso" << endl;
        cout << "3. Latte" << endl;
        cout << "4. Salir" << endl;

        int opcion;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        

        if (opcion == 1)
        {
            system ("cls");
            cout << "Seleccionaste Capuccino" << endl;
            system("pause");
        }
        if (opcion == 2)
        {
            system ("cls");
            cout << "Seleccionaste Expresso" << endl;
            system("pause");
        }
        if (opcion == 3)
        {
            system ("cls");
            cout << "Seleccionaste Latte" << endl;
            system("pause");
        }

        if (opcion == 4)
        {
            break;
        }

        return 0;
    } */
    
 //***************************************************************************************************************************
    /* 
        system ("cls");

        int desde = 0;

        cout << " MENU " << endl;
        cout << "------" << endl;
        cout << "1. Capuchino" << endl;
        cout << "2. Expresso" << endl;
        cout << "3. Latte" << endl;
        cout << "4. Salir" << endl;

        int opcion;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
    
        
        switch (opcion)
        {
            case 1:
            system ("cls");
            cout << "Seleccionaste Capuccino" << endl;
            system("pause");
            break;

            case 2:
            system ("cls");
            cout << "Seleccionaste Expresso" << endl;
            system("pause");

            case 3:
            system ("cls");
            cout << "Seleccionaste Latte" << endl;
            system("pause");

           default:
           system ("cls");
           cout<< "Opcion no valida" << endl;
           system ("pause");
           break;
        }

     return 0;
    } */

    //****************************************************************************************************************************************
            
             int opcion = 0;
            while (opcion!=4)
            {
                system ("cls");

        
                cout << " MENU " << endl;
                cout << "------" << endl;
                cout << "1. Capuchino" << endl;
                cout << "2. Expresso" << endl;
                cout << "3. Latte" << endl;
                cout << "4. Salir" << endl;

                cout << "Ingrese una opcion: ";
                cin >> opcion;

            
            switch(opcion)
            {
                     case 1:
            system ("cls");
            cout << "Seleccionaste Capuccino" << endl;
            system("pause");

            case 2:
            system ("cls");
            cout << "Seleccionaste Expresso" << endl;
            system("pause");

            case 3:
            system ("cls");
            cout << "Seleccionaste Latte" << endl;
            system("pause");

            case 4:
            break;

           default:
           system ("cls");
           cout<< "Opcion no valida" << endl;
           system ("pause");
           break;
            }
        
            
        }
  
     return 0;
} 




