#ifndef EMPRESA_H_INCLUDED
#define EMPRESA_H_INCLUDED

#include "Funcionario.cpp"


class Empresa{
	
    Funcionario *Funcionarios;
    string nome;	//atributo nome	
    double cnpj;	//atributo cnpj
    unsigned num;
    
public:
	//Construtor default
    Empresa(int,string,double); 
    //Adiciona funcionario
    void addFunc(Funcionario);
    //Função para 10% aumento de salário a todos os func. de um departamento
    void aumento(int);
    //Imprime os dados do funcionario
    void imprimedados();
    //Destrutor
	~Empresa(); 
};

#endif 
