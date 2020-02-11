#include <iostream>
#include "NodoDoble.h"
#ifndef LISTA_H
#define LISTA_H
using std::string;

class Lista
{
public:
	Lista();
	bool ListaVacia();
	void InsertarPrimero(char );
	void InsertarFinal(char );
	void EliminarPrimero();
	void EliminarUltimo();
	void buscar(string);
	string ImprimirLista();
	~Lista();

private:
	NodoDoble *primero;
	NodoDoble *ultimo;
};


#endif // !NODODOBLE_H