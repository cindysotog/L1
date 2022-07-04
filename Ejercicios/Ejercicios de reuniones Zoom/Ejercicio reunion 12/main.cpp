#include <iostream>

using namespace std;

void imprimirCaracteres (char caracter, int hasta)
{
    for (int i = 0; i < hasta; i++)
    {
        cout << caracter;

        if (i == 10)
        {
            return;
        }
    }
}

void menu()
{
    cout << "MENU" << endl;
    imprimirCaracteres('%', 40);

    cout << endl;
    cout << "1. - Granita de Cafe " << endl;
    cout << "2. - Capuccino " << endl;
    cout << "3. - Expresso " << endl;
    cout << "4. - Reposteria " << endl;
    cout << "5. - Salir " << endl;

}

bool login()
{
    string usuario;
    string contrasena;

    cout << " \n Ingrese el usuario: ";
    cin >> usuario;

    cout << " Ingrese la contrasena: ";
    cin >> contrasena;

    if(usuario == "admin" && contrasena == "123")
    {
        return true;
    }
    
    system("COLOR 04");
    cout << " Usuario o contrasena incorrecta " << endl;
    
    return false;
}

int main(int argc, char const *argv[])
{
    menu();

    bool respuesta = login ();

    if (respuesta == true)
    {
        cout << "Bienvenido al sistema" << endl << endl;
        menu();

    }

}