#include "Lab13.h"

ContaDePoupanca::ContaDePoupanca(float s){
	Saldo = s;
}

float ContaDePoupanca::RendimentoMensal(){
	Saldo = Saldo + (Saldo*Taxa/12);	//Calculo do Rendimento
    return Saldo;
	
}

void ContaDePoupanca::ModificaTaxa(float t){
	Taxa = t;
}

float ContaDePoupanca::Taxa = 0; //Inicializa a variavel static com valor 0