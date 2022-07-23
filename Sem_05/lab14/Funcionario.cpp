#include "Funcionario.h"

Funcionario::Funcionario(string nom, int dep, float sal)	
			:nome(nom), departamento(dep), salario(sal){}


Funcionario::Funcionario(){		//Contrutor default
    departamento = 0;
    salario = 0;
}



void Funcionario::setNome(string n){	//Registrar nome
    nome = n;
}
string Funcionario::getNome(){
    return nome;
}



void Funcionario::setSal(float s){		//Registrar salário
    salario = s;
}
float Funcionario::getSal(){
    return salario;
}



void Funcionario::setDataadmissao(int dia,int mes,int ano){	//Registrar data de admissao
	dataadmissao[0]=dia;
	dataadmissao[1]=mes;
	dataadmissao[2]=ano;
}
void Funcionario::imprimeDataadmissao(){	//Imprime data de admissao
    cout << dataadmissao[1] << dataadmissao[2] << dataadmissao[3] << endl;	
}



void Funcionario::setDep(int d){		//Registrar departamento
    departamento = d;
}
int Funcionario::getDep(){
    return departamento;
}


