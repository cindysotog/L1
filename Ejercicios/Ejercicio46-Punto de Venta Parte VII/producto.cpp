#include <iostream>
#include "venta.h"

using namespace std;

//Declarando la funcion como externa
void agregarProducto (string descripcion, int cantidad, double precio);

void productos (int opcion)
{
    system ("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
        
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1 - Capuccino" << endl;
        cout << "2 - Expresso" << endl;
        cout << "3 - Moccachino" << endl;
        cout << "4 - Cafe Americano" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
                    
        switch (opcionProducto)
        {
            case 1:
                agregarProducto ("1 Capuccino - L 40.00", 1, 40);
                break;
                        
            case 2:
                agregarProducto ("1 Expresso -  L 30.00", 1, 30);
                break;
                        
            case 3:
                agregarProducto ("1 Moccachino -  L 35.00", 1, 35);
                break;
                        
            case 4:
                agregarProducto ("1 Cafe Americano -  L 25.00", 1, 25);
                break;
                        
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system ("pause");

        break;
    }
    
    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1 - Latte con cremea" << endl;
        cout << "2 - Granita" << endl;
        cout << "3 - Frozen Tea" << endl;
        cout << "4 - Malteada Gelato" << endl;
        cout << endl;
        

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
            case 1:
                agregarProducto ("1 Latte con crema - L 65.00", 1, 65);
                break;
                        
            case 2:
                agregarProducto ("1 Granita -  L 50.00", 1, 50);
                break;
                        
            case 3:
                agregarProducto ("1 Frozen tea -  L 45.00", 1, 45);
                break;
                        
            case 4:
                agregarProducto ("1 Malteada con crema -  L 90.00", 1, 90);
                break;
                        
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system ("pause");
        break;
    }

    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "1 - Cheescake" << endl;
        cout << "2 - Pastel Tres leches" << endl;
        cout << "3 - Pastel Durazno" << endl;
        cout << "4 - Brownis" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
                    
        switch (opcionProducto)
        {
            case 1:
                agregarProducto ("1 Cheescake - L 60.00", 1, 60);
                break;
                        
            case 2:
                agregarProducto ("1 Pastel Tres leches -  L 50.00", 1, 50);
                break;
        
            case 3:
                agregarProducto ("1 Pastel de Durazno - L 55.00", 1, 55);
                break;
        
            case 4:
                agregarProducto ("1 Brownis - L 30.00", 1, 30);
                break;
         
                        
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system ("pause");
        break;
    }

    default:
        break;
    }
}