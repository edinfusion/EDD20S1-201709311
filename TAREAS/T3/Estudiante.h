#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
#include <string>
#include <sstream>

using std::string;
using std::stringstream;
using namespace std;

class Estudiante
{
public:
	Estudiante();
	Estudiante(int carnet, string nombre);
	~Estudiante();
	int getCarnet();
	string getNombre();
	void setCarnet(int carnet);
	void setNombre(string nombre);
	string toString();
private:
	int _Carnet;
	string _Nombre;

};
#endif // !ESTUDIANTE_H