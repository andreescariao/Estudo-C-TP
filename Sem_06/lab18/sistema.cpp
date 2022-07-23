#include "sistema.h"

sistema::sistema(string nome, string CGC){
	
}

void checa(void){
	
	
	if(tipo == 1){  //Medio porte
		//desconto 70%
		imposto = imposto *70/100;
	}else if(tipo == 2){ //Pequena empresa
		//desconto 50%
		imposto = imposto *70/100;
		
	}
}

void sistema::imprime(){
	cout<<"Nome: "<<nome<<endl;
	cout<<"CGC: "<<CGC<<endl;
	cout<<"Valor a ser pago de impostos: "<<endl;
	cout<<"Cadastro SIMPLES (Programa do Governo de apoio aos microempresários): "<<endl;
}
