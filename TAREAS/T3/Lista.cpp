#include <iostream>
#include "Lista.h"
#include <string>
using std::string;
using namespace std;

Lista::Lista()
{
	primero = NULL;
}
void Lista::IngresarEstudiante(Estudiante *estud)
{
	primero = new Nodo(estud, primero);
}
string Lista::toString()
{
	Nodo* aux = primero;
	stringstream s;
	while (aux != NULL)
	{
		s << aux->getEstudiante()->toString() << endl;
		aux = aux->getSiguiente();
	}
	return s.str();
}
Lista::~Lista()
{
	Nodo* aux = primero;
	Nodo* actual;
	while (aux != NULL)
	{
		actual = aux->getSiguiente();
		delete aux;
		aux = actual;
	}
	primero = NULL;
}