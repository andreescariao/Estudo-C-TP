#include "Usuario.h"

#ifndef ALUNO_H
#define ALUNO_H

class aluno : public usuario
{
	//Atributos private
	string matricula;
	string curso;
public:
	//Construtor de aluno em usuario
	aluno(string,string, int);
	//Atribui matricula
	void setMatricula(string);
	//Atribui curso
	void setCurso(string );
	//Função que imprime valores de matricula e curso refetentes a aluno
	void print(void);
};

#endif
