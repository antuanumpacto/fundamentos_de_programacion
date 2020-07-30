#include <iostream>
#include <math.h>
using namespace std;

int main() {

	////Para declarar un dato primero va el tipo de dato y luego el nombre de la variable
	//// comillas dobles para tipo string y comillas simples para caracter
	//// 1 byte = 8 bits
	////Texto
	//char caracter, caracterConValor = 'a';
	//char ascii = 160;
	//string cadenaDeCaracteres = "Hola mundo, mi numero es 1234";
	////Enteros
	////Short (-32768 a 32767)
	////int (-2147483648 a 2147483647)
	////16
	//short variableShort = 0;
	//int	variableInt  = 0;
	//double variableDoble = 0;
	////Decimales
	//float variableDecimalFloat;
	//double variableDecimalDouble;
	////Booleano (true = 1, false = 0)
	//bool booleanTrue = true;
	//bool booleanFalse = false;
	////void vacio, puede retonar cualquier tipo de dato o no retornar nada


	/*char a = 'a';
	char ascii = 97;
	short corto = 5.4563;
	int entero = 6.45;
	long enteroLargo = 4.456;
	float numeroFloat = 23.56;
	double numeroDouble = 4564651.23321;
	long double numeroLongDouble = 7445896.255215;
	bool booleanoValor = true;
	bool booleanoNumero = 0;
	
	cout << "\nChar: " << a << "\n"
		<< "Char ascii: " << ascii << "\n"
		<< "Short: " << corto << "\n"
		<< "Int: " << entero << "\n"
		<< "Long int: " << enteroLargo << "\n"
		<< "Float: " << numeroFloat << "\n"
		<< "Double: " << numeroDouble << "\n"
		<< "Long double: " << numeroLongDouble << "\n"
		<< "Booleano positivo: " << booleanoValor << "\n"
		<< "Booleano numero false: " << booleanoNumero;*/


	//Ejempplo de usu de cin: obtiene el dato escrito en consola


	/*float suma, numeroUno, numeroDos;

	cout << "Por favor escribe dos numeros para realizar una suma: \n"
		<< "Numero uno: ";

	cin >> numeroUno;

	cout << "\nNumero dos: ";

	cin >> numeroDos;

	suma = numeroUno + numeroDos;

	cout << "\nEl total es: " << suma;*/


	//sqrt(valor) y pow(base, elevada a) ^
	// cast (tipo de dato) cambiay retorna el tipo de dato asignado
	float raiz, exponente, base;

	

	cout << "Ingresa la base: ";

	cin >> base;

	raiz = sqrt(base);

	exponente = pow(base, (float)1 / 2);


	cout << "\nEl resultado es: " << raiz << "\n"
		<< "El resultado es: " << exponente;


	

}