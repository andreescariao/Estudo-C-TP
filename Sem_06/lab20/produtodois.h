#include "produto.h"

#ifndef PRODUTODOIS_H
#define PRODUTODOIS_H

//classe derivada de produto
class produtodois : public produto
{
	//Limite de estoque
    float limite;
    //Desconto(Fornecido pelo lojista)
    float desconto;
    //Novo preço ( preço inicial + desconto )
    float novo;
public:		
	//Construtor default
	produtodois(float,int,string);
	//Atribui desconto
	void setDesconto(int);
	//Método que verifica se o estoque está acima de certa quantidade
	void verifica(void); 
	//Método imprime
	void imprime(void);
	
};

#endif