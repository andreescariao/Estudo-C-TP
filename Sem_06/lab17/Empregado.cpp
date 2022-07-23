#include "Empregado.h"

//Construtor default
Empregado::Empregado(){ 
	numeroSecao = 0;
	salarioBase = 0;
	IR = 0;
}
//Atribui numero de se��o
void Empregado::setNumeroSecao(int ns){	
		numeroSecao = ns;
	}
//Atribui salario base
void Empregado::setSalarioBase(int sb){	
		salarioBase = sb;
	}
//Atribui imposto de renda	
void Empregado::setIR(int ir){ 
		IR = ir;
	}
//Fun��o calcula salario liquido	
void Empregado::calcularSalario(void){	
		salarioBase = salarioBase - (salarioBase*IR/100);
	}
//Fun��o imprime dados do empregado(nome, cpf, numero de se��o e sal�rio)	
void Empregado::imprime(void){	
		cout <<"Numero de secao: " << numeroSecao << endl;
		cout <<"Salario liquido: " << salarioBase << endl;
	}
