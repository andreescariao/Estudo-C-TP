// Aluno:André K Escarião Me / 119210793 / Unidade(02) / Laboratório(04) 
//Programa de classe 'Retângulo' com as seguintes operações:(01) Armazenar coordenadas dos vértices como atributos da classe, 
//(02)Função que receba as coordenadas e verifique se estão no primeiro quadrante, sem que x ou y seja maior que 15(sejam positivos>15),
//(03)verificar se as coordenadas especificam um retângulo,(04)Definir funções que calculam o comprimento, a largura, o perímetro e a área,
//(o comprimento deve ser o maior das dimensões),(05)Função que denomina se é um quadrado.

#include <iostream>
#include <locale.h>
using namespace std;


class retangulo																	//Classe retângulo
{
	int x1, x2, y1, y2, comprimento, largura, perimetro, area;					//(01)Armazena coordenadas dos vértices como atributos

public:
	retangulo(){
   	   	 x1=0, x2=0, y1=0,y2=0, perimetro=0, area=0;
	}
	
	int setValores(int x1, int x2, int y1, int y2){
		this ->x1 =x1;
		this ->x2 =x2;
		this ->y1 =y1;
		this ->y2 =y2;                            }
		
	
	bool getQuadrante(){														//(02)Função que verifica o quadrante
		if( 0 <= x1 && x1 <=15 && 0<= y1 && y1 <=15 && 0<= x2 && x2 <=15 && 0 <=y2 && y2 <=15 ){
			return true;
			}else{
				return false;
			}					}

	void setComprimento_largura_ou_quadrado(){									//(03)(05)Função que responde se é retângulo ou
																				//quadrado
			if(x1+x2 != y1+y2){
				cout<< endl<< "As coordenadas são de um retângulo! " << endl;
			if(x1+x2 > y1+y2 ){													//(04)O segundo 'if' denomina comprimento e largura
				comprimento = x2-x1;											//(Comprimento é o maior das dimensões)
				largura = y2-y1;
			}else if(x1+x2 < y1+y2){
				comprimento = y2-y1;											 
				largura = x2-x1;       }
			
			}else if(x1+x2 == y1+y2){
				cout << endl << "As coordenadas são de um quadrado! " << endl;
				comprimento = x1;
				largura = y1;								
			} }
	
	void Perimetro(){															//(04)Funções que calculam o perímetro e a área
		perimetro = 2*(comprimento+largura); }
	void Area(){
		area = comprimento*largura; }
	
	int getComprimento(){														//Funções com uso de 'get' para retorno do comprimento
		return this->comprimento;												//largura, perímetro e a área
	}
	int getLargura(){
		return this->largura;
	}
	int getPerimetro(){
		return this->perimetro;
	}
	int getArea(){
		return this->area;
	}

	
	
	
};

int main()																		//Função principal
{
	retangulo *retangulo1 = new retangulo();									//Criação do objeto retangulo
	
	int x1,x2,y1,y2;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite os vértices do retângulo: " << endl;						//Menu de inicializar os atributos
	cout << "x1: " <<endl;
    cin>>x1;
    cout << "x2: " <<endl;
	cin>>x2;
	cout << "y1: " <<endl;
	cin>>y1;
	cout << "y2: " <<endl;
	cin>>y2;
	
	retangulo1->setValores(x1,x2,y1,y2);										//Atribui os valores à classe
	
	
	if(retangulo1->getQuadrante() == true && x1+y1 <= x2+y2){					//'If' executa somente se estiver no primeiro quadrante
																				//os vertices forem menor que 15
	retangulo1->setComprimento_largura_ou_quadrado();							//e satisfaça a condição de existência (x1+y1<=x2+y2)
	
	cout << "Comprimento: " << retangulo1->getComprimento() << endl;			//Imprime comprimento e largura
	cout << "Largura: " << retangulo1->getLargura() << endl;
	
	retangulo1->Perimetro();													
	retangulo1->Area();
	cout << "Perimetro: " << retangulo1->getPerimetro() << endl;				//Imprime perímetro e área
	cout << "Area: " << retangulo1->getArea() << endl;
	}else{
		cout << endl << "O quadrilátero não satisfaz algum dos seguintes requisitos " << endl;
		cout << "1- Não está no primeiro quadrante " << endl;
		cout << "2- Uma das posições é maior que 15 " << endl;
		cout << "3- Não satisfaz a condição de existência de um quadrilátero " << endl;
	}
	
	
	
	return 0;
}