#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int a =0;
	int b= 0;
	int resultadoSuma = 0, resultadoResta = 0, resultadoMultiplicacion = 0, resultadoDivision=0;
	
	//Se solicita el primer numero que se almacenara en la variable int a
	cout<<"Ingrese el valor de a: ";
	cin>>a;
	cout<<endl;
	
	//Se solicita el segundo numero que se almacenara en la variable int b
	cout<<"Ingrese el valor de b: ";
	cin>>b;
	
	//Proceso
	resultadoSuma = a + b;
	resultadoResta = a - b;
	resultadoMultiplicacion = a * b;
	resultadoDivision = a / b;
	
	//Salida
	cout<<"\nLa Suma de a + b es: "<<resultadoSuma;
	cout<<"\nLa Resta de a - b es: "<<resultadoResta;
	cout<<"\nLa Multiplicacion de a * b es: "<<resultadoMultiplicacion;
	cout<<"\nLa Division de a + b es: "<<resultadoDivision;
	
	return 0;
}
