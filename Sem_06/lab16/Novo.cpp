#include "Novo.h"

//Construtor(repassa para classe base endereço e preço)
     Novo::Novo(string end,int pre){
  	endereco = end;
  	preco = pre;
}
//Função para definir adicional em 'porcentagem'
void Novo::setAdicional(int ad){
	adicional = ad;
	preco = preco + (preco * adicional/100);
}
//Função que imprime endereço e valor do imovel com adicional
void Novo::impressao(void){
	cout <<endl<<"O adicional foi: " << adicional <<"%"<<endl;
	cout <<"Endereço: " <<  endereco << endl;
	cout <<"Preço do imovel: " << preco << endl;
}
 //Inicializa a variavel static adicional com valor 0
int Novo::adicional = 0;