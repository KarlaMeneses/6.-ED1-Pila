//---------------------------------------------------------------------------

#ifndef UPilamemoriaH
#define UPilamemoriaH
//---------------------------------------------------------------------------
//added
#include "Umemoria.h"
#include <iostream>
#include <string>
using namespace std; //para el string
const string datoP = "elemento,sig";
const string elementoP = "->elemento";
const string sigP = "->sig";
typedef int direccion;
class PilaSM{
	private:
		direccion tope;
		CSMemoria* mem;
	public:
		PilaSM();
		bool Vacia();
		void Meter(int E);
		void Sacar(int& E);
		int cima();		string mostrar();};
#endif
