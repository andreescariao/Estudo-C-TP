/*------------------------------------------------------
|       Aluno:André K Escarião Me ( 119210793 )        |
|		     Unidade(06) / Laboratório(19)             |
|				Compilador Falcon C++				   |
|			  										   |
|	   	Programa: Com classe Usuario que armazena      |
|	    dados de Aluno ou Professor				       |
|				   									   |		
|------------------------------------------------------*/

#include <locale>

#include <iostream>
using namespace std;

#include "Usuario.cpp"
#include "Aluno.cpp"
#include "Professor.cpp"

//Função principal
int main()
{
	
	setlocale(LC_ALL, "");
	
	int aux,idade;
	string nome,email;
	
	cout <<"Digite 1 para Aluno ou 2 para Professor: "<<endl;
	cin >> aux;
	cout <<"Digite seu nome: "<<endl;
	cin >> nome;
	cout <<"Digite seu e-mail: "<<endl;
	cin >> email;
	cout <<"Digite sua idade: "<<endl;
	cin >> idade;
	
	if(aux == 1){
		string matricula,curso;
		//Recebe do usuario matricula e curso referentes a aluno
		cout <<"Digite o numero de matrícula: "<<endl;
		cin >> matricula;
		cout <<"Digite o curso: "<<endl;
		cin >> curso;
		
		//Cria um objeto al da classe aluno que inicia com o construtor de usuario
		aluno a1(nome,email,idade);
		//Função para atribuir matricula
		a1.setMatricula(matricula);
		//Função para atribuir curso
		a1.setCurso(curso);
		
		//Imprime os dados
		cout <<endl<<"Dados do Aluno(a) "<<a1.getNome()<<": "<<endl;
		cout <<"E-mail: "<<a1.getEmail()<<endl;
		cout <<"Idade: "<<a1.getIdade()<<endl;
		a1.print();
		
	}else if(aux == 2){
		string departamento;
		int sala;
		
		//Recebe do usuario departamento e sala referentes a professor
		cout <<"Digite o departamento: "<<endl;
		cin >>departamento;
		cout <<"Digite o número da sala: "<<endl;
		cin >>sala;
		
		//cria um objeto p1 da classe professor que inicia com o construtor usuario
		professor p1(nome,email,idade);
		//Função para atribuir departamento
		p1.setDepartamento(departamento);
		//Função para atribuir sala
		p1.setSala(sala);
		
		//Imprime os dados
		cout <<endl<<"Dados do Professor(a) "<<p1.getNome()<<": "<<endl;
		cout <<"E-mail: "<<p1.getEmail()<<endl;
		cout <<"Idade: "<<p1.getIdade()<<endl;
		p1.print();
		
	}
	
	
	
	
	return 0;
}
