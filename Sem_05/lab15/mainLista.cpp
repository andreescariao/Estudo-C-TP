/* Aluno:André K Escarião Me / 119210793 / Unidade(05) / Laboratório(15)
Compilador Falcon C++
Programa de classe Lista
*/

#include <iostream>
#include <locale>
#include <string>
#include <stdio.h>

using namespace std;
#include "Lista.cpp"

int main(){
	setlocale(LC_ALL,"");
	
	int tam,i=0;
	string nome;
	
	cout << "Digite a quantidade de nomes da lista:" << endl;
	cin >> tam;
	Lista lista1(tam);
	
	
	//Insere um nome à lista
	while(i<tam){
	cout<<"Digite o nome da posição " <<i<< ": ";
	cin>>nome;
	lista1.setInsereNome(nome,i);
	i++;
	}
	
	//Ordena a lista em ordem alfabética
	lista1.ordem();
	
	//Imprime os nomes da lista
	lista1.ImprimeLista();
	
	return 0;
}