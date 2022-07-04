#include <iostream>

using namespace std;


bool autenticar (string usuario, string contrasena)
{
    if(usuario == "admin" && contrasena == "123")
    {
        return true;
    }

    return false;
}


int main (int argc, char const *argv[])
{
    string u = " ";
    string c = " ";
    bool resultado = false;
    
    cout << " BIENVENIDO AL SISTEMA " << endl;
    cout << " ********************** " << endl;

    cout << " Ingrese su usuario: ";
    cin >> u;

    cout << " Ingrese su contrasena: ";
    cin >> c;

    resultado = autenticar(u,c);

    if (resultado == true)
    {
        system ("cls");
        cout << " acceso autorizado";
    }
    else
    {
        system ("cls");
        cout << " usuario o contrasena incorrecta.";
    }

    return 0;
}
 
