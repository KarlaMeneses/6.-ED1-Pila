//---------------------------------------------------------------------------

#pragma hdrstop

#include "UPilalistapuntero.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

PilaLP::PilaLP(){
	L= new ListaP(); //creando la lista puntero
}

bool PilaLP::Vacia(){
	return L->vacia();
}

void PilaLP::Meter(int E){
	//cout<<"asdasd: "<<E<<endl;
	L->inserta_primero(E);  //L->inserta(L->primero(),E);
}

void PilaLP::Sacar(int& E){//Why it must use a reference ????
	E=L->recupera(L->primero());//It return a direccion memory if I don't use it.
	L->suprime(L->primero());
}

int PilaLP::cima(){
	int a=L->recupera(L->primero());
	return a;
}


float Evalua(int Op1,char sim_operacion,int Op2){
	if (sim_operacion=='*') return Op1*Op2;
	if (sim_operacion=='/') return Op1/Op2;
	if (sim_operacion=='+') return Op1+Op2;
	if (sim_operacion=='-') return Op1-Op2;
}

float PilaLP::EvalurarPostfija(string ExpPostfija){
	int Op2;  int Op1;
	for (int i = 0; i < ExpPostfija.length(); i++) {
		if (isdigit(ExpPostfija[i])) {
			//Meter(ExpPostfija[i]);
			char df='9';
			int qw=df;
			Meter(qw);
			//cout<<"fffffff  "<<ExpPostfija[i]<<endl;
			cout<<L->mostrar()<<endl;
		}   /*
		else{
			Sacar(Op2);
			Sacar(Op1);
			char sim_operacion=ExpPostfija[i];
			float z=Evalua(Op1,sim_operacion,Op2);
			Meter(z);
			cout<<sim_operacion<<endl;
			cout<<z<<endl;
		}  */
	}
	return 0;
}

string PilaLP::mostrar(){
	string k = "||      ||\n";
	cout<<"Lista: "<<L->mostrar()<<endl;
	while (!Vacia()){
		int e;
		Sacar(e);
		k+="||  "+to_string(e)+"  ||\n";
	}
	k += "||      ||\n";
	k += "||||||||||\n";
	return "   PILA\n"+k;
}

