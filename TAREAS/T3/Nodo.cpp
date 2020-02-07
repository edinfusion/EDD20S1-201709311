#include <string>
using namespace std;
#include "NODO.h"

Nodo::Nodo() 
{
	Estu = NULL;
	sig = NULL;
}
Nodo::Nodo(Estudiante *estu, Nodo *sigue)
{
	Estu = estu;
	sig = sigue;
}
void Nodo::setEstudiante(Estudiante *estu)
{
	Estu = estu;
}
void Nodo::setSiguiente(Nodo *sigue)
{
	sig = sigue;
}
Nodo* Nodo::getSiguiente()
{
	return sig;
}
Estudiante *Nodo::getEstudiante()
{
	return Estu;
}
Nodo::~Nodo()
{

}