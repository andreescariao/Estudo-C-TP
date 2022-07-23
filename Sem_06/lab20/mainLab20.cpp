/*------------------------------------------------------
|       Aluno:André K Escarião Me ( 119210793 )        |
|		     Unidade(06) / Laboratório(20)             |
|				Compilador Falcon C++				   |
|			  										   |
|	   	Programa: 			       |
|				   									   |		
|------------------------------------------------------*/

#include <locale>
#include <iostream>
using namespace std;

//classe base
#include "produto.cpp"	
//classe derivada
#include "produtoum.cpp"	
//classe derivada2
#include "produtodois.cpp"

//Função principal
int main()
{
	setlocale(LC_ALL, "");
	
	float pre1,pre2;
	int est1,est2;
	string nom1,nom2;
	float des1,des2;
	
	//OBS:limite definido no construtor(100 unidades)
	cout <<"Digite o preço do produto 1: "<<endl;
	cin>>pre1;
	cout <<"Digite o nome do produto 1: "<<endl;
	cin>>nom1;
	cout <<"Digite a quantidade em estoque do produto 1: "<<endl;
	cin>>est1;
	cout <<"Forneca o desconto do produto 1: "<<endl<<endl;
	cin>>des1;
	
	produtoum p1(pre1,est1,nom1);
	//Aplica desconto(fornecido pelo lojista)
	p1.setDesconto(des1);
	//Verifica se estoque está acima do limite e aplica desconto
	p1.verifica();
	//Imprime os dados do produto
	p1.imprime();
	
	cout <<"----------------------------------------"<<endl;
	
	
	//OBS:limite (200 unidades)
	cout <<endl<<"Digite o preço do produto 2: "<<endl;
	cin>>pre2;
	cout <<"Digite o nome do produto 2: "<<endl;
	cin>>nom2;
	cout <<"Digite a quantidade em estoque do produto 2: "<<endl;
	cin>>est2;
	cout <<"Forneca o desconto do produto 2: "<<endl<<endl;
	cin>>des2;
	
		produtodois p2(pre2,est2,nom2);
	//Aplica desconto(fornecido pelo lojista)
	p2.setDesconto(des2);
	//Verifica se estoque está acima do limite e aplica desconto
	p2.verifica();
	//Imprime os dados do produto
	p2.imprime();
	
	
	
	
	return 0;
}

