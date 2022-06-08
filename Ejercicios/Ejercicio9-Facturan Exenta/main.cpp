#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
	
int main(int argc, char** argv) {
	
	//Datos de entrada
	
	double subTotal = 0;
	double total = 0;
	double impuesto = 0.15;
	int Descuento = 0;
	double calculoDescuento = 0;
	double calculoImpuesto = 0;
	char Exenta = 'S';
	
	
	//Ingresando dator
	
	cout<<"Ingrese el SubTotal de la Factura: ";
	cin>> subTotal;
	
	cout<<"Ingrese el Descuento (0, 10, 15, 20)";
	cin>>Descuento;
	
	cout<<"\nEs Factura Exenta? S o N: ";
	cin>>Exenta;
	

	//Proceso Exento
	
	if(Exenta == 's'|| Exenta == 'S')
	{
		calculoDescuento = (subTotal * Descuento) / 100;
		calculoImpuesto = (subTotal - calculoDescuento) * 0.00;
		total = subTotal - calculoDescuento + calculoImpuesto;
	}
	
	else
	{
		calculoDescuento = (subTotal * Descuento) / 100;
		calculoImpuesto = (subTotal - calculoDescuento) * impuesto ;
		total = subTotal - calculoDescuento + calculoImpuesto;
	}
	
	//Salida de datos
	
	cout<<"\n Total a pagar es: "<<total;
	
	return 0;
}
