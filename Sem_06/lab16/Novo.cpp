#include "Novo.h"

//Construtor(repassa para classe base endere�o e pre�o)
     Novo::Novo(string end,int pre){
  	endereco = end;
  	preco = pre;
}
//Fun��o para definir adicional em 'porcentagem'
void Novo::setAdicional(int ad){
	adicional = ad;
	preco = preco + (preco * adicional/100);
}
//Fun��o que imprime endere�o e valor do imovel com adicional
void Novo::impressao(void){
	cout <<endl<<"O adicional foi: " << adicional <<"%"<<endl;
	cout <<"Endere�o: " <<  endereco << endl;
	cout <<"Pre�o do imovel: " << preco << endl;
}
 //Inicializa a variavel static adicional com valor 0
int Novo::adicional = 0;