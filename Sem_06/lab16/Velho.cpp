#include "Velho.h"

//Construtor(repassa para classe base endereço e preço)
     Velho::Velho(string end,int pre){
  	endereco = end;
  	preco = pre;
}
//Função para definir desconto em 'porcentagem'
void Velho::setDesconto(int de){
	desconto = de;
	preco = preco - (preco * desconto/100);
}
//Função que imprime endereço e valor do imovel com desconto
void Velho::impressao(void){
	cout <<endl<<"O desconto foi: " << desconto <<"%"<<endl;
	cout <<"Endereço: " <<  endereco << endl;
	cout <<"Preço do imovel: " << preco << endl;
}
 //Inicializa a variavel static desconto com valor 0
int Velho::desconto = 0;