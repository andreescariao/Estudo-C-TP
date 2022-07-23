/* Aluno:André K Escarião Me / 119210793 / Unidade(04) / Laboratório(10)
Compilador Falcon C++
Programa de Classe Rational com métodos Multiplicar, Dividir, Imprimir a/b e Imprimir float 
*/

#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

class Rational
{
	
 int numerador;			//Numerador da fração
 int denominador; 		//Denominador da fração
	
public:
	
	Rational();
	void Multiplicar(Rational,Rational); //Método para Multiplicar
	void Dividir(Rational, Rational);	 //Método para dividir
	void Imprimir();				   	 //Método Imprimir no formato a/b
	float ImprimirFloat();				 //Méttodo imprimir no formato float
	void setNumerador(int);
	void setDenominador(int);
	int getNumerador();
	int getDenominador();
	
};

Rational::Rational(){  //Construtor padrão
	numerador=1, denominador=1;
}

//Método multiplicar frações
void Rational::Multiplicar(Rational f1, Rational f2){ 
	
	
	
	if(f1.denominador !=0 && f2.denominador !=0){
		
	numerador= f1.numerador*f2.numerador;
	denominador = f1.denominador*f2.denominador;
	
	cout <<"As frações foram multiplicadas! " << endl;
	
	}else{
		cout<<"O denominador deve ser diferente de zero! " << endl; // Denominador não pode ser zero
	}
}

//Método dividir frações
void Rational::Dividir(Rational f1, Rational f2){	
	
	if(f1.denominador !=0 && f2.denominador !=0){
		
	numerador = f1.numerador*f2.denominador;
	denominador = f1.denominador*f2.numerador;
	
	cout << "As frações foram divididas! " << endl;
	}else{
		cout <<"O denominador deve ser diferente de zero! " << endl;
	}
}


//Imprime no formato a/b
void Rational::Imprimir(){	
	cout << numerador <<"/"<< denominador << endl;
}

//Imprime no formato float
float Rational::ImprimirFloat(){ 	
	return (float)numerador/denominador;
}



void Rational::setNumerador(int numerador)
{
	this->numerador = numerador;
}
void Rational::setDenominador(int denominador)
{
	this->denominador = denominador;
}



int Rational::getNumerador(){
	return this->numerador;
}
int Rational::getDenominador(){
	return this->denominador;
}

int main()
{
	setlocale(LC_ALL, "");
	
	Rational fr,f1,f2;
	
	int numerador1, numerador2, denominador1, denominador2;
	int opcao, aux = 0;
	
	
	
		
	cout << "Digite o numerador da fração 1: " << endl;
	cin >> numerador1;
	f1.setNumerador(numerador1);
	
	cout << "Digite o denominador da fração 1: " << endl;
	cin >> denominador1;
	f1.setDenominador(denominador1);
	
	cout << "Digite o numerador da fração 2: " << endl;
	cin >> numerador2;
	f2.setNumerador(numerador2);
	
	cout << "Digite o denominador da fração 2: " << endl;
	cin >> denominador2;
	f2.setDenominador(denominador2);
	
	
	while(aux != 1){ //Menu Inicial
 		cout <<  "Operações com Números Racionais " <<endl
			<< "1-Multiplicar " <<endl
			<< "2-Dividir " << endl
			<< "3-Imprimir na forma a/b " << endl
			<< "4-Imprimir como ponto flutuante " << endl
			<< "0-Finalizar Programa " << endl;
		cin >> opcao;
		
		system("cls");
		switch(opcao)
		{
			case 1:
				fr.Multiplicar(f1,f2);
				break;
			case 2:
				fr.Dividir(f1,f2);
				break;
			case 3:
				fr.Imprimir();
				break;
			case 4:
				cout << "Impresso na forma de float: " << fr.ImprimirFloat() << endl;
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