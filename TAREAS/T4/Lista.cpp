#include <iostream>
#include "Lista.h"
#include <string>
using std::string;
using namespace std;

Lista::Lista()
{
	primero = NULL;
	ultimo = NULL;
}
bool Lista::ListaVacia()
{
	return primero == NULL; //retorna true si inicio es igual null
}
void Lista::InsertarPrimero(char dato)
{
	if (ListaVacia())
	{
		 primero = new NodoDoble(dato);
		 ultimo = primero;
	}
	else
	{
		NodoDoble *nuevo = new NodoDoble(dato);
		nuevo->setSiguiente(primero);
		primero->setAnterior(nuevo);
		primero = nuevo;
	}
}
void Lista::InsertarFinal(char dato)
{
	if(ListaVacia())
	{
		primero = new NodoDoble(dato);
		ultimo = primero;
	}
	else
	{
		NodoDoble* nuevo = new NodoDoble(dato);
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);
		ultimo = nuevo;
	}
}

void Lista::EliminarUltimo() 
{
	NodoDoble* aux = ultimo;
	ultimo = ultimo->getAnterior();
	ultimo->setSiguiente(NULL);
	delete aux;
}

void Lista::EliminarPrimero()
{
	NodoDoble* aux = primero;
	primero = primero->getSiguiente();
	primero->setAnterior(NULL);
	delete aux;
}

string Lista::ImprimirLista()
{
	NodoDoble* aux = primero;
	stringstream s;
	while (aux != NULL)
	{
		s << aux->getDato() << endl;
		aux = aux->getSiguiente();
	}
	return s.str();
}

void Lista::buscar(string palabra)
{
	NodoDoble* aux = primero;
	NodoDoble* coincidencia = primero;
	string match;
	int contador = 0;
		while (aux != NULL)
		{
			if (aux->getDato() != palabra[contador])
			{
				if (contador < 1)
				{
					aux = aux->getSiguiente();
				}
				else
				{
					contador = 0;
					match = "";
					cout << match << endl;
					aux = aux->getSiguiente();
				}
			}
			else
			{
				
				if (contador == (palabra.size()-1))
				{
					match = match+aux->getDato();

					if (match == palabra) 
					{
						cout << "CADENA ENCONTRADA EN NODO " << '"' <<coincidencia << '"' << " CON VALOR: " << coincidencia->getDato() << endl;
						break;
					}
					else
					{
						cout << "NO SE ENCONTRO COINCIDENCIAS "<< match << endl;
						break;
					}
				}
				else
				{
					if (contador == 0)
					{
						coincidencia = aux;
					}
					match = match + aux->getDato();
					contador++;
					aux = aux->getSiguiente();
				}
			}
		}

		if (aux == NULL)
		{
			cout << "CADENA NO ENCONTRADA " << match << endl;
		}
		
}

Lista::~Lista()
{

}