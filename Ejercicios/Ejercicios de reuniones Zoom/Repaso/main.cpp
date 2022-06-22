#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    string alumnos = " ";
    int opcion=0;

    while (opcion!=3)
    {
        cout << "\nMenu" << endl;
        cout << "------" << endl;
        cout << " 1. Agregar Alumnos" <<endl;
        cout << " 2. Mostrar Alumnos" << endl;
        cout << " 3. Salir" << endl;

        cout << "\nIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
            case 1:
            system("cls");
            
            while (true)
            {
                cout << "Agregar Alumnos" << endl;
                cout << "-----------------------------" <<endl;
                cout << alumnos<<endl;
                cout << endl;
                cout << "escriba 's' para salir" << endl;

                cout << "Ingrese el nombre del Alumnos" << endl;
                string nombre;
                cin >> nombre;

                if(nombre == "s")
                {
                    break;
                }

                alumnos += nombre +  " , ";       
            }
            
            break;

            case 2:
            system ("cls");
            cout << "Lista de  Alumnos" << endl;
            cout << "------------------" <<endl;
            cout << alumnos <<endl;
            system ("pause");
            break;

            case 3:
            break;

            default:
            cout << "Opcion no valida" <<endl;
            break;

        }
    }
   cout << "Adios";

   return 0;

}