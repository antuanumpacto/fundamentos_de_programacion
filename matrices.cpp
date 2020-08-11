#include <iostream>
#include <math.h>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
	
	int enteros[3];
	int promedio = 0;
	int total = 0;


	/*for (int i = 0; i < size(enteros); i++)
	{
		int par;
		
		par = enteros[i] % 2;

		if (par == 0) {
			cout << "El valor par es: " << enteros[i] << endl;
		}
		else {
			cout << "El valor impar es: " << enteros[i] << endl;
		}
	}*/
	//Llene los datos
	for (int i = 0; i < size(enteros); i++)
	{
		cout << "Ingresa la nota " << i+1 << ":";
		cin >> enteros[i];
		//Promedio
		total += enteros[i];
	}

	promedio = total / size(enteros);

	cout << "\nEl promedio del estudiante es: " << promedio;
	

}