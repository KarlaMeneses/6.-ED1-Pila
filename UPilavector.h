//---------------------------------------------------------------------------

#ifndef UPilavectorH
#define UPilavectorH
//---------------------------------------------------------------------------
//added
#include <iostream>
#include <string>
using namespace std; //para el string
const int MAXV=50;
typedef int direccion;
class PilaV{
	private:
		int* elementos;//puntero
		direccion tope;
	public:
		PilaV();
		bool Vacia();
		void Meter(int E);
		void Sacar(int& E);
		int cima();		string mostrar();
};
#endif
