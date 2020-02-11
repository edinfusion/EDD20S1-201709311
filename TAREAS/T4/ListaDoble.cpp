
#include <iostream>
#include <string>
#include "Lista.h"
using namespace std;

int main()
{
	Lista* Nueva = new Lista();
	string s = "avi";
	int a = s.size();
	char l1 = 'b';
	char l2 = 'u';
	char l3 = 'e';
	char l4 = 'n';
	char l5 = 'a';
	char l6 = 'v';
	char l7 = 'i';
	char l8 = 'd';
	char l9 = 'a';
	char l10 = '!';
	Nueva->InsertarFinal(l1);
	Nueva->InsertarFinal(l2);
	Nueva->InsertarFinal(l3);
	Nueva->InsertarFinal(l4);
	Nueva->InsertarFinal(l5);
	Nueva->InsertarFinal(l6);
	Nueva->InsertarFinal(l7);
	Nueva->InsertarFinal(l8);
	Nueva->InsertarFinal(l9);
	Nueva->InsertarFinal(l10);
	cout << Nueva->ImprimirLista();
	Nueva->buscar(s);
	return 0;
}

