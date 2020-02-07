#include <iostream>
#include "Nodo.h"
#ifndef LISTA_H
#define LISTA_H
using std::string;

//class Estudiante
//{
//private: //atributos
//	int carnet;
//	string nombre;
//public:
//	Estudiante(int _c, string _n);
//	int getCarnet();
//	string getNombre();
//	void setCarnet(int carn);
//	void setNombre(string nomb);
//	friend class Lista;
//	friend class nodo;
//};
//
//class nodo
//{
//	nodo *sig; //puntero al siguiente nodo
//	Estudiante dato;
//	friend class Lista; // para que la Clase lista pueda utilizar los atributos de nodo
//};


class Lista
{
public:
	Lista();
	void IngresarEstudiante(Estudiante *);
	string toString();
	~Lista();

private:
	Nodo *primero;

};

#endif // LISTA_H