#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int a = 0;
	int b = 0;
	
	cout<<"Ingrese el valor de a: ";
	cin>>a;
	
	cout<<"Ingrese el valor de b: ";
	cin>>b;
	
	if (a == b)
	{
		cout<<"\nA es igual a B "; // <---true
	}
	else
	{
		cout<<"\nSon diferentes"; // <---- false
	}
	
	return 0;
}