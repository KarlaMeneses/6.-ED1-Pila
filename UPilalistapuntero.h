//---------------------------------------------------------------------------

#ifndef UPilalistapunteroH
#define UPilalistapunteroH
//---------------------------------------------------------------------------
//added
#include "UListapuntero.h"

const char sep[12]={' ',',','.','-','_',':',';','"','¿','?','!','¡'};

class PilaLP{
	private:
		ListaP* L;
	public:
		PilaLP();
		bool Vacia();
		void Meter(int E);
		void Sacar(int& E);
		int cima();		string mostrar();		float EvalurarPostfija(string ExpPostfija);};
#endif
