/*------------------------------------------------------
|       Aluno:André K Escarião Me ( 119210793 )        |
|		     Unidade(06) / Laboratório(17)             |
|				Compilador Falcon C++				   |
|			  										   |
|	   	Programa: Contém classes Pessoa e Empregado    |
|	   	com utilização de herança					   |
|				   									   |		
|------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>
#include <string>

#include <iostream>
using namespace std;

#include "Pessoa.cpp"
#include "Empregado.cpp"


//Função principal
int main()
{
	setlocale(LC_ALL, "");
	
	string nom;
	long int cpf;
    int n, sal,imp;

	//Construindo objeto empregado
	Empregado empregado1;	

	cout <<"---------------------------------------------------------"<<endl;
	cout <<"MENU PRINCIPAL"<<endl;
	cout <<"---------------------------------------------------------"<<endl;
	
	//Função que atribui nome à classe empregado derivada de pessoa
	cout <<"Insira o nome: "<<endl;
	cin >>nom;
	empregado1.setNome(nom);	
	
	//Função que atribui cpf à classe empregado derivada de pessoa
	cout <<"Insira o cpf: "<<endl;
	cin>>cpf;
	empregado1.setCPF(cpf);	
	
	//Atribui numero de seção à classe Empregado
	cout<<"Insira o número de seção: "<<endl;
	cin>>n;
	empregado1.setNumeroSecao(n);	
	
	//Atribui Salário Base a Empregado
	cout<<"Insira o salário base: "<<endl;
	cin>>sal;
	empregado1.setSalarioBase(sal);	
	
	//Atribui Imposto de Renda a Empregado
	cout<<"Insira a 'porcentagem' do Imposto de Renda: "<<endl;
	cin>>imp;
	empregado1.setIR(imp);	
	
	
	//Calculando o salario liquido na função
	empregado1.calcularSalario();
	
	//Função que imprime os dados do funcionário
	cout <<endl<<endl<<"Dados do empregado - " << endl;
	empregado1.imprimeNomeCPF();
	empregado1.imprime();
	
	cin.get();
	cin.get();
	
	return 0;
}

