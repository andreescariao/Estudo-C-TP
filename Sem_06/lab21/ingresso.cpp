#include "ingresso.h"

ingresso::ingresso(float valor){
	this->valor = valor;
}

//M�todo que imprime valor
void ingresso::imprimir(){
	cout<<"Valor do ingresso: "<< valor <<endl;
}