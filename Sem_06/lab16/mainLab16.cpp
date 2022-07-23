/*------------------------------------------------------
|       Aluno:Andr� K Escari�o Me ( 119210793 )        |
|		     Unidade(06) / Laborat�rio(16)             |
|				Compilador Falcon C++				   |
|			  										   |
|	   	Programa: Cont�m classes Novo e Velho que her- |
|	   	dam os atributos da classe Imovel e determina  |
|		um desconto ou adicional	   	    		   |		
|------------------------------------------------------*/

#include <locale>

#include <iostream>
using namespace std;

#include "Imovel.cpp"
#include "Novo.cpp"
#include "Velho.cpp"

//Fun��o principal
int main()
{
	
	setlocale(LC_ALL,"");
	
	string end;
	int n, pre,ad,de;
	
	cout <<"------------------------------------------------"<<endl;
	cout << "MENU PRINCIPAL"<<endl;
	cout <<"------------------------------------------------"<<endl;
	
	cout<<"Digite o Endere�o: "<<endl;
		getline(cin, end);
	cout<<"Digite o Pre�o: "<<endl;
		cin >> pre;	
	cout <<"Digite 1 para Novo ou 2 para Velho: "<<endl;
		cin >> n;
	
	if(n == 1){
		cout << endl <<"Novo... "<<endl;
		
		//Cria um imovel para repassar os valores (Adicional)
		Novo novo(end,pre);
		
		//Acrescenta um adicional ao pre�o
		cout<<"Digite o valor do adicional: "<<endl;
		cin >> ad;
		novo.setAdicional(ad);

		//Imprime os valores
		novo.impressao();
		
	}else if(n == 2){
		cout << endl <<"Velho... "<<endl;
		
		//Cria um imovel para repassar os valores (Desconto)
		Velho velho(end,pre);
		
		//Desconto no pre�o
		cout<<"Digite o valor do desconto: "<<endl;
		cin >> de;
		velho.setDesconto(de);

		//Imprime os valores
		velho.impressao();
		
	}else{
		cout<<"N�o existe essa op��o..."<<endl;
	}
	
	return 0;
}

