// Aluno:Andr� K Escari�o Me / 119210793 / Unidade(02) / Laborat�rio(04) 
//Programa de classe 'Ret�ngulo' com as seguintes opera��es:(01) Armazenar coordenadas dos v�rtices como atributos da classe, 
//(02)Fun��o que receba as coordenadas e verifique se est�o no primeiro quadrante, sem que x ou y seja maior que 15(sejam positivos>15),
//(03)verificar se as coordenadas especificam um ret�ngulo,(04)Definir fun��es que calculam o comprimento, a largura, o per�metro e a �rea,
//(o comprimento deve ser o maior das dimens�es),(05)Fun��o que denomina se � um quadrado.

#include <iostream>
#include <locale.h>
using namespace std;


class retangulo																	//Classe ret�ngulo
{
	int x1, x2, y1, y2, comprimento, largura, perimetro, area;					//(01)Armazena coordenadas dos v�rtices como atributos

public:
	retangulo(){
   	   	 x1=0, x2=0, y1=0,y2=0, perimetro=0, area=0;
	}
	
	int setValores(int x1, int x2, int y1, int y2){
		this ->x1 =x1;
		this ->x2 =x2;
		this ->y1 =y1;
		this ->y2 =y2;                            }
		
	
	bool getQuadrante(){														//(02)Fun��o que verifica o quadrante
		if( 0 <= x1 && x1 <=15 && 0<= y1 && y1 <=15 && 0<= x2 && x2 <=15 && 0 <=y2 && y2 <=15 ){
			return true;
			}else{
				return false;
			}					}

	void setComprimento_largura_ou_quadrado(){									//(03)(05)Fun��o que responde se � ret�ngulo ou
																				//quadrado
			if(x1+x2 != y1+y2){
				cout<< endl<< "As coordenadas s�o de um ret�ngulo! " << endl;
			if(x1+x2 > y1+y2 ){													//(04)O segundo 'if' denomina comprimento e largura
				comprimento = x2-x1;											//(Comprimento � o maior das dimens�es)
				largura = y2-y1;
			}else if(x1+x2 < y1+y2){
				comprimento = y2-y1;											 
				largura = x2-x1;       }
			
			}else if(x1+x2 == y1+y2){
				cout << endl << "As coordenadas s�o de um quadrado! " << endl;
				comprimento = x1;
				largura = y1;								
			} }
	
	void Perimetro(){															//(04)Fun��es que calculam o per�metro e a �rea
		perimetro = 2*(comprimento+largura); }
	void Area(){
		area = comprimento*largura; }
	
	int getComprimento(){														//Fun��es com uso de 'get' para retorno do comprimento
		return this->comprimento;												//largura, per�metro e a �rea
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

int main()																		//Fun��o principal
{
	retangulo *retangulo1 = new retangulo();									//Cria��o do objeto retangulo
	
	int x1,x2,y1,y2;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite os v�rtices do ret�ngulo: " << endl;						//Menu de inicializar os atributos
	cout << "x1: " <<endl;
    cin>>x1;
    cout << "x2: " <<endl;
	cin>>x2;
	cout << "y1: " <<endl;
	cin>>y1;
	cout << "y2: " <<endl;
	cin>>y2;
	
	retangulo1->setValores(x1,x2,y1,y2);										//Atribui os valores � classe
	
	
	if(retangulo1->getQuadrante() == true && x1+y1 <= x2+y2){					//'If' executa somente se estiver no primeiro quadrante
																				//os vertices forem menor que 15
	retangulo1->setComprimento_largura_ou_quadrado();							//e satisfa�a a condi��o de exist�ncia (x1+y1<=x2+y2)
	
	cout << "Comprimento: " << retangulo1->getComprimento() << endl;			//Imprime comprimento e largura
	cout << "Largura: " << retangulo1->getLargura() << endl;
	
	retangulo1->Perimetro();													
	retangulo1->Area();
	cout << "Perimetro: " << retangulo1->getPerimetro() << endl;				//Imprime per�metro e �rea
	cout << "Area: " << retangulo1->getArea() << endl;
	}else{
		cout << endl << "O quadril�tero n�o satisfaz algum dos seguintes requisitos " << endl;
		cout << "1- N�o est� no primeiro quadrante " << endl;
		cout << "2- Uma das posi��es � maior que 15 " << endl;
		cout << "3- N�o satisfaz a condi��o de exist�ncia de um quadril�tero " << endl;
	}
	
	
	
	return 0;
}