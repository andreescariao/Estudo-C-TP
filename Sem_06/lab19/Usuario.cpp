#include "Usuario.h"

usuario::usuario(string n, string em, int id){
	nome = n;
	email = em;
	idade = id;
}
string usuario::getNome(){
	return nome;
	}
string usuario::getEmail(){
	return email;
}
int usuario::getIdade(){
	return idade;
}