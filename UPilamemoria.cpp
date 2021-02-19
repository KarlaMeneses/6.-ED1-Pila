//---------------------------------------------------------------------------

#pragma hdrstop

#include "UPilamemoria.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

PilaSM::PilaSM(){
	mem=new CSMemoria();
	tope=NULO;
}

bool PilaSM::Vacia(){
	return tope==NULO;
}

void PilaSM::Meter(int E){
	int aux=mem->new_espacio(datoP);//nuevo nodoP
	if (aux!=NULO) {
		mem->poner_dato(aux,elementoP,E);
		mem->poner_dato(aux,sigP,tope);
		tope=aux;
	}
	else{
		cout << "ERROR NO HAY MEMORIA\n" << endl;
	}
}

void PilaSM::Sacar(int& E){
	if (!Vacia()) {
		int x=tope;
		E=mem->obtener_dato(tope,elementoP);
		tope=mem->obtener_dato(tope,sigP);
		mem->delete_espacio(x);
	}
}

int PilaSM::cima(){	if (!Vacia()) {		return mem->obtener_dato(tope,elementoP);
	}}string PilaSM::mostrar(){
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
