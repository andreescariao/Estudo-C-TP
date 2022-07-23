#include "pessoa.h"

//Construtor default
Pessoa::Pessoa(void){	
	nome = " ";
	CPF =123123123;
}
//Atribui nome
void Pessoa::setNome(string nom){	
	nome = nom;
}
//Atribui cpf
void Pessoa::setCPF(long int cpf){	
	CPF = cpf;
}
//Função imprime nome e cpf
void Pessoa::imprimeNomeCPF(void){	
	cout <<"Nome: " << nome << endl;
	cout <<"CPF: " << CPF << endl;
}