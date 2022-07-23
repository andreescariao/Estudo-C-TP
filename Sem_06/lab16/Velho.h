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
	//Função para definir desconto em (porcentagem)
	void setDesconto(int de); 
	//Função que imprime endereço e valor do imovel com adicional
	void impressao(void);	
};

#endif