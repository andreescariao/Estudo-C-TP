/* Aluno:Andr� K Escari�o Me / 119210793 / Unidade(03) / Laborat�rio(08)
Programa 'Elevador'  */

#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;

class Elevador
{
	int andar_atual;    //OBS: (0=t�rreo)
	int total_andares;  
	int capacidade;
	int total_pessoas;

public:
	
	Elevador();
	void inicializa(int,int);
	void entra();
	void sai();
   	void sobe();
	void desce();
};


Elevador::Elevador(){
	total_pessoas=0, andar_atual=0;
}

void Elevador::inicializa(int cap,int tand){
		this-> capacidade = cap;
		this->total_andares = tand;
}



void Elevador::entra(){				//Acrescenta uma pessoa ao elevador
	
	if(total_pessoas < capacidade ){
		cout <<"Entrando no Elevador... " << endl;
		this->total_pessoas = total_pessoas+1;
		cout <<"total de pessoas: " << total_pessoas << endl;
	}else{
		cout << "Elevador cheio " << endl;
	}
	
}

void Elevador::sai(){							//Retira uma pessoa do elevador
	if(total_pessoas > 0){
		cout << "Saindo do elevador... " << endl;
		this->total_pessoas = total_pessoas - 1;
		cout << "Total de pessoas: " << total_pessoas << endl;
	}else{
		cout <<"N�o tem mais pessoas no elevador " << endl;
	}
}


void Elevador::sobe(){                      //sobe um andar por vez
	if( andar_atual < total_andares){
		cout <<"Subindo um andar... " << endl;
		this-> andar_atual = andar_atual+1;
		cout<<"Andar atual: " << andar_atual << endl;
	}else{
		cout << "N�o existe mais andares " << endl;
	}
}

void Elevador::desce(){          //desce um andar por vez
	if(andar_atual == 0){
		cout <<"Voc� j� est� no t�rreo " << endl;
	}else{
		cout <<"Descendo um andar " << endl;
		this-> andar_atual = andar_atual-1;
		cout <<"Andar atual: " << andar_atual << endl;
	}
}




int main()
{
		setlocale(LC_ALL, "Portuguese");
	
	   	Elevador elevador;
		int opcao, aux = 0;
		int cap, tand;
	
	
	    //Menu de informa��es do elevador
	    //OBS: Menu para armazenar informa��es do elevador dentro do pr�dio de acordo com a quest�o
		cout << "Digite a capacidade do elevador " << endl; 
		cin >> cap;
		cout << "Digite o total de andares no pr�dio " << endl;
		cin >> tand;
		
		//Inicializa com capacidade e total de andares
		elevador.inicializa(cap,tand);
		
		
	//Menu principal para selecionar op��es do usu�rio do elevador
	//OBS: O elevador inicializa no t�rreo.
	//OBS: O elevador sobe ou desce um andar de cada vez de acordo com as especifica��es da quest�o.
 	while(aux != 1)
 	{
 		cout <<endl<< "Elevador " 
 		    <<endl<<"Escolha uma das op��es abaixo: " << endl
			<< endl << "1- Entrar no Elevador: "
			<< endl << "2- Subir: "
			<< endl << "3- Descer: "
			<< endl << "4- Sair do Elevador: " 
			<< endl << "0- Sair do menu: " << endl;
		cin >> opcao;
		
		system("cls");
		switch(opcao)
		{
			case 1:	
				elevador.entra();
				break;
			case 2:
				elevador.sobe();
				break;
			case 3:
				elevador.desce();
				break;
			case 4:
				elevador.sai();
				break;
			case 0:
				cout <<"Saindo do menu... " << endl;
				aux = 1;
				break;
			default:
				break;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	
	
	
	
	return 0;
}