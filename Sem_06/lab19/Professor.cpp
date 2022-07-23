#include "Professor.h"

//Construtor default que inicializa o professor em usuario pror herança
professor::professor(string nome,string email, int idade):usuario(nome,email,idade){
		departamento = " ";
		sala = 0;
	}
void professor::setDepartamento(string d){
	departamento = d;
}	
void professor::setSala(int s){
	sala = s;
}	
void professor:: print(void){
	cout<<"Departamento: "<<departamento<<endl;
	cout<<"Sala: "<<sala<<endl;
	}