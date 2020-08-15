#include <iostream>
#include <math.h>
#include <string>
#include <Windows.h>
using namespace std;
int par(int numero);
int rango(int a, int b, int numero);
int main() {
	
	/*int enteros[3];
	int promedio = 0;
	int total = 0;*/


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
	//for (int i = 0; i < size(enteros); i++)
	//{
	//	cout << "Ingresa la nota " << i+1 << ":";
	//	cin >> enteros[i];
	//	//Promedio
	//	total += enteros[i];
	//}

	//promedio = total / size(enteros);

	//cout << "\nEl promedio del estudiante es: " << promedio;
	/*
	int numero = 5,totalSuma = 0;

	for (int i = numero; i >= 1; i--)
	{
		cout << i << endl;
		totalSuma += i;

	}

	cout << totalSuma;*/

	//}
	////Mayor valor
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		
	//		if (matrizA[i][j] > valorMaximo)
	//			valorMaximo = matrizA[i][j];
	//	}

	//}

	//cout << "EL valor maximo ingresado en la matriz es: " << valorMaximo;
	//allocate the array
	//int row = 2,col = 2;

	//int** arr = new int* [row];
	//for (int i = 0; i < row; i++)
	//	arr[i] = new int[col];

	//// use the array
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 2; j++)
	//	{
	//		cout << "Elemento " << "[" << i + 1 << "][" << j + 1 << "]: ";
	//		cin >> arr[i][j];
	//	}
	//}

	//


	//for (int i = 0; i < 2; i++)
	//{
	//	cout << endl;
	//	for (int j = 0; j < 2; j++)
	//	{

	//		cout << arr[i][j];
	//	}
	//}

	//

	//1) que los valores sean moyor que 5
	//2) el usuario es escoge un rango a => b
	//3) suma total de la matriz
	int matrizA[3][5], valorMaximo = 0,valorTotal = 0,a = 7,b = 10;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			
			cout << "\nElemento " << "[" << i + 1 << "][" << j + 1 << "]: ";
			cin >> matrizA[i][j];

			matrizA[i][j] = rango(a, b, matrizA[i][j]);
			
		}
		
	}

	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << matrizA[i][j];
		}

	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			valorTotal += matrizA[i][j];
		}

	}

	cout << "\nEl valor total es: " << valorTotal;
}

int par(int numero) {

	int par = 0;

	par = numero % 2;

	if (par == 0) {
		cout << " 1 ";
		return 1;
	}
	else {
		
		cout << " 0 ";
		return 0;
	}
}

int rango(int rangoInicial, int rangoFinal, int numero) {
	
	if (numero >= rangoInicial && numero <= rangoFinal)
		return 1;
	else
		return 0;
}