#include "Imovel.h"
#ifndef Novo_H
#define Novo_H

class Novo : public Imovel
{	
	//Valor adicional (fixo)
	static int adicional;	
public:
	//Construtor(repassa para classe base os  novos valores)
    Novo(string,int);	
	//Função para definir adicional em (porcentagem)
	void setAdicional(int ad); 
	//Função que imprime endereço e valor do imovel com adicional
	void impressao(void);	
};

#endif