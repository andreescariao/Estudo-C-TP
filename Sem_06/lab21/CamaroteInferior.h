#include "vip.h"

#ifndef CamaroteInferior_h
#define CamaroteInferior_h

class CamaroteInferior : public vip
{
	string localizacao;
	public:	
    //Construtor dafault
	CamaroteInferior(float);
	//Método de acessar a localizção
	void setLocalizacao(string);
	//Método de imprimir a localização
	void imprime(void);
	
};

#endif