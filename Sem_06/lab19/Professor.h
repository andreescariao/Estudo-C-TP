#include "Usuario.h"

#ifndef PROFESSOR_H
#define PROFESSOR_H

class professor : public usuario
{
	//Atributos em private
	string departamento;
	int sala;
public:
	//Construtor inicializa professor e usuario
	professor(string,string, int);
	//Atribui departamento
	void setDepartamento(string);
	//Atribui sala
	void setSala(int);
	//Função que imprime os valores refetentes a departamento e sala
	void print(void);
};

#endif
