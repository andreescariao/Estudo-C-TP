#ifndef USUARIO_H
#define USUARIO_H

class usuario
{
	//Atributos em private
	string nome;
	string email;
	int idade;
public:
	//Contrutor que inicializa usuario
	usuario(string n, string em, int id);
	//Função para retornar nome
	string getNome(void);
	//Função para retornar email
	string getEmail(void);
	//Função para retornar idade
	int getIdade(void);
};

#endif
