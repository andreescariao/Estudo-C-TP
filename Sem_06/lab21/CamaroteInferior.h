#include "vip.h"

#ifndef CamaroteInferior_h
#define CamaroteInferior_h

class CamaroteInferior : public vip
{
	string localizacao;
	public:	
    //Construtor dafault
	CamaroteInferior(float);
	//M�todo de acessar a localiz��o
	void setLocalizacao(string);
	//M�todo de imprimir a localiza��o
	void imprime(void);
	
};

#endif