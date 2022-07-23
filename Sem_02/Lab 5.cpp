// Aluno:Andr� K Escari�o Me / 119210793 / Unidade(02) / Laborat�rio(06) 
// Programa de Classe 'ContaBanc�ria' com as seguintes opera��es: Realizar Saque, Fazer Dep�sito, Consultar Saldo.

#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
using namespace std;

class ContaBancaria 	//Classe ContaBanc�ria
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
	
	
	ContaBancaria::ContaBancaria(){ 		//Fun��o pra inicializar 
		nome =" ", numero = 0, saldo =0; 
	}
	
	void ContaBancaria::setNome(string nome){    	//Fun��es com uso do 'set' para atribuir os dados
	this->	nome=nome;		   					//nome, n�mero e saldo
	}
	void ContaBancaria::setNumero(int numero){
	this->	numero=numero;
	}
	void ContaBancaria::setSaldo(float saldo){
	this->	saldo=saldo;
	}
	
	string ContaBancaria::getNome(){       		//Fun��es com uso do 'get' para retornar os dados
		return nome;														
	}
	int ContaBancaria::getNumero(){                   											
		return numero;														
	}
	float ContaBancaria::getSaldo(){
		return saldo;
	}
	
	
	
	
	
									
									
									
									
			//Opera��es
																				
																				
	void ContaBancaria::consultasaldo(){								//Fun��o consultar saldo. O atributo saldo encontra-se
		cout<< "Saldo do cliente " << nome << ": R$ " << saldo << endl;		//em privado e somente sofre altera��es ao depositar
	}																			//ou sacar
	
	
	
	void ContaBancaria::depositar(float deposito){	//Fun��o depositar. Apenas aumenta o saldo da conta
		if(deposito>=0){
			this->saldo = saldo + deposito;
		}else if(deposito<0){
			this->saldo = saldo+0;
			cout << "N�o � poss�vel depositar valores negativos! " << endl;
		}
	}
	
   	void ContaBancaria::sacar(float saque){	//Fun��o sacar. O saldo n�o pode ficar negativo
		
		if(saque>saldo){
			cout << "N�o ha saldo suficiente" << endl;
		}else if(saque == saldo){
		this->	saldo = 0;
		}else if(saque<saldo){
		this->	saldo = saldo - saque;
		}
	}
	





int main() 		//Fun��o principal
{
	setlocale(LC_ALL, "Portuguese");

	ContaBancaria conta1;	//Cria o objeto conta
																		
	string n;
	int nr;
	float deposito, saque;
	
	cout << "Digite o nome do titular: " << endl;		//Atribui o nome � conta
	cin >> n;
	conta1.setNome(n); 														
	
	cout << "Digite o numero da conta: " << endl;		//Atribui o numero da conta
	cin >> nr;
	conta1.setNumero(nr); 														
	
	
	
	
		//Menu principal com as opera��es
		
    int opcao, aux = 0;		
 	
 	while(aux != 1)
 	{
 		cout <<endl<< "Bem vindo ao banco c++! " 
 		    <<endl<<"Escolha uma das op��es abaixo: " << endl
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
				conta1.consultasaldo();	//Fun��o para consultar saldo
				break;
			case 2:
				cout<<"Depositar: "<<endl;
				
				cout << "Digite quanto deseja depositar: "<< endl;	//Fun��o para depositar
 	 	        cin>>deposito;
				conta1.depositar(deposito);
	
				break;
			case 3:
				cout<<"Sacar: "<<endl;
				
				cout <<"Digite quanto deseja sacar: "<<endl; //Fun��o para sacar
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