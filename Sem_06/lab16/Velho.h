#include "Imovel.h"
#ifndef Velho_H
#define Velho_H

class Velho : public Imovel
{	
	//Valor desconto (fixo)
	static int desconto;	
public:
	//Construtor(repassa para classe base os  novos valores)
    Velho(string,int);	
	//Fun��o para definir desconto em (porcentagem)
	void setDesconto(int de); 
	//Fun��o que imprime endere�o e valor do imovel com adicional
	void impressao(void);	
};

#endif