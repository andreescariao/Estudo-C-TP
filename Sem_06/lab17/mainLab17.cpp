/*------------------------------------------------------
|       Aluno:Andr� K Escari�o Me ( 119210793 )        |
|		     Unidade(06) / Laborat�rio(17)             |
|				Compilador Falcon C++				   |
|			  										   |
|	   	Programa: Cont�m classes Pessoa e Empregado    |
|	   	com utiliza��o de heran�a					   |
|				   									   |		
|------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>
#include <string>

#include <iostream>
using namespace std;

#include "Pessoa.cpp"
#include "Empregado.cpp"


//Fun��o principal
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
	
	//Fun��o que atribui nome � classe empregado derivada de pessoa
	cout <<"Insira o nome: "<<endl;
	cin >>nom;
	empregado1.setNome(nom);	
	
	//Fun��o que atribui cpf � classe empregado derivada de pessoa
	cout <<"Insira o cpf: "<<endl;
	cin>>cpf;
	empregado1.setCPF(cpf);	
	
	//Atribui numero de se��o � classe Empregado
	cout<<"Insira o n�mero de se��o: "<<endl;
	cin>>n;
	empregado1.setNumeroSecao(n);	
	
	//Atribui Sal�rio Base a Empregado
	cout<<"Insira o sal�rio base: "<<endl;
	cin>>sal;
	empregado1.setSalarioBase(sal);	
	
	//Atribui Imposto de Renda a Empregado
	cout<<"Insira a 'porcentagem' do Imposto de Renda: "<<endl;
	cin>>imp;
	empregado1.setIR(imp);	
	
	
	//Calculando o salario liquido na fun��o
	empregado1.calcularSalario();
	
	//Fun��o que imprime os dados do funcion�rio
	cout <<endl<<endl<<"Dados do empregado - " << endl;
	empregado1.imprimeNomeCPF();
	empregado1.imprime();
	
	cin.get();
	cin.get();
	
	return 0;
}

