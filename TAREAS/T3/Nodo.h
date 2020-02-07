#ifndef NODO_H
#define NODO_H
#include <iostream>
#include <string>
#include <sstream>
#include "Estudiante.h"


using std::string;
using std::stringstream;
using namespace std;

class Nodo
{
public:
	Nodo();
	Nodo(Estudiante *, Nodo *);
	void setEstudiante(Estudiante *);
	void setSiguiente(Nodo *);
	Nodo *getSiguiente();
	Estudiante *getEstudiante();
	~Nodo();

private:
	Estudiante *Estu;
	Nodo *sig;
};
#endif