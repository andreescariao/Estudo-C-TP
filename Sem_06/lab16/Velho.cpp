#include "Velho.h"

//Construtor(repassa para classe base endere�o e pre�o)
     Velho::Velho(string end,int pre){
  	endereco = end;
  	preco = pre;
}
//Fun��o para definir desconto em 'porcentagem'
void Velho::setDesconto(int de){
	desconto = de;
	preco = preco - (preco * desconto/100);
}
//Fun��o que imprime endere�o e valor do imovel com desconto
void Velho::impressao(void){
	cout <<endl<<"O desconto foi: " << desconto <<"%"<<endl;
	cout <<"Endere�o: " <<  endereco << endl;
	cout <<"Pre�o do imovel: " << preco << endl;
}
 //Inicializa a variavel static desconto com valor 0
int Velho::desconto = 0;