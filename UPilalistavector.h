//---------------------------------------------------------------------------

#ifndef UPilalistavectorH
#define UPilalistavectorH
//---------------------------------------------------------------------------
//added
#include "UListavector.h"

class PilaLV{
	private:
		ListaV* L;
	public:
		PilaLV();
		bool Vacia();
		void Meter(int E);
		void Sacar(int& E);
		int cima();		string mostrar();
};
#endif
