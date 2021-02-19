//---------------------------------------------------------------------------

#pragma hdrstop

#include "UPilalistamemoria.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

PilaLSM::PilaLSM(){
	L= new ListaSM();
}

bool PilaLSM::Vacia(){
	return L->vacia();
}

void PilaLSM::Meter(int E){
	L->inserta_ultimo(E);
	//cout<<"Simulador de memoria\n"<<L->mostrar()<<endl;
}

void PilaLSM::Sacar(int& E){
	E=L->recupera(L->fin());//It return a direccion memory if I don't use it.
	L->suprime(L->fin());
	//cout<<"Simulador de memoria\n"<<L->mostrar()<<endl;
}

int PilaLSM::cima(){	return L->recupera(L->fin());}	   /*string PilaLSM::mostrar(){
	string k = "||      ||\n";
	cout<<"Simulador de memoria\n"<<L->mostrar()<<endl;
	while (!Vacia()){
		int e;
		Sacar(e);
		k+="||  "+to_string(e)+"  ||\n";
	}
	k += "||      ||\n";
	k += "||||||||||\n";
	return "   PILA\n"+k;
}     */

string PilaLSM::listaL(){
	return L->mostrar();
}

