
using namespace std;
#include "ESTUDIANTE.H"
Estudiante::Estudiante()
{
	_Carnet = 0;
	_Nombre = "";
}
Estudiante::Estudiante(int carnet, string nombre)
{
	_Carnet = carnet;
	_Nombre = nombre;
}

int Estudiante::getCarnet()
{
	return _Carnet;
}

string Estudiante::getNombre()
{
	return _Nombre;
}

string Estudiante::toString()
{
	stringstream s;
	s << "Carnet-----: " << _Carnet << endl;
	s << "Nombre-----: " << _Nombre << endl;
	return s.str();
}

void Estudiante::setCarnet(int carnet)
{
	_Carnet = carnet;
}
void Estudiante::setNombre(string nombre)
{
	_Nombre = nombre;
}

Estudiante::~Estudiante()
{

}