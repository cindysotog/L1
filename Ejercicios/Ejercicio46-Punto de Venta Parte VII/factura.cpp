#include <iostream>

using namespace std;

double subtotal, totalCompra;
int impuesto;
string listaProductos;


void agregarProducto (string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    impuesto = 0.15 * subtotal;
    totalCompra = subtotal + impuesto;
}


void imprimirFactura ()
{
    system ("cls");
    cout << "**********"  << endl; 
    cout << " FACTURA  "  << endl; 
    cout << "**********"  << endl;
    cout << endl;

    cout << "Productos: " << endl;
    cout <<  listaProductos;

    cout << endl;
    cout << "Subtotal: " << subtotal;
    cout << endl;
    cout << "Impuesto: " << impuesto;
    cout << endl;
    cout << endl;
    cout << "El total a pagar es: " << totalCompra;
    cout << endl;
    cout << endl;
    
    system ("pause");
}