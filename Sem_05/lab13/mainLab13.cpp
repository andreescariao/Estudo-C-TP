/* Aluno:André K Escarião Me / 119210793 / Unidade(05) / Laboratório(13)
Compilador Falcon C++
Programa Conta Poupança
*/

#include <iostream>
#include <locale>

using namespace std;
#include "Lab13.cpp"

int main()
{	
	//Cria os dois objetos poupador1 e poupador2
	ContaDePoupanca poupador1(2000);	//Valor de saldo da conta1 = 2000
	ContaDePoupanca poupador2(3000);	//Valor de saldo da conta2 = 3000
	
	//Modifica a taxa de juros (static) para 6%
	poupador1.ModificaTaxa(6); 
	
	//Calcula os rendimentos mensais e inprime os saldos
	cout <<"Calculando o rendimento..."<<endl;
	cout <<"Saldo do poupador 1: " << poupador1.RendimentoMensal() <<endl;
    cout <<"Saldo do poupador 2: " << poupador2.RendimentoMensal() <<endl;
	
	
	//Modifica a taxa de juros para 8%
	poupador1.ModificaTaxa(8); 
	
	//Calcula novamente os rendimentos mensais e inprime os saldos
	cout <<"Calculando o rendimento..."<<endl;
	cout <<"Saldo do poupador 1: " << poupador1.RendimentoMensal() <<endl;
    cout <<"Saldo do poupador 2: " << poupador2.RendimentoMensal() <<endl;
	
	return 0;
}