#include "Aluno.h"

//Construtor default que inicializa o aluno em usuario pror herança
aluno::aluno(string nome,string email, int idade):usuario(nome,email,idade){
	matricula =" ";
	curso = " ";
}
void aluno::setMatricula(string m){
	matricula = m;
}
void aluno::setCurso(string c){
	curso = c;
}
void aluno::print(void){
	cout <<"Matrícula: "<<matricula<<endl;
	cout <<"Curso: "<<curso<<endl;
}
