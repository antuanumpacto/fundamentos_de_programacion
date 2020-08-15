//#include <iostream>
//#include <math.h>
//#include <string>
//#include <Windows.h>
//using namespace std;
//int opcion, repetirProgramas, repetirMenu;
//
//int repetirPrograma();
//int menuPrincipal();
//float numerosParesEImpares();
//double numeroMayorMedioYMenor();
//int numerosImparesDelMedio();
//int listaParesOImpares();
//int listaEnterosPares();
//int promedioDeCalificaciones();
//int calcularNumeroFactorial();
//
//class Deportista {       // The class
//public:
//    string nombre;                        // Access specifier
//    string pais;        // Attribute (int variable)
//    boolean genero;  // 1: Masculino 2: Femenino
//    int competiciones;
//    int medellas;
//};
//
//int main()
//{
//    /*do
//    {
//        cout << "\t\tMenu\n"
//            << "\n1)\tAveriguar si es par o impar"
//            << "\n\n2)\tNumero mayor, medio y menor"
//            << "\n\n3)\tNumeros impares del medio"
//            << "\n\n4)\tAveriguar impares o pares de una lista"
//            << "\n\n5)\tLista de enteros pares"
//            << "\n\n6)\tCalificaciones"
//            << "\n\n7)\tCalcular el numero factorial"
//            << "\n\nQue desea hacer: ";
//        cin >> opcion;
//
//        system("cls");
//
//        switch (opcion)
//        {
//        case 1:
//            numerosParesEImpares();
//            break;
//        case 2:
//            numeroMayorMedioYMenor();
//            break;
//        case 3:
//            numerosImparesDelMedio();
//            break;
//        case 4:
//            listaParesOImpares();
//            break;
//        case 5:
//            listaEnterosPares();
//            break;
//        case 6:
//            promedioDeCalificaciones();
//            break;
//        case 7:
//            calcularNumeroFactorial();
//            break;
//
//        default:
//            cout << "La opcion seleccionada no esta disponible o no existe, por favor, intentelo nuevamente";
//            break;
//        }
//
//        repetirMenu = menuPrincipal();
//
//    } while (repetirMenu == 1);*/
//
//    for (int i = 1; i <= 4268; i++)
//    {
//        Deportista deportista;
//        deportista.nombre = "Juan" + i;
//        deportista.pais = "Ecuador";
//        deportista.genero = 1;
//        deportista.competiciones = i;
//        deportista.medellas = 123123;
//
//        cout << deportista.competiciones << endl
//            << deportista.nombre << endl
//            << "-------------------------------------";
//    }
//    
//
//    
//    
//}
//
//float numerosParesEImpares()
//{
//    int primerNumero, segundoNumero, tercerNumero;
//
//    int resultadoPrimerNumero, resultadoSegundoNumero, resultadoTercerNumero;
//
//    do
//    {
//        cout << "\t\tAveriguar si es par o impar\n"
//            << "\n\t\tDame los 3 numeros\n"
//
//            << "\nPrimero numero: ";
//        cin >> primerNumero;
//
//        cout << "\n\nSegundo numero: ";
//        cin >> segundoNumero;
//
//        cout << "\n\nTercer numero: ";
//        cin >> tercerNumero;
//
//        resultadoPrimerNumero = primerNumero% 2;
//        resultadoSegundoNumero = segundoNumero % 2;
//        resultadoTercerNumero = tercerNumero % 2;
//
//        system("cls");
//
//        if (resultadoPrimerNumero == 0)
//        {
//            cout << "\n\nEl primer numero es par: " << primerNumero;
//        }
//        else
//        {
//            cout << "\n\nEl primer numero es impar: " << primerNumero;
//        }
//
//        if (resultadoSegundoNumero == 0)
//        {
//            cout << "\n\nEl segundo numero es par: " << segundoNumero;
//        }
//        else
//        {
//            cout << "\n\nEl segundo numero es impar: " << segundoNumero;
//        }
//
//        if (resultadoTercerNumero == 0)
//        {
//            cout << "\n\nEl tercer numero es par: " << tercerNumero;
//        }
//        else
//        {
//            cout << "\n\nEl tercer numero es impar: " << tercerNumero;
//        }
//
//
//        repetirProgramas = repetirPrograma();
//
//    } while (repetirProgramas == 1);
//
//    return 0;
//}
//
//double numeroMayorMedioYMenor()
//{
//    double primerNumero, segundoNumero, tercerNumero;
//
//    do
//    {
//        cout << "\t\tNumeros de mayor a menor\n"
//            << "\n\t\t\tDame los 3 numeros\n"
//
//            << "\nPrimero numero: ";
//        cin >> primerNumero;
//
//        cout << "\n\nSegundo numero: ";
//        cin >> segundoNumero;
//
//        cout << "\n\nTercer numero: ";
//        cin >> tercerNumero;
//
//        system("cls");
//
//        if (primerNumero > segundoNumero&& primerNumero > tercerNumero)
//        {
//            cout << "\n\nEl numero mas alto es: " << primerNumero;
//        }
//        else if (segundoNumero > primerNumero&& segundoNumero > tercerNumero)
//        {
//            cout << "\n\nEl numero mas alto es: " << segundoNumero;
//        }
//        else if (tercerNumero > primerNumero&& tercerNumero > segundoNumero)
//        {
//            cout << "\n\nEl numero mas alto es: " << tercerNumero;
//        }
//
//        //********************
//
//        if (primerNumero > segundoNumero&& primerNumero < tercerNumero)
//        {
//            cout << "\n\nEl numero del medio es: " << primerNumero;
//        }
//        else if (segundoNumero > primerNumero&& segundoNumero < tercerNumero)
//        {
//            cout << "\n\nEl numero del medio es: " << segundoNumero;
//        }
//        else if (tercerNumero > primerNumero&& tercerNumero < segundoNumero)
//        {
//            cout << "\n\nEl numero del medio es: " << tercerNumero;
//        }
//
//        if (primerNumero < segundoNumero && primerNumero > tercerNumero)
//        {
//            cout << "\n\nEl numero del medio es: " << primerNumero;
//        }
//        else if (segundoNumero < primerNumero && segundoNumero > tercerNumero)
//        {
//            cout << "\n\nEl numero del medio es: " << segundoNumero;
//        }
//        else if (tercerNumero < primerNumero && tercerNumero > segundoNumero)
//        {
//            cout << "\n\nEl numero del medio es: " << tercerNumero;
//        }
//
//        //********************
//
//        if (primerNumero < segundoNumero && primerNumero < tercerNumero)
//        {
//            cout << "\n\nEl numero mas bajo es: " << primerNumero;
//        }
//        else if (segundoNumero < primerNumero && segundoNumero < tercerNumero)
//        {
//            cout << "\n\nEl numero mas bajo es: " << segundoNumero;
//        }
//        else if (tercerNumero < primerNumero && tercerNumero < segundoNumero)
//        {
//            cout << "\n\nEl numero mas bajo es: " << tercerNumero;
//        }
//
//        repetirProgramas = repetirPrograma();
//
//    } while (repetirProgramas == 1);
//    return 0;
//}
//
//int numerosImparesDelMedio()
//{
//    int numeroA, numeroB, imPar;
//
//    do
//    {
//        cout << "\t\tNumeros impares del medio\n"
//            << "\nDame el primer numero: ";
//        cin >> numeroA;
//        cout << "\nDame el segundo numero: ";
//        cin >> numeroB;
//
//        cout << "\n\nLos numero impares entre el " << numeroA << " y el " << numeroB << " son: \n\n";
//
//        for (int i = 0; numeroA <= numeroB; i++)
//        {
//            imPar = numeroA % 2;
//
//            if (imPar != 0)
//            {
//                cout << numeroA << " - ";
//            }
//
//            numeroA += 1;
//        }
//
//        repetirProgramas = repetirPrograma();
//    } while (repetirProgramas == 1);
//    return 0;
//}
//
//int listaParesOImpares()
//{
//    int numeroA, numeroB, imPar, par;
//    char P = 'p', I = 'i', opcion;
//    do
//    {
//        cout << "\t\tAveriguar impares o pares de una lista\n"
//            << "\nDame el primer numero: ";
//        cin >> numeroA;
//        cout << "\nDame el segundo numero: ";
//        cin >> numeroB;
//
//        cout << "\n\nPara ver los numeros pares prsione P, para ver los impares presione I: ";
//        cin >> opcion;
//
//
//        if (opcion == P)
//        {
//            cout << "\n\nLos numero pares entre el " << numeroA << " y el " << numeroB << " son: \n\n\t";
//
//            for (int i = 0; numeroA <= numeroB; i++)
//            {
//                par = numeroA % 2;
//
//                if (par == 0)
//                {
//                    cout << numeroA;
//                }
//                if (par == 1 && numeroA >= 2)
//                {
//                    cout << " - ";
//                }
//
//                numeroA += 1;
//            }
//        }
//        else if (opcion == I)
//        {
//            cout << "\n\nLos numero impares entre el " << numeroA << " y el " << numeroB << " son: \n\n";
//
//            for (int i = 0; numeroA <= numeroB; i++)
//            {
//                imPar = numeroA % 2;
//
//                if (imPar >= 1)
//                {
//                    cout << numeroA;
//                }
//                if (imPar > 1)
//                {
//                    cout << " - ";
//                }
//
//                numeroA += 1;
//            }
//        }
//        else
//        {
//            cout << "La opcion seleccionada no esta disponible.";
//        }
//
//
//
//        repetirProgramas = repetirPrograma();
//
//    } while (repetirProgramas == 1);
//
//    return 0;
//}
//
//int listaEnterosPares()
//{
//    int par, numeroFinal;
//    do
//    {
//        do
//        {
//            cout << "\t\tLista de numeros enteros pares"
//                << "\n\nPor favor ingrese un numero mayor o igual a 100."
//                << "\n\nIngrese el numero deseado: ";
//            cin >> numeroFinal;
//
//            if (numeroFinal >= 100)
//            {
//                
//                int numeroEnteroPar = 0;
//
//                for (int i = 0; i <= numeroFinal; i++)
//                {
//                    
//                    par = numeroEnteroPar % 2;
//
//                    if (par == 0 && numeroEnteroPar <= numeroFinal)
//                    {
//                        cout << numeroEnteroPar;
//                    }
//                    
//                    if (par == 0 && numeroEnteroPar < numeroFinal)
//                    {
//                        cout << " - ";
//                    }
//                    
//                    numeroEnteroPar += 1;
//
//                }
//            }
//            else if (numeroFinal <= 99)
//            {
//                system("cls");
//
//                cout << "Ingreso un numero menor a 100. Por favor intentelo nuevamente\n\n";
//            }
//
//
//        } while (numeroFinal <= 99);
//
//        repetirProgramas = repetirPrograma();
//
//    } while (repetirProgramas == 1);
//
//    return 0;
//}
//int promedioDeCalificaciones()
//{
//    int cantidadDeEstudiantes;
//    float notaA = 0, notaB = 0, notaC = 0;
//    float valorTotal = 0.0, promedioNota = 0.0, promedioTotal = 0.0;
//
//    do
//    {
//        cout << "\t\tAveriguar promedio de calificaciones"
//            << "\n\nIngrese la cantidad de estudiantes: ";
//        cin >> cantidadDeEstudiantes;
//
//        for (int i = 1; i <= cantidadDeEstudiantes; i++)
//        {
//            cout << "\n\n\t" << i << " Estudiante"
//                << "\n\nIngrese la primer nota: ";
//            cin >> notaA;
//            cout << "\n\nIngrese la segunda nota: ";
//            cin >> notaB;
//            cout << "\n\nIngrese la tercer nota: ";
//            cin >> notaC;
//
//            promedioNota = (notaA + notaB + notaC) / 3;
//
//            cout << "\n\nEl promedio del " << i << " estudiante es de: " << promedioNota;
//
//            valorTotal += promedioNota;
//
//            cout << "\n\n***********************";
//        }
//
//        promedioTotal = valorTotal / cantidadDeEstudiantes;
//
//        cout << "\n\nEl promedio total es de: " << promedioTotal
//            << "\n\n***********************";
//
//        repetirProgramas = repetirPrograma();
//
//    } while (repetirProgramas == 1);
//
//    return 0;
//}
//
//int calcularNumeroFactorial()
//{
//    int numero;
//    long double resultado;
//    cout << "\t\tCalcular el numero factorial";
//    do
//    {
//        int factorial = 1;
//
//        cout << "\n\nIngrese el numero a calcular: ";
//        cin >> numero;
//
//        cout << endl;
//
//        for (int i = numero; i >= 1; i--)
//        {
//            cout << i;
//
//            factorial *= i;
//
//            if (i > 1)
//            {
//                cout << " * ";
//            }
//
//        }
//
//        cout << "\n\nResultado: " << factorial;
//
//        repetirProgramas = repetirPrograma();
//
//    } while (repetirProgramas == 1);
//    return 0;
//}
//
//
//int repetirPrograma()
//{
//    int repetirProgramas;
//
//    cout << "\n\nPara volver a utilizar el programa presione 1, para salir presione 0\n"
//        << "\nQue desea hacer: ";
//    cin >> repetirProgramas;
//
//    if (repetirProgramas == 1)
//    {
//        system("cls");
//    }
//
//    return repetirProgramas;
//}
//
//int menuPrincipal()
//{
//    int repetirMenu;
//    system("cls");
//    cout << "\nPara volver al menu principal presione 1, para finalizar presione 0\n"
//        << "\nQue desea hacer: ";
//    cin >> repetirMenu;
//
//    if (repetirMenu == 1)
//    {
//        system("cls");
//    }
//    return repetirMenu;
//}