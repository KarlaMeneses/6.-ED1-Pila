//---------------------------------------------------------------------------

#pragma hdrstop

#include "UListapuntero.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//added
//#include <iostream>
//#include <string>
//#include "string.h"
//using namespace std;

ListaP::ListaP(){//El constructor crea una instancia del objeto(un espacio de memoria!)
	longitud=0;
	PtrElementos=NULL; // No tiene direccion fisica asignada - Apunta a nulo
}                      //ptrElem----> ---//

direccionP ListaP::fin(){
	if (vacia()) {
		cout << "Error: La lista esta vacia\n";
	}
	else{
		direccionP x=PtrElementos; //x apunta a lo mismo que apunta ptrelem
		direccionP PtrFin; //cuando solo se declara apunta a null
		while (x!=NULL){
			PtrFin=x; //ptrfin apunta a lo que apunta x
			x=x->sig; //x apunta al siguiente
		}
		return PtrFin;
	}
}
direccionP ListaP::primero(){
	if (!vacia()) {
		return PtrElementos;   //apunta al primero ptrelem
	}
	else{
		cout << "Error: La lista esta vacia\n";
	}
}
direccionP ListaP::siguiente(direccionP dir){
	if (vacia()) {
		cout << "Error: La lista esta vacia\n";
	}
	else{
		if (dir==fin()) {
			cout << "Error de direccion el sigiente es null\n";
		}
		else{
			return dir->sig;//sig del nodo
		}
	}
}
direccionP ListaP::anterior(direccionP dir){
	if (vacia()) {
		cout << "Error: La lista esta vacia\n";
	}
	else{
		if (dir==primero()) {
			cout << "Error de direccion no existe el anterior\n";
		}
		else{
			direccionP x=PtrElementos;
			direccionP ant=NULL;
			while (x!=NULL){
				if (x==dir) {
					return ant;
				}
				ant=x;
				x=x->sig;
			}
			return NULL;
		}
	}
}

bool ListaP::vacia(){
	return longitud==0;
}

int ListaP::recupera(direccionP dir){
	if (vacia()) {
		cout<<mostrar()<<endl;
		cout << "Error: La lista esta vaciaaaaaaaaa\n";
		return -1;
	}
	else{
		return dir->elemento;
	}
}
int ListaP::longuitud (){
	return longitud;
}
void ListaP::inserta(direccionP dir,int element){
	NodoL* x= new NodoL;//creacion de un nuevo nodo es distinto a null
	if (x!=NULL) {
		x->elemento=element;
		x->sig=NULL;
		if (vacia()) {
			PtrElementos=x;
			longitud=1;
		}
		else{
			longitud++;
			if (dir==primero()) {
				x->sig=dir;
				PtrElementos=x;//variable apunta al primer elemento
			}
			else{
				direccionP ant=anterior(dir); //nodo anterior del ingresado
				ant->sig=x;
				x->sig=dir;
			}
		}
	}
	else{
		cout << "Error: No exite espacio en la memoria\n";
	}

}
void ListaP::inserta_primero(int element){
	NodoL* x=new NodoL; //creacion del nodo que no apunta a null
	if (x!=NULL) {
        cout<<"elem: "<<element<<endl;
		x->elemento=element;
		x->sig=PtrElementos;
		longitud++;
		PtrElementos=x;
	}
	else{
		cout << "Error: No existe espacio en la memoria\n";
	}
}
void ListaP::inserta_ultimo(int element){
	NodoL* x= new NodoL;
	if (x!=NULL) {
		x->elemento=element;
		x->sig=NULL;
		if (longitud==0) {//longitud==0 al principio
			PtrElementos=x;
		}
		else{
			fin()->sig=x;
		}
		longitud++;
	}
	else{
		cout << "Error: No exite espacio en la memoria\n";
    }
}
void ListaP::suprime(direccionP dir){
	if (longitud==0) {
		cout << "Error: La lista esta vacia\n";
		return;//added recently
	}
	if (dir==PtrElementos) { //primer nodo
		direccionP x=PtrElementos;
		PtrElementos=PtrElementos->sig;
		delete(x);//Elimina la memoria del nodo
	}
	else{
		direccionP ant=anterior(dir);
		ant->sig=dir->sig;//dir->sig envia lo que realmente tiene.
		delete(dir);
	}
	longitud--;
}

void ListaP::modifica(direccionP dir,int element){	if (vacia()) {		cout << "Error: La lista esta vacia\n";
	}	else{		dir->elemento=element;//modificar elemento que tiene por otro
	}}string ListaP::mostrar(){
	string s = "[";
	direccionP aux = PtrElementos;
	while (aux != NULL) {
		int el = aux->elemento;
		//string str = to_string(el);
		s += to_string(el);
		aux = aux->sig;
		if (aux != NULL)
			s += ",";
	}
	return s + "]";
}


