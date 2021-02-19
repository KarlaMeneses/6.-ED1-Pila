//---------------------------------------------------------------------------

#ifndef UPilalistamemoriaH
#define UPilalistamemoriaH
//---------------------------------------------------------------------------
//added
#include "UListamemoria.h"

class PilaLSM{
	private:
		ListaSM* L;
	public:
		PilaLSM();
		bool Vacia();
		void Meter(int E);
		void Sacar(int& E);
		int cima();		//string mostrar();
		string listaL();
};
#endif
