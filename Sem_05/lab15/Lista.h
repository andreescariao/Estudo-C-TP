#ifndef LISTA_H
#define LISTA_H

#include <iostream>
using namespace std;

class Lista{ 
   int tamanho ; //Tamanho da lista
   string *v ; //Ponteiro para strings
   
public: 
    Lista(int); // construtor default que recebe tamanho da lista
	void ordem(); //Metodo que ordena os nomes da lista em ordem alfabetica
    void setInsereNome(string,int); //Metodo que insere um nome na lista
	void ImprimeLista(); //Metodo que imprime os nomes da lista
    ~Lista();  //Destrutor
}; 

#endif