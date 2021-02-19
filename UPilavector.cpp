//---------------------------------------------------------------------------

#pragma hdrstop

#include "UPilavector.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
PilaV::PilaV(){
	elementos=new int[MAXV];
	tope=0;
}

bool PilaV::Vacia(){
	return tope==0;
}

void PilaV::Meter(int E){
	if (tope<MAXV) {
		elementos[tope]=E;
		tope++;
	}
}

void PilaV::Sacar(int& E){
	if (!Vacia()) {
		E=elementos[tope-1];
		tope--;
	}
}

int PilaV::cima(){	if (!Vacia()) {		return elementos[tope-1];
	}}string PilaV::mostrar(){
	cout<<tope<<endl;
	string k = "||      ||\n";
	while (!Vacia()){
		int e;
		Sacar(e);
		k+="||  "+to_string(e)+"  ||\n";
	}
	k += "||      ||\n";
	k += "||||||||||\n";
	return "   PILA\n"+k;
}
