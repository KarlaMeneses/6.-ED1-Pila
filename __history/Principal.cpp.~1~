#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
//added
#include <iostream>
#include "UPilalistapuntero.h"
#include "UPilavector.h"
#include "UPilamemoria.h"
#include "UPilalistavector.h"
#include "UPilalistamemoria.h"

#include "UListamemoria.h"

using namespace std;

//o Implementación con lista memoria/puntero/vector
//o Implementación con Vectores
//o Implementación con Simulación de Memoria/Punterosvoid menu1();
void mostrar(PilaLSM* p);

int _tmain(int argc, _TCHAR* argv[])
{
	//{PILA LISTA PUNTERO}
   /*
	PilaLP* p=new PilaLP();
	int x=p->EvalurarPostfija("1234+");
   /*	p->Meter(30);
	p->Meter(50);
	p->Meter(10);
	p->Meter(80);
	p->Meter(75);
	p->Meter(62);
	cout<<"Cima: "<<p->cima()<<endl;
	int e;
	p->Sacar(e);
	cout<<"Sacar: "<<e<<endl;
	cout<<p->mostrar()<<endl;//al mostrar la pila se borra la lista
	*/

	/*
	{PILA LISTA VECTOR}

	PilaLV* p=new PilaLV();
	p->Meter(30);
	p->Meter(50);
	p->Meter(10);
	p->Meter(80);
	p->Meter(75);
	p->Meter(62);
	cout<<"Cima: "<<p->cima()<<endl;
	cout<<p->mostrar()<<endl;//al mostrar la pila se borra la lista
	*/


	//{PILA LISTA CON SIMULACION DE MEMORIA}
   /*
	PilaLSM* p=new PilaLSM();
	p->Meter(30);
	p->Meter(50);
	p->Meter(10);
	p->Meter(80);
	p->Meter(75);
	cout<<"Cima: "<<p->cima()<<endl;
	cout<<p->mostrar()<<endl;//al mostrar la pila se borra la lista
	 */

	/*
	{PILA VECTOR}

	PilaV* p=new PilaV();
	p->Meter(90);
	p->Meter(50);
	p->Meter(10);
	p->Meter(80);
	p->Meter(75);
	cout<<"Cima: "<<p->cima()<<endl;
	cout<<p->mostrar()<<endl;
	*/

	/*
	{PILA SIMULACION DE MEMORIA}

	PilaSM* p=new PilaSM();
	p->Meter(90);
	p->Meter(50);
	p->Meter(10);
	p->Meter(80);
	p->Meter(75);
	cout<<"Cima: "<<p->cima()<<endl;
	cout<<p->mostrar()<<endl;
	*/
	menu1();
	system("pause");
	return 0;
}

void menu1(){
	PilaLSM* p;
	int opcion;
	do {
		cout << "1.CREAR PILA\n";
		cout << "2.PONER PILA\n";
		cout << "3.SACAR DE LA PILA\n";
		cout << "4.MOSTRAR PILA\n";
		cout << "Opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1: {
				p=new PilaLSM();
			} break;
		case 2: {
				int valor;
				cout << "Ingrese un valor para la pila: ";
				cin >> valor;
				p->Meter(valor);
			} break;
		case 3: {
				int e;
				p->Sacar(e);
				cout<<"Sacar: "<<e<<endl;
			} break;
		case 4: {
				cout<<"cima: "<<p->cima()<<endl;
				cout<<p->listaL()<<endl;
				mostrar(p);
				cout<<p->listaL()<<endl;
			} break;
		}
		system("pause");
		system("cls");
	}
	while (opcion == 1|| opcion == 2|| opcion == 3 ||opcion == 4);
}

void mostrar(PilaLSM* p){
	string k = "||      ||\n";
	while (!p->Vacia()){
		int e;
		p->Sacar(e);
		k+="||  "+to_string(e)+"  ||\n";
	}
	k += "||      ||\n";
	k += "||||||||||\n";
	cout<<"   PILA\n"+k<<endl;
}

