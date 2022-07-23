#include "CamaroteInferior.h"

//Construtor default
CamaroteInferior::CamaroteInferior(float valor):vip(valor)
{
	localizacao = "default";
}
//Método de acessar a localizção
void CamaroteInferior::setLocalizacao(string localizacao){
	this->localizacao=localizacao;
}
//Método de imprimir a localização
void CamaroteInferior::imprime(void){
	cout<<"Localização>"<< localizacao <<endl;
}