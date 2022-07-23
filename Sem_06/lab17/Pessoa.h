#ifndef PESSOA_H
#define PESSOA_H

class Pessoa
{
	string nome;
    long int CPF;
public:
	Pessoa(void);	//Construtor default
    void setNome(string);
	void setCPF(long int);
	void imprimeNomeCPF(void);	//Função imprime nome e cpf 
};

#endif