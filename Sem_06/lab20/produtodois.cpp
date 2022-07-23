#include "produtodois.h"

	produtodois::produtodois(float preco ,int estoque,string nome):produto(preco,estoque,nome){
		//Limite de estoque definido
		limite = 100;
		novo = 0;
	}

void produtodois::setDesconto(int desconto){
	this->desconto = desconto;
}		

void produtodois::verifica(void){
	//Verifica o estoque. Se o estoque esta acima do limite, aplica desconto.
	if(estoque > limite){
		novo = preco - (preco * (desconto/100));
	}else{
		novo = preco;
	}
}			

void produtodois::imprime(void){
	cout<<endl<<"Informações do produto "<<endl;
	cout<<"Nome: "<< nome << endl;
	cout<<"Estoque: "<< estoque << endl;
	cout<<"Preço: "<< novo << endl;
}