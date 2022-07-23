#include "Pessoa.h"

#ifndef EMPREGADO_H
#define EMPREGADO_H

class Empregado : public Pessoa
{
	int numeroSecao;
	int salarioBase; //Vencimento base
	int IR;	 //Percentagem retida para o imposto de renda
public:
	Empregado();
	void setNumeroSecao(int);
	void setSalarioBase(int);
	void setIR(int);
	//Calcula Sal�rio l�quido ( sal�rio base menos o desconto do Imposto de Renda )
	void calcularSalario(void); 
	//Imprime Nome, CPF, numeroSecao e o seu respectivo sal�rio l�quido
	void imprime(void);
};

#endif