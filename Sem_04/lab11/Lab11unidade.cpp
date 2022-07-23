/* Aluno:André K Escarião Me / 119210793 / Unidade(04) / Laboratório(11)
Programa de classe 'Relógio' */

#include <iostream>
 #include <locale>
 #include <cstdlib>



using namespace std;


class Relogio
{
int hora,minuto,segundo; //Atributos do relógio
	
public:
	void setHora(int,int,int);	//Função para atribuir as variaveis
	void getHora(int *,int *,int *);	//Função para retornar o horário com ponteiro
	void Avancar();	//Função para avançar 1 segundo
};


void Relogio::setHora(int h,int m,int s){		//Função para atribuir as variaveis ao relógio

	if(h < 24 && h > 0)
        hora = h;
       else
        hora = 0;
    if(m < 60 && m > 0)
        minuto = m;
       else
       	minuto = 0;
    if(s < 60 && s > 0)
    	segundo = s;
       else
        segundo = 0;
    
}

void Relogio::getHora(int *h, int *m, int *s){	//Função para retornar a hora
       *h=hora;									//com utilização de ponteiro
       *m=minuto;
       *s=segundo;
}


void Relogio::Avancar(){	//Função para avançar um segundo
	segundo++;

   if(segundo>59){
    segundo=0;
    minuto++; 
	  	  	  }
      
  if(minuto>59){
    minuto=0;
    hora++;
 	 	 	 }
 
  if(hora>23){
    hora=0;
    minuto=0;
    segundo=0;
			}

}



int main()
{
	setlocale(LC_ALL, ""); //Função para acentuação dos caracteres
	
	Relogio r1;		//Criação do objeto r1
	
	r1.setHora(0,0,0);
	int h,m,s; //Variaveis hora,minuto e segundo para usar na função setHora;
	int opcao, aux = 0; //variaveis do menu
 	
 	while(aux != 1)
 	{
 		cout <<  "Menu Relógio " <<endl
			<< "1- Adicionar horário " << endl
			<< "2- Ver horário " << endl
			<< "3- Avançar um segundo " << endl
			<< "0- Sair do menu" << endl;
		cin >> opcao;
		
		system("cls");
		switch(opcao)
		{
			case 1:
				cout<<"Hora: "<<endl;
				cin >> h;
				cout<<"Minuto: "<<endl;
				cin >> m;
				cout<<"Segundo: "<<endl;
				cin >> s;
				
				r1.setHora(h,m,s);	//Função que atribui a hora atual
				
				cout << "Horário adicionado! " << endl;
				
				break;
			case 2:
				r1.getHora(&h, &m, &s); //Função para retornar a hora
				cout << "Hora atual: " <<h <<endl<< ":" << m <<endl<< ":" << s <<endl;
				break;
			case 3:
				r1.Avancar();  //Função para avançar 1 segundo
				cout<<"Foi avançado 1 segundo no relógio! "<<endl;
				break;
			case 0:
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