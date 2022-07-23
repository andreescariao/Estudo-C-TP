#include "produtoum.h"

	produtoum::produtoum(float preco ,int estoque,string nome):produto(preco,estoque,nome){
		//Limite de estoque definido
		limite = 100;
		novo = 0;
	}

void produtoum::setDesconto(int desconto){
	this->desconto = desconto;
}		

void produtoum::verifica(void){
	//Verifica o estoque. Se o estoque esta acima do limite, aplica desconto.
	if(estoque > limite){
		novo = preco - (preco * (desconto/100));
	}else{
		novo = preco;
	}
}			

void produtoum::imprime(void){
	cout<<endl<<"Informa��es do produto "<<endl;
	cout<<"Nome: "<< nome << endl;
	cout<<"Estoque: "<< estoque << endl;
	cout<<"Pre�o: "<< novo << endl;
}