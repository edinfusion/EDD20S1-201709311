#ifndef NODODOBLE_H
#define NODODOBLE_H
#include <iostream>
#include <string>
#include <sstream>



class NodoDoble
{
public:
	NodoDoble(char);
	NodoDoble(char, NodoDoble*, NodoDoble*);
	void setDato(char);
	char getDato();
	void setSiguiente(NodoDoble*);
	NodoDoble *getSiguiente();
	void setAnterior(NodoDoble*);
	NodoDoble *getAnterior();
	~NodoDoble();
private:
	NodoDoble *anterior;
	char dato;
	NodoDoble *siguiente;
};

#endif // !NODODOBLE_H