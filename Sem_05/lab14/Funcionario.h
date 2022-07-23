#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
using namespace std;

class Funcionario{

	string nome;	//nome
	float salario;	//salario
	int dataadmissao[2]; //Vetor para data de admissao
	int departamento;	//departamento
	
	
	
public:
	Funcionario(string, int, float);
	Funcionario();
	
	void setNome(string);
	string getNome();
	
	void setSal(float);
	float getSal();
	
	void setDataadmissao(int,int,int);
	void imprimeDataadmissao();

	void setDep(int);
	int getDep();

};

#endif 
