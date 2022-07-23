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
    //Novo pre�o ( pre�o inicial + desconto )
    float novo;
public:		
	//Construtor default
	produtodois(float,int,string);
	//Atribui desconto
	void setDesconto(int);
	//M�todo que verifica se o estoque est� acima de certa quantidade
	void verifica(void); 
	//M�todo imprime
	void imprime(void);
	
};

#endif