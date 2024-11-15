//---------------------------------------------------------------------------

#pragma hdrstop

#include "UPilapuntero.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

PilaP::PilaP(){
    tope = NULL;
}

bool PilaP::vacia(){
    return tope == NULL;
}

void PilaP::meter(int e){
    NodoP* aux = new NodoP;
    if(aux != NULL){
        aux->elemento = e;
        aux->sig = tope;
        tope = aux;
    }else
        cout << "ERROR NO HAY MEMORIA\n" << endl;
}

void PilaP::sacar(int& e){
    if(!vacia()){
        NodoP* x = tope;
        e = tope->elemento;
        tope = tope->sig;
        delete(x);
    }
}

int PilaP::cima(){
    if(!vacia()){
        return tope->elemento;
    }
}

string PilaP::to_str(){
	string r = "";
	PilaP* aux = new PilaP();
	while(!vacia()){
		int e;
		sacar(e);
		r += "| "+to_string(e)+" |\n";
		aux->meter(e);
	}
	while(!aux->vacia()){
		int e;
		aux->sacar(e);
		meter(e);
	}
    r += "+---+\n";
    return r;
}

int PilaP::SEGUNDOMAYOR(PilaP* P){
	int x=0;
	int mayor=0;
	PilaP* aux = new PilaP();
	while(!P->vacia()){
		int E;
		P->sacar(E);
		if (E>mayor) {
			mayor=E;
		}
		aux->meter(E);
	}
	while(!aux->vacia()){
		int E;
		aux->sacar(E);
		P->meter(E);
		if (E>x && E<mayor) x=E;
	}
	return x;
}
