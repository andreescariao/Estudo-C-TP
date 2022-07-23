/* Aluno:André K Escarião Me / 119210793 / Unidade(03) / Laboratório(07) 
Programa 'Televisão' com controle de volume de som, seleção de canal e consulta de ambos. */

#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;


class Televisao
{
	int canal, volume;
	
public:
	
	Televisao();
	void Aumentar_volume(int);
	void Diminuir_volume(int);
	void Aumentar_canal(int);
	void Abaixar_canal(int);
	void Trocar_canal(int);
	void Informar_numeros();
	
};

//Construtor que inicializa (por default) o volume e o canal da TV
Televisao::Televisao(){ 									
	canal=0, volume=0;
}

//Método para aumentar volume
void Televisao::Aumentar_volume(int vol){
	if(volume >=0 && volume <60){	//Define um limite entre 0 e 60 para volume
	 volume = volume+vol;
 	 cout << "Volume: " << volume << endl;
	}else{ 
		cout << "O volume já está no limite máximo " << endl; 
		}
}

//Método para diminuir volume
void Televisao::Diminuir_volume(int vol){
	if(volume >0 && volume <=60){
	 volume = volume-vol;
	 cout << "Volume: " << volume << endl;
	}else{ 
		cout << "O volume já está no mínimo " << endl; 
		}
}

//Método para aumentar canal
void Televisao::Aumentar_canal(int can){
	if(canal >=0 && canal <100){   //Define um limite entre 0 e 100 para canais
	 canal = canal+can;
 	 cout << "Canal: " << canal << endl;
	}else{ 
		cout << "Este é o último canal " << endl; 
		}
}

//Método para abaixar canal
void Televisao::Abaixar_canal(int can){
	if(canal >0 && canal <=100){
	 canal = canal-can;
	 cout << "Canal: " << canal << endl;
	}else{ 
		cout << "Este é o primeiro canal " << endl; 
		}
}

//Método para trocar de canal
void Televisao::Trocar_canal(int nr){
	if(nr >=0 && nr <=100){				//Troca de canal se o canal desejado estiver entre 0 e 100
		canal = nr;
	cout << "Canal: " << canal << endl;
	}else{
		cout <<"Canal não encontrado" << endl;
	}
}

//Método para informar número de volume e canal
void Televisao::Informar_numeros(){      
	cout <<	"Canal atual: " << canal << endl;       //Imprime Canal
	cout << "Volume atual: " << volume << endl;     //Imprime Volume
	}



int main()
{
	int	vol=1, can=1, nr=0;
	int opcao, aux = 0; 
	
	Televisao tv1;
	
	setlocale(LC_ALL, "Portuguese");
	
 	//Menu principal para selecionar opções do usuário
 	while(aux != 1)
 	{
 		cout <<endl<< "Controle de Televisão " 
 		    <<endl<<"Escolha uma das opções abaixo: " << endl
			<< endl << "1- Aumentar volume"
			<< endl << "2- Abaixar volume"
			<< endl << "3- Aumentar canal"
			<< endl << "4- Abaixar canal"
			<< endl << "5- Trocar de canal"
			<< endl << "6- Consultar número atual de canal e volume"
			<< endl << "0- Finalizar" << endl;
		cin >> opcao;
		
		system("cls");
		switch(opcao)
		{
			case 1:	
				tv1.Aumentar_volume(vol); //Chama a função para aumentar o volume
													
				break;
			case 2:
            	tv1.Diminuir_volume(vol); //Chama a função para diminuir o volume
			
				break;
			case 3:
				tv1.Aumentar_canal(can); //Chama a função para aumentar o canal
				
				break;
			case 4:
				tv1.Abaixar_canal(can); //Chama a função para abaixar o canal
				
				break;
			case 5:
				cout << "Digite o número do canal desejado: " << endl;
				cin >> nr;   //Recebe um número do usuário para trocar de canal
				tv1.Trocar_canal(nr); //Chama a função para trocar o canal
				
				break;
			case 6:
				tv1.Informar_numeros(); //Chama a função para consultar os números atuais de canal e volume
				break; 
			case 0:
				cout<<"Finalizando Controle"<<endl;
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