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
	//Fun��o para definir adicional em (porcentagem)
	void setAdicional(int ad); 
	//Fun��o que imprime endere�o e valor do imovel com adicional
	void impressao(void);	
};

#endif