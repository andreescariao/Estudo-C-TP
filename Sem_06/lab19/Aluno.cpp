#include "Aluno.h"

//Construtor default que inicializa o aluno em usuario pror heran�a
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
	cout <<"Matr�cula: "<<matricula<<endl;
	cout <<"Curso: "<<curso<<endl;
}
