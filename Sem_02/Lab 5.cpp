// Aluno:André K Escarião Me / 119210793 / Unidade(02) / Laboratório(06) 
// Programa de Classe 'ContaBancária' com as seguintes operações: Realizar Saque, Fazer Depósito, Consultar Saldo.

#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
using namespace std;

class ContaBancaria 	//Classe ContaBancária
{
	string nome;
    int numero;
	float saldo;
	    			
public:
	
//	float deposito;
//	float saque;
	
	ContaBancaria();
	void setNome(string);
	void setNumero(int);
	void setSaldo(float);
	string getNome();
	int getNumero();
	float getSaldo();
	void consultasaldo();	
    void depositar(float);
    void sacar(float);

};	
	
	
	ContaBancaria::ContaBancaria(){ 		//Função pra inicializar 
		nome =" ", numero = 0, saldo =0; 
	}
	
	void ContaBancaria::setNome(string nome){    	//Funções com uso do 'set' para atribuir os dados
	this->	nome=nome;		   					//nome, número e saldo
	}
	void ContaBancaria::setNumero(int numero){
	this->	numero=numero;
	}
	void ContaBancaria::setSaldo(float saldo){
	this->	saldo=saldo;
	}
	
	string ContaBancaria::getNome(){       		//Funções com uso do 'get' para retornar os dados
		return nome;														
	}
	int ContaBancaria::getNumero(){                   											
		return numero;														
	}
	float ContaBancaria::getSaldo(){
		return saldo;
	}
	
	
	
	
	
									
									
									
									
			//Operações
																				
																				
	void ContaBancaria::consultasaldo(){								//Função consultar saldo. O atributo saldo encontra-se
		cout<< "Saldo do cliente " << nome << ": R$ " << saldo << endl;		//em privado e somente sofre alterações ao depositar
	}																			//ou sacar
	
	
	
	void ContaBancaria::depositar(float deposito){	//Função depositar. Apenas aumenta o saldo da conta
		if(deposito>=0){
			this->saldo = saldo + deposito;
		}else if(deposito<0){
			this->saldo = saldo+0;
			cout << "Não é possível depositar valores negativos! " << endl;
		}
	}
	
   	void ContaBancaria::sacar(float saque){	//Função sacar. O saldo não pode ficar negativo
		
		if(saque>saldo){
			cout << "Não ha saldo suficiente" << endl;
		}else if(saque == saldo){
		this->	saldo = 0;
		}else if(saque<saldo){
		this->	saldo = saldo - saque;
		}
	}
	





int main() 		//Função principal
{
	setlocale(LC_ALL, "Portuguese");

	ContaBancaria conta1;	//Cria o objeto conta
																		
	string n;
	int nr;
	float deposito, saque;
	
	cout << "Digite o nome do titular: " << endl;		//Atribui o nome à conta
	cin >> n;
	conta1.setNome(n); 														
	
	cout << "Digite o numero da conta: " << endl;		//Atribui o numero da conta
	cin >> nr;
	conta1.setNumero(nr); 														
	
	
	
	
		//Menu principal com as operações
		
    int opcao, aux = 0;		
 	
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
				conta1.consultasaldo();	//Função para consultar saldo
				break;
			case 2:
				cout<<"Depositar: "<<endl;
				
				cout << "Digite quanto deseja depositar: "<< endl;	//Função para depositar
 	 	        cin>>deposito;
				conta1.depositar(deposito);
	
				break;
			case 3:
				cout<<"Sacar: "<<endl;
				
				cout <<"Digite quanto deseja sacar: "<<endl; //Função para sacar
				cin >> saque;
				conta1.sacar(saque);
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