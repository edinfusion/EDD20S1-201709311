#include "NodoDoble.h"
#include <string>
using namespace std;

NodoDoble::NodoDoble(char dato1)
{
	anterior = NULL; //no se sabe si va a ser el primero o enmedio
	dato = dato1;
	siguiente = NULL;
}
NodoDoble::NodoDoble(char dato2 , NodoDoble *ant, NodoDoble *sig)
{
	anterior = ant;
	dato = dato2;
	siguiente = sig;
}
void NodoDoble::setDato(char letra)
{
	dato = letra;
}
char NodoDoble::getDato()
{
	return dato;
}
void NodoDoble::setSiguiente(NodoDoble *sigue)
{
	siguiente = sigue;
}
NodoDoble *NodoDoble::getSiguiente()
{
	return siguiente;
}
void NodoDoble::setAnterior(NodoDoble *antes)
{
	anterior = antes;
}
NodoDoble *NodoDoble::getAnterior()
{
	return anterior;
}
NodoDoble::~NodoDoble()
{

}