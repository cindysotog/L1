#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "cine.h"

using namespace std;
 
int filas = 5;
int asientos = 5;
int fila = 0;
int asiento = 0;
int salaCine [5][5];
int precioAsiento = 50;
double subTotal = 0;
double impuesto = 0;
int seleccion = 0;
int valorPelicula = 0;
string pelicula;
string listaProductos;
string descripcion;

void menu(){
	system("cls");
	
	cout << "****************************************************************" << endl;
	cout << "                              M E N U                     " << endl;
	cout << "****************************************************************" << endl;

	cout << "\n1. Cartelera" << endl;

	cout << "2. SALA DE CINE" << endl;
	cout << "3. Reservacion de asiento" << endl;
	
	cout << "3. Bebidas" << endl;
	cout << "4. Alimentos" << endl;
	cout << "5. Imprimir factura" << endl;
	cout << "6. Salir" << endl;
}

void mostrarSalaCine(){
	system("cls");
	
	cout << "******************** SALA DE CINE*************************\n";
	cout << endl;
	cout << "   (1)(2)(3)(4)(5)\n";
	for(int i = 0; i < filas; i++){
		cout<<"("<<i+1<<")";
	    for(int j = 0; j < asientos; j++){
	    	cout << "[" << salaCine[i][j] << "]";
		}	
		cout << endl;
	}
	cout << endl;
}

void inicializarSalaCine(){
	for(int i = 0; i < filas; i++){
	    for(int j = 0; j < asientos; j++){
	    	//salaCine[i][j] = generaAleatorio(0,1);
		}	
	}	
	cout << endl;
		
}

bool reservarAsiento(int fila, int asiento){
	//system("cls");
	mostrarSalaCine();
	if (salaCine[fila][asiento] == 0){
	    salaCine[fila][asiento] = 1, 2, 5;
	    return true; 
	} else {
		cout << " Este asiento ya esta ocupado, seleccione otro. " << endl;
	}
	return false;
}

void reservacion(){
	do{
		cout << endl;
		cout << "Ingrese la fila: ";
		cin >> asiento;
	    cout << "Ingrese el asiento: ";
	 	cin >> fila;
	 	fila--;
	 	asiento--;
			
		}while(reservarAsiento(fila, asiento) == false);
	    cout << " El asiento fue asignado exitosamente " << endl;
	    cout << endl;
}

// Mostrar asientos ocupados random
int generaAleatorio(int limInferior, int limSuperior){
	int aleatorio;
	aleatorio = limInferior + rand() % (limSuperior + 1 - limInferior);
	return aleatorio;
}

void agregarProducto(string descripcion, int cantidad, double precio){
	listaProductos = listaProductos + descripcion + '\n';
	subTotal = subTotal + (cantidad * precio);
	
}

void Bebidas(){		
    void agregarProducto(string descripcion, int cantidad, double precio);
            int ProductoSeleccionado = 0;
            
            system ("cls");
            cout << "******************************************************************" << endl;
			cout << "                      Bebidas del Cinepark                        " << endl;
			cout << "******************************************************************" << endl;
		
	    	cout << "1 - Pepsi Personal     40.00 Lps." << endl;
	    	cout << "2 - Coca Cola Persona  40.00 Lps. "<< endl;
	    	cout << "3 - AGUA AZUL          30.00 Lps. " <<endl;
	    	cout << endl;
	    	
	    	cout << "Ingrese una opcion: " << endl;
	    	cin >> ProductoSeleccionado;
	    	
			switch (ProductoSeleccionado)
			{
			case 1:
				agregarProducto("1. PEPSI Personal       40.00 Lps", 1, 49);
				break;	
			case 2:
				agregarProducto("2. COCA COLA Personal   40.00 Lps", 1, 40);
				break;	
			case 3:
				agregarProducto("3. AGUA AZUL Persona.   30.00 Lps", 1, 30);
				break;	
			default:
				{
			    	cout << "Opcion no valida" << endl;
			    	return;
			    	break;
			    	}
				}
			
		
	    cout << endl;
		cout << "Producto agregado" << endl << endl;
		cout << endl;
				
}

