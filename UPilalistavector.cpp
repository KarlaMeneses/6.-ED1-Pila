//---------------------------------------------------------------------------

#pragma hdrstop

#include "UPilalistavector.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//added
#include <iostream>

PilaLV::PilaLV(){
	L=new ListaV();
}

bool PilaLV::Vacia(){
	return L->vacia();
}

void PilaLV::Meter(int E){
	L->inserta(L->primero(),E);
}

void PilaLV::Sacar(int& E){
	E=L->recupera(L->primero());//It return a direccion memory if I don't use it.
	L->suprime(L->primero());
}

int PilaLV::cima(){	return L->recupera(L->primero());}string PilaLV::mostrar(){
	string k = "||      ||\n";
	cout<<"Lista: ";
	L->mostrar();
	while (!Vacia()){
		int e;
		Sacar(e);
		k+="||  "+to_string(e)+"  ||\n";
	}
	k += "||      ||\n";
	k += "||||||||||\n";
	return "   PILA\n"+k;
}