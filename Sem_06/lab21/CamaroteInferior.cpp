#include "CamaroteInferior.h"

//Construtor default
CamaroteInferior::CamaroteInferior(float valor):vip(valor)
{
	localizacao = "default";
}
//M�todo de acessar a localiz��o
void CamaroteInferior::setLocalizacao(string localizacao){
	this->localizacao=localizacao;
}
//M�todo de imprimir a localiza��o
void CamaroteInferior::imprime(void){
	cout<<"Localiza��o>"<< localizacao <<endl;
}