void Alimentos(){
	void agregarProducto(string descripcion, int cantidad, double precio);
            int opcionProducto = 0;
            
            system ("cls");
        	cout << "*************************************************************************" << endl;
			cout << "                             Alimentos Cinepark                          " << endl;
			cout << "*************************************************************************" << endl;
		
	    	cout << endl;
	    	cout << "1.  Palomitas de caramelo Mediana  85.00 Lps." << endl;
	    	cout << "2.  Palomitas de caramelo grande   90.00 Lps." << endl;
	    	cout << "3.  Palomitas Normales             70.00 Lps." << endl;
	    	cout << endl;
	    	
	    	cout << "Ingrese una opcion: " << endl;
	    	cin >> opcionProducto;
	    	
			switch (opcionProducto)
			{
			case 1:
				agregarProducto("1.  Palomitas de caramelo Mediana   85.00 Lps. ", 1, 85);
				break;
			case 2:
				agregarProducto("2.  Palomitas de caramelo grande    90.00 Lps.", 1, 90);
				break;	
			case 3:
				agregarProducto("3.  Palomitas Normales    70.00 Lps. ", 1, 70);
				break;	
			default:
				{
			    	cout << "Opcion no valida" << endl;
			    	return;
			    	break;
				}
			}
		cout << endl;
		cout << "Producto agregado" << endl << endl;
		cout << endl;
			
}

void FACTURA(){
	
     system("cls");
     cout << " ****************************************************************************** " << endl;
     cout << "                            F    A   C   T   U   R     A                        " << endl;
     cout << " ****************************************************************************** " << endl;
     cout << endl;
     
     cout << " ---------------------------------------------------------------------------- " << endl;
     cout << " PELICULA SELECCIONADA: " << endl;
     cout << endl;
     cout << pelicula << endl;
     cout << endl;
     cout << " Subtotal en pelicula: " << valorPelicula << " L" << endl;
     cout << endl;
     cout << " ------------------------------------------------------------------------------" << endl;
     cout << " ASIENTO RESERVADO: " << endl;
     cout << endl;
     cout << " Fila: " << asiento+1 << " Asiento: " << fila+1 << endl;
     cout << endl;
     cout << endl;
     
     cout << " ------------------------------------------------------------------------------ " << endl;
     cout << " 	Productos Adquiridos:" << endl;
     cout << endl;
     cout << listaProductos;	
     cout << endl;
     cout << "Subtotal en alimentos y bebidas: " << subTotal << " Lps " << endl;
     cout << endl;
     cout << endl;
     impuesto = (valorPelicula + subTotal) * 0.15;
     cout << " ************ " << endl;
     cout << " SUB TOTAL: " << valorPelicula + subTotal  << " Lps " << endl;
     cout << " ISV 15%: " << impuesto << " L " << endl;
     cout << " TOTAL A PAGAR: " << valorPelicula + subTotal + impuesto << " Lps " << endl;
     cout << endl;
	cout << " ************ " << endl;             
}

void Cartelera(){
	system ("cls");
	cout << "************************************************************" << endl;
	cout << "                       Cartelera Cinepark                   " << endl;
	cout << "************************************************************" << endl;
	cout << endl;
	cout << " PELICULAS En ESTRENO" << endl;
	cout << endl;
	cout << "-------------------------------------------------------------" << endl;

	cout << "                      Precio: 150 Lps.                      " << endl;
	cout << endl;
	cout << " 1. Padre no hay más que uno  " << endl;
	cout << " 2. DC Liga de Supermascotas" << endl;

	cout << "--------------------------------------------------------------" << endl;
	cout << "                      Precio: 100 Lps.                        " << endl;
	cout << endl;
	cout << " 3.  La bestia 2022" << endl;
	cout << " 4. Jurassic World: Dominion 2022" << endl;

	cout << endl;
	cout << " Ingrese el numero de su pelicula: ";
	cin >> seleccion;
	
	switch (seleccion){
		
		case 1: 
	      	pelicula = "  Padre no hay más que uno";
	      	valorPelicula = 150;
	     	break;
		case 2: 
	      	pelicula = " DC Liga de Supermascotas ";
	      	valorPelicula = 150;
	     	break;
	    
	    case 3: 
	      	pelicula = " La bestia 2022 ";
	      	valorPelicula = 100;
	     	break;
	    case 4: 
	      	pelicula = "Jurassic World: Dominion 2022 ";
	      	valorPelicula = 100;
	     	break;
	   
	}
	cout << endl;
	system ("cls");
	cout << " Pelicula seleccionada exitosamente " << endl;
	cout << endl;	
}

	
