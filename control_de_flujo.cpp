#include <iostream>
#include <math.h>
#include <string>
#include <Windows.h>
using namespace std;
int reiniciar();
int reiniciarPrenda();
int main() {

	int menu, repeat = 0,prenda = 0,compraMasPrenda = 0;
	float resultadoPositivo, rusultadoNegativo, valorA, valorB, valorC,checkRaiz,camisa = 15,pantalon = 8,abrigo = 50,corbata = 5, suma;


	do
	{
		float valorTotal = 0;

		cout << "Menu clase control de flujo"
			<< "\n1) Resolver ecuacines cuadraticas"
			<< "\n2) Almacen de ropa"
			<< "\nSelecciona una de las siguiente opciones: ";

		cin >> menu;

		if (menu == 1) {
			system("cls");
			
			cout << "\nIngrese el valor de a: ";

			cin >> valorA;

			cout << "\nIngrese el valor de b: ";

			cin >> valorB;

			cout << "\nIngrese el valor de c: ";

			cin >> valorC;

			checkRaiz = pow(valorB, 2) - (4 * valorA * valorC);

			if (checkRaiz <= 0) {
				cout << "\nLa ecucacion cuandradita no corta con el eje x";

				repeat = reiniciar();
			}
			else {
				system("cls");
				resultadoPositivo = ((-1*valorB) + sqrt(checkRaiz)) / (2*valorA);
				rusultadoNegativo = ((-1 * valorB) - sqrt(checkRaiz)) / (2 * valorA);
				cout << "\nEl resultado de x1: " << resultadoPositivo
					<< "\nEl resultado de x2: " << rusultadoNegativo;

				repeat = reiniciar();
			}
		}
		else if (menu == 2) {

			do
			{
				system("cls");
				cout << "\nLista de productos"
					<< "\n1)Camisa 15$"
					<< "\n2)Pantalon 8$"
					<< "\n3)Abrigo 50$"
					<< "\n4)Corbata 5$"
					<< "\nQue deseas comprar? ";

				cin >> prenda;

				switch (prenda)
				{
					
					case 1:
						valorTotal += camisa;
						compraMasPrenda = reiniciarPrenda();
						break;
					case 2:
						valorTotal += pantalon;
						compraMasPrenda = reiniciarPrenda();
						break;
					case 3:
						valorTotal += abrigo;
						compraMasPrenda = reiniciarPrenda();
						break;
					case 4:
						valorTotal += corbata;
						
						break;
					default:
						system("cls");
						cout << "\nEl valor seleccionado es incorrecto";

						repeat = reiniciar();

						if (repeat == 1) {
							system("cls");
						}
						break;
				}

				if (compraMasPrenda == 0) {
					system("cls");
					cout << "\nEl valor de la compra es: " << valorTotal << "$";

					cout << "\nSi desea continuar presione 1 si desea salir presione 0: ";

					cin >> repeat;

					if (repeat == 1) {
						system("cls");
					}
					else {
						valorTotal = 0;
					}
				}
			} while (compraMasPrenda == 1);
		}
		else {
			cout << "\nEl valor seleccionado es incorrecto";
			repeat = reiniciar();
		}
	} while (repeat == 1);
}

int reiniciar() {
	int repeat;
	cout << "\nSi desea continuar presione 1 si desea salir presione 0: ";

	cin >> repeat;

	if (repeat == 1) {
		system("cls");
	}

	return repeat;
}

int reiniciarPrenda() {

	int compraMasPrenda;

	cout << "\nSi desea comprar una prendra adicional presione 1 si desea finalizar la compra presine 0: ";

	cin >> compraMasPrenda;

	if (compraMasPrenda == 1) {
		system("cls");
	}

	return compraMasPrenda;
}
