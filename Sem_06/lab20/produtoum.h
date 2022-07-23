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
    //Novo preço ( preço inicial + desconto )
    float novo;
public:		
	//Construtor default
	produtoum(float,int,string);
	//Atribui desconto
	void setDesconto(int);
	//Método que verifica se o estoque está acima de certa quantidade
	void verifica(void); 
	//Método imprime
	void imprime(void);
	
};

#endif