#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
// 	int a =10;
//	int b =5;

//	while (a > b)
//	{
//		cout<<"A es mayor!"<<endl;
//
//		b=b+1;		
//	}
 


//	**************************Otra forma de hacerlo********************
	
// 	int opcion = 0;

//	while (opcion == 0)
//	{
//		cout<<"\nIngrese 0 continuar y cualquier otro numero para salir ";
//		cin>> opcion;

//		cout<<"La opcion que seleccionaste es: "<<opcion<<endl;

//	} 
//	cout<<"Fin del programa"<<endl;  




//*************************************   Hacerlo con true   ****************************************************************

	
// 	int opcion = 0;
	
//	while (true){
		
//		system("cls");
//		cout<<"====="<<endl;
//		cout<<"MENU"<<endl;
//		cout<<"====="<<endl;
//		cout<<endl;
//		cout<<"1- Ventas"<<endl;
//		cout<<"2- Productos"<<endl;
//		cout<<"3- Clientes"<<endl;
//		cout<<"0- Salir"<<endl;
//		cin>>opcion;

//		if(opcion == 1) {
//			system("cls");
//			cout<<"VENTAS"<<endl;
//			cout<<"======="<<endl;
//			system("pause");
//		}
//		if(opcion == 2) {
//			system("cls");
//			cout<<"PRODUCTOS"<<endl;
//			cout<<"======="<<endl;
//			system("pause");
//		}
//		if(opcion =cd= 3) {
//			system("cls");
//			cout<<"CLIENTES"<<endl;
//			cout<<"======="<<endl;
//			system("pause");
//		}

//		if(opcion == 0)
//		{
//			break;
//		}



//************************** C O N T A D O R  ***********************
	
//	int contador = 0;

//	while (true)
//	{
//		contador = contador + 1;
//		cout<<"contador"<<endl;
		
//		if (contador > 100)
//		{
//			break;
//		}
//	}




// *****************************    Incrementando      **************************************       *****************

int x = 0;


while (true)
{
	int y = 0;
	while (true)
	{
		cout<< x <<" - "<< y << endl;
		if ( y == 5)
		{
			break;
		}
		y++;
	}

	if (x == 5)
	{
		break;
	}
	x++;
}


	return 0;
}