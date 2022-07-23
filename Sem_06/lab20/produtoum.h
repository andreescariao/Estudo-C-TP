#include "produto.h"

#ifndef produtoum_H
#define produtoum_H

//classe derivada de produto
class produtoum : public produto
{
	//Limite de estoque
    float limite;
    //Desconto(Fornecido pelo lojista)
    float desconto;
    //Novo pre�o ( pre�o inicial + desconto )
    float novo;
public:		
	//Construtor default
	produtoum(float,int,string);
	//Atribui desconto
	void setDesconto(int);
	//M�todo que verifica se o estoque est� acima de certa quantidade
	void verifica(void); 
	//M�todo imprime
	void imprime(void);
	
};

#endif