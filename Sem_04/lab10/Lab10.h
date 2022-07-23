#ifndef LAB10_H
#define LAB10_H

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


#endif
