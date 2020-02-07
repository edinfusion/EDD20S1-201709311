// ListaSimple.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include "Lista.h"
using namespace std;
int main()
{
	Lista* Nueva = new Lista();
	int opc;


	do
	{
		cout << "1. Ingresar" << endl;
		cout << "2. Ingresar al Final" << endl;
		cout << "3. Mostrar" << endl;
		cout << "4. salir" << endl;
		cout << endl << "elija una opcion: ";
		cin >> opc;
		switch (opc)
		{
		case 1:
		{
			int carn;
			string nomb;
			system("cls");
			cout << "Ingrese Carnet: " << endl;
			cin >> carn;
			cout << "Ingrese nombre de estudiante: " << endl;
			cin >> nomb;
			Estudiante* nuevo = new Estudiante(carn, nomb);
			Nueva->IngresarEstudiante(nuevo);
			break;
		}
		case 2:
		{

			break;
		}
		case 3:
		{
			cout << Nueva->toString() << endl;
			break;
		}
		case 4:
		{
			cin.get();
			break;
		}
		default:
		{
			cout << "opcion invalida" << endl;
			cin.get();
			cin.get();
			break;
		}
		}
	} while (opc != 4);
	return 0;
}

