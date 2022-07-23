/* Aluno:Andr� K Escari�o Me / 119210793 / Unidade(04) / Laborat�rio(11)
Programa de classe 'Rel�gio' */

#include <iostream>
 #include <locale>
 #include <cstdlib>



using namespace std;


class Relogio
{
int hora,minuto,segundo; //Atributos do rel�gio
	
public:
	void setHora(int,int,int);	//Fun��o para atribuir as variaveis
	void getHora(int *,int *,int *);	//Fun��o para retornar o hor�rio com ponteiro
	void Avancar();	//Fun��o para avan�ar 1 segundo
};


void Relogio::setHora(int h,int m,int s){		//Fun��o para atribuir as variaveis ao rel�gio

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

void Relogio::getHora(int *h, int *m, int *s){	//Fun��o para retornar a hora
       *h=hora;									//com utiliza��o de ponteiro
       *m=minuto;
       *s=segundo;
}


void Relogio::Avancar(){	//Fun��o para avan�ar um segundo
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
	setlocale(LC_ALL, ""); //Fun��o para acentua��o dos caracteres
	
	Relogio r1;		//Cria��o do objeto r1
	
	r1.setHora(0,0,0);
	int h,m,s; //Variaveis hora,minuto e segundo para usar na fun��o setHora;
	int opcao, aux = 0; //variaveis do menu
 	
 	while(aux != 1)
 	{
 		cout <<  "Menu Rel�gio " <<endl
			<< "1- Adicionar hor�rio " << endl
			<< "2- Ver hor�rio " << endl
			<< "3- Avan�ar um segundo " << endl
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
				
				r1.setHora(h,m,s);	//Fun��o que atribui a hora atual
				
				cout << "Hor�rio adicionado! " << endl;
				
				break;
			case 2:
				r1.getHora(&h, &m, &s); //Fun��o para retornar a hora
				cout << "Hora atual: " <<h <<endl<< ":" << m <<endl<< ":" << s <<endl;
				break;
			case 3:
				r1.Avancar();  //Fun��o para avan�ar 1 segundo
				cout<<"Foi avan�ado 1 segundo no rel�gio! "<<endl;
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