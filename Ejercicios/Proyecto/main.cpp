#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "cine.h"

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Spanish");
	cout.precision(12);
	
    srand(time(NULL));
	int continuar, cancelar = 0;
	int opcionSeleccionada = 0;
    int seleccion = 0;
	inicializarSalaCine();
	
	cout << "*******************************************************" << endl;
	cout << "       B I E N V E N I D O S      C I N E P A R K      " << endl;
	cout << "*******************************************************" << endl;
	cout << endl;
	system("pause");
	
	while(true){
		menu();
		cout << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcionSeleccionada;	
		
		switch(opcionSeleccionada)
		{
			case 1: 
				Cartelera();
			    break;
			case 2: 
				mostrarSalaCine();
			    break;
			    
			case 3:
				mostrarSalaCine();
				reservacion();
			    break;	
			    
			case 4:
				Bebidas();
				break;	
					
			case 5:
			    Alimentos();
				break;	
				
			case 6: 
		        FACTURA();
			    break;  
		
		  	case 7:
		  		cout << endl;
		    	cout << " Saliendo del sistema...\n";
			   return 0;
			   
			default:
				cout << endl;
				cout << " Opcion no valida\n";	
	    }	
	        system("pause"); 	
			 
	}
	     
return 0;
	
}
