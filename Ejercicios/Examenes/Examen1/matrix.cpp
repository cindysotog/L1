//Examen 1 Parcial, Cindy Soto.

#include <iostream>


using namespace std;

int Modulus(int iN, int iMod) {
	int iQ = (iN/iMod);
	return iN - (iQ*iMod);
}

char GetChar(int iGenerator, char cBase, int iRange) {
	return (cBase + Modulus(iGenerator, iRange));
}

int main() {
	string contrasena;
	
	cout << "Eres un agente? ingresa tu password para acceder a la matrix: ";
	cin >> contrasena;
	
	if (contrasena == "neo") {
		system("COLOR 04");

		char caRow[80];
		int j = 7;
		int k = 2;
		int l = 5;
		int m = 1;

		while (true) {
			int i = 0;
			
			// caracteres aleatorios
			while (i < 80) {
				if (caRow[i] != ' ') {
					caRow[i] = GetChar(j + i*i, 33, 30);
				}
				std::cout << caRow[i];
				++i;
			}
			j = (j + 31);
			k = (k + 17);
			l = (l + 47);
			m = (m + 67);
			caRow[Modulus(j, 80)] = '-';
			caRow[Modulus(k, 80)] = ' ';
			caRow[Modulus(l, 80)] = '-';
			caRow[Modulus(m, 80)] = ' ';
			
			// incremente el valor de 3000000 para retrasar el proceso
			i = 0;
			while (i < 300000) {
				GetChar(1, 1, 1);
				 ++i;
			}
			if (i < 10);{

				cout << "\nEl SISTEMA FALLO";
				break;

			}
		}		
	} 
	
	else 
		if (contrasena == "smith") {
		system("COLOR 02");

		char caRow[80];
		int j = 7;
		int k = 2;
		int l = 5;
		int m = 1;

		while (true) {
			int i = 0;
			
			// caracteres aleatorios
			while (i < 80) {
				if (caRow[i] != ' ') {
					caRow[i] = GetChar(j + i*i, 33, 30);
				}
				std::cout << caRow[i];
				++i;
			}
			j = (j + 31);
			k = (k + 17);
			l = (l + 47);
			m = (m + 67);
			caRow[Modulus(j, 80)] = '-';
			caRow[Modulus(k, 80)] = ' ';
			caRow[Modulus(l, 80)] = '-';
			caRow[Modulus(m, 80)] = ' ';
			
			// incremente el valor de 3000000 para retrasar el proceso
			i = 0;
			while (i < 3000000) {
				GetChar(1, 1, 1);
				 ++i;
			}
			
	
		}		
	} 


    return 0;
}
