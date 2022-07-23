// Aluno:André K Escarião Me / 119210793 / Unidade(02) / Laboratório(06) 
// Programa de Classe 'ContaBancária' com as seguintes operações: Realizar Saque, Fazer Depósito, Consultar Saldo.

#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
using namespace std;

class ContaBancaria 															//Classe ContaBancária
{
	string nome;
    int numero;
	float saldo;
	    			
public:
	
	float deposito;
	float saque;
	
	ContaBancaria(){ 															//Função pra inicializar 
		nome =" ", numero = 0, saldo =0, deposito =0, saque =0; 
	}
	
	void setNome(string nome){                   								//Funções com uso do 'set' para atribuir os dados
		this->nome=nome;														//nome, número e saldo
	}
	void setNumero(int numero){
		this->numero=numero;
	}
	void setSaldo(float saldo){
		this->saldo=saldo;
	}
	
	string getNome(){                   										//Funções com uso do 'get' para retornar os dados
		return this->nome;														
	}
	int getNumero(){                   											
		return this->numero;														
	}
	float getSaldo(){
		return this->saldo;
	}
	
	
	
	
	
																				//Operações
																				
																				
	void consultasaldo(){														//Função consultar saldo. O atributo saldo encontra-se
		cout<< "Saldo do cliente " << nome << ": R$ " << saldo << endl;			//em privado e somente sofre alterações ao depositar
	}																			//ou sacar
	
	
	
	void depositar(){															//Função depositar. Apenas aumenta o saldo da conta
		if(deposito>=0){
		saldo = saldo + deposito;
		}else if(deposito<0){
			saldo = saldo+0;
			cout << "Não é possível depositar valores negativos! " << endl;
		}
	}
	
	void sacar(){																//Função sacar. O saldo não pode ficar negativo
		cin >> saque;
		
		if(saque>saldo){
			cout << "Não ha saldo suficiente" << endl;
		}else if(saque == saldo){
			saldo = 0;
		}else if(saque<saldo){
			saldo = saldo - saque;
		}
	}
	
	
};




int main() 																		//Função principal
{

	ContaBancaria *conta1 = new ContaBancaria(); 								//Cria o objeto conta
		
	setlocale(LC_ALL, "Portuguese");
																				
	string n;
	int nr;
	float deposito;
	
	cout << "Digite o nome do titular: " << endl;								//Atribui o nome à conta
	cin >> n;
	conta1->setNome(n); 														
	
	cout << "Digite o numero da conta: " << endl;								//Atribui o numero da conta
	cin >> nr;
	conta1->setNumero(nr); 														
	
	
	
	
	
	 	int opcao, aux = 0;														//Menu principal com as operações
 	
 	while(aux != 1)
 	{
 		cout <<endl<< "Bem vindo ao banco c++! " 
 		    <<endl<<"Escolha uma das opções abaixo: " << endl
			<< "\n1- Consultar Saldo"
			<< "\n2- Depositar"
			<< "\n3- Sacar"
			<< "\n0- Finalizar" << endl;
		cin >> opcao;
		
		system("cls");
		switch(opcao)
		{
			case 1:
				cout<<"Consultar saldo:"<<endl;
				conta1->consultasaldo();										//Função para consultar saldo
				break;
			case 2:
				cout<<"Depositar: "<<endl;
				
				cout << "Digite quanto deseja depositar: "<< endl;				//Função para depositar
 	 	        cin>>deposito;
				conta1->deposito = deposito;
				conta1->depositar();
	
				break;
			case 3:
				cout<<"Sacar: "<<endl;
				
				cout <<"Digite quanto deseja sacar: "<<endl;					//Função para sacar
				conta1->sacar();
				break;
			case 0:
				cout<<"Finalizando consulta"<<endl;
				aux = 1;
				break;
			default:
				break;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	

	return 0;
}