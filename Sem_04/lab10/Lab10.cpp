#include "Lab10.h"

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
	cout << "Impresso na forma a/b: " << numerador <<"/"<< denominador << endl;
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
