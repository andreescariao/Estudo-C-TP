#include "ingresso.h"

ingresso::ingresso(float valor){
	this->valor = valor;
}

//Método que imprime valor
void ingresso::imprimir(){
	cout<<"Valor do ingresso: "<< valor <<endl;
